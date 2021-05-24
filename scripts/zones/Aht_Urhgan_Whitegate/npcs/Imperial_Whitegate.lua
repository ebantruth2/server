-----------------------------------
-- Area: Aht Urhgan Whitegate
--  NPC: Imperial Whitegate
-- pos: 152, -2, 0, 50
-----------------------------------
require("scripts/globals/items")
require("scripts/globals/missions")
require("scripts/globals/status")
require("scripts/globals/titles")
require("scripts/globals/besieged")
require("scripts/globals/npc_util")
require("scripts/zones/Aht_Urhgan_Whitegate/Shared")
local ID = require("scripts/zones/Aht_Urhgan_Whitegate/IDs")
-----------------------------------
local entity = {}

entity.onTrade = function(player, npc, trade)
end

entity.onTrigger = function(player,npc)
    local noWeapons = player:getEquipID(xi.slot.MAIN) == 0 and player:getEquipID(xi.slot.SUB) == 0
    if player:getCurrentMission(TOAU) == xi.mission.id.toau.GUESTS_OF_THE_EMPIRE and player:getCharVar("AhtUrganStatus") == 1 and
        doRoyalPalaceArmorCheck(player) and noWeapons then
        player:startEvent(3078, 0, 1, 0, 0, 0, 0, 0, 1, 0)
    elseif player:getCurrentMission(TOAU) == xi.mission.id.toau.SEAL_OF_THE_SERPENT and noWeapons then
        player:startEvent(3111)
    elseif player:getCurrentMission(TOAU) == xi.mission.id.toau.IMPERIAL_CORONATION and
        doRoyalPalaceArmorCheck(player) and noWeapons then
        player:startEvent(3140, xi.besieged.getMercenaryRank(player), player:getTitle(), 0, 0, 0, 0, 0, 0, 0)
    elseif player:getCurrentMission(TOAU) >= xi.mission.id.toau.IMPERIAL_CORONATION and
        doRoyalPalaceArmorCheck(player) and noWeapons then
        local ring = player:getCharVar("TOAU_RINGTIME")
        local standard = player:hasItem(129)

        local ringParam = 0

        if ring == 0 then
            ringParam = 1
        end

        local standardParam = 0

        if standard == false then
            standardParam = 1
        end

        if ringParam > 0 or standardParam > 0 then
            player:startEvent(3155, standardParam, ringParam, 0, 0, 0, 0, 0, 0, 0)
        end

    -- TRANSFORMATIONS
    elseif player:getCharVar("TransformationsProgress") == 1 then
        player:startEvent(722)
    else
        player:messageSpecial(ID.text.GATE_IS_FIRMLY_CLOSED)
    end
end

entity.onEventUpdate = function(player, csid, option)
    if csid == 3140 or csid == 3155 then
        if option == 1 and npcUtil.giveItem(player, xi.items.BALRAHNS_RING) then
            player:setCharVar("TOAU_RINGTIME", os.time())
            player:setCharVar("TOAU_RINGRECV", 1)
        elseif option == 2 and npcUtil.giveItem(player, xi.items.ULTHALAMS_RING) then
            player:setCharVar("TOAU_RINGTIME", os.time())
            player:setCharVar("TOAU_RINGRECV", 1)
        elseif option == 3 and npcUtil.giveItem(player, xi.items.JALZAHNS_RING) then
            player:setCharVar("TOAU_RINGTIME", os.time())
            player:setCharVar("TOAU_RINGRECV", 1)
        elseif option == 4 then
            npcUtil.giveItem(player, xi.items.IMPERIAL_STANDARD)
        elseif option == 99 then
            player:updateEvent(xi.items.BALRAHNS_RING, xi.items.ULTHALAMS_RING, xi.items.JALZAHNS_RING)
        end
    end
end

entity.onEventFinish = function(player, csid, option)
    if csid == 3078 and npcUtil.giveItem(player, xi.items.IMPERIAL_MYTHRIL_PIECE) then
        player:completeMission(xi.mission.log_id.TOAU, xi.mission.id.toau.GUESTS_OF_THE_EMPIRE)
        player:setCharVar("AhtUrganStatus", 0)
        player:addTitle(xi.title.OVJANGS_ERRAND_RUNNER)
        player:needToZone(true)
        player:setCharVar("TOAUM18_STARTDAY", VanadielDayOfTheYear())
        player:addMission(xi.mission.log_id.TOAU, xi.mission.id.toau.PASSING_GLORY)
    elseif csid == 3111 then
        player:completeMission(xi.mission.log_id.TOAU, xi.mission.id.toau.SEAL_OF_THE_SERPENT)
        player:addMission(xi.mission.log_id.TOAU, xi.mission.id.toau.MISPLACED_NOBILITY)
    elseif csid == 3140 and player:getCharVar("TOAU_RINGRECV") == 1 then
        player:completeMission(xi.mission.log_id.TOAU, xi.mission.id.toau.IMPERIAL_CORONATION)
        player:addMission(xi.mission.log_id.TOAU, xi.mission.id.toau.THE_EMPRESS_CROWNED)
        player:setCharVar("TOAU_RINGRECV", 0)
    elseif csid == 3155 and option == 6 then
        npcUtil.giveItem(player, xi.items.IMPERIAL_STANDARD)
    elseif csid == 722 then
        player:addQuest(xi.quest.log_id.AHT_URHGAN, xi.quest.id.ahtUrhgan.TRANSFORMATIONS)
        player:setCharVar("TransformationsProgress", 2)
        player:setCharVar("[BLUAF]Remaining", 7) -- Player can now craft BLU armor
    end
end

return entity
