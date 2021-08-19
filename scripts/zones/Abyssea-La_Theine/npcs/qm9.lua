-----------------------------------
-- Zone: Abyssea-LaTheine
--  NPC: qm9 (???)
-- Spawns Nguruvilu
-- !pos 311 23 -524 132
-----------------------------------
require("scripts/globals/abyssea")
-----------------------------------
local entity = {}

entity.onTrade = function(player, npc, trade)
    xi.abyssea.qmOnTrade(player, npc, trade, 17318442, { 2899 })
end

entity.onTrigger = function(player, npc)
    xi.abyssea.qmOnTrigger(player, npc, 0, 0, { 2899 })
end

entity.onEventUpdate = function(player, csid, option)
end

entity.onEventFinish = function(player, csid, option)
end

return entity
