-----------------------------------
-- Tachi Koki
-- Great Katana weapon skill
-- Skill level: 175
-- Deals light elemental damage to enemy. Damage varies with TP.
-- Will stack with Sneak Attack.
-- Aligned with the Aqua Gorget & Thunder Gorget.
-- Aligned with the Aqua Belt & Thunder Belt.
-- Element: Light
-- Modifiers: STR:30%  MND:50%
-- 100%TP    200%TP    300%TP
-- .5        .75        1.00
-----------------------------------
require("scripts/globals/status")
require("scripts/globals/settings")
require("scripts/globals/weaponskills")
-----------------------------------
local weaponskill_object = {}

weaponskill_object.onUseWeaponSkill = function(player, target, wsID, tp, primary, action, taChar)

    local params = {}
    params.numHits = 1
    params.ftp100 = 0.5 params.ftp200 = 0.75 params.ftp300 = 1
    params.str_wsc = 0.5 params.dex_wsc = 0.0 params.vit_wsc = 0.0 params.agi_wsc = 0.0 params.int_wsc = 0.0 params.mnd_wsc = 0.3 params.chr_wsc = 0.0
    params.crit100 = 0.0 params.crit200 = 0.0 params.crit300 = 0.0
    params.canCrit = false
    params.acc100 = 0.0 params.acc200= 0.0 params.acc300= 0.0
    params.atk100 = 1; params.atk200 = 1; params.atk300 = 1
    params.hybridWS = true
    params.ele = xi.magic.ele.LIGHT
    params.skill = xi.skill.GREAT_KATANA

    if (xi.settings.USE_ADOULIN_WEAPON_SKILL_CHANGES == true) then
        params.str_wsc = 0.3 params.mnd_wsc = 0.5
    end

    local damage, criticalHit, tpHits, extraHits = doPhysicalWeaponskill(player, target, wsID, params, tp, action, primary, taChar)
    return tpHits, extraHits, criticalHit, damage

end

return weaponskill_object
