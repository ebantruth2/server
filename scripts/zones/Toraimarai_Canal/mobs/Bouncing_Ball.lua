-----------------------------------
-- Area: Toraimarai Canal
--  Mob: Bouncing Ball
-- Note: PH for Canal Moocher
-----------------------------------
local ID = require("scripts/zones/Toraimarai_Canal/IDs")
require("scripts/globals/mobs")
-----------------------------------
local entity = {}

entity.onMobDeath = function(mob, player, isKiller)
end

entity.onMobDespawn = function(mob)
    tpz.mob.phOnDespawn(mob, ID.mob.CANAL_MOOCHER_PH, 10, 3600) -- 1 hour
end

return entity
