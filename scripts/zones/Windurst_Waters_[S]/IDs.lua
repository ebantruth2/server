-----------------------------------
-- Area: Windurst_Waters_[S]
-----------------------------------
require("scripts/globals/zone")
-----------------------------------

zones = zones or {}

zones[tpz.zone.WINDURST_WATERS_S] =
{
    text =
    {
        ITEM_CANNOT_BE_OBTAINED    = 6382, -- You cannot obtain the <item>. Come back after sorting your inventory.
        FULL_INVENTORY_AFTER_TRADE = 6386, -- You cannot obtain the <item>. Try trading again after sorting your inventory.
        ITEM_OBTAINED              = 6388, -- Obtained: <item>.
        GIL_OBTAINED               = 6389, -- Obtained <number> gil.
        KEYITEM_OBTAINED           = 6391, -- Obtained key item: <keyitem>.
        KEYITEM_LOST               = 6392, -- Lost key item: <keyitem>.
        NOT_HAVE_ENOUGH_GIL        = 6393, -- You do not have enough gil.
        ITEMS_OBTAINED             = 6397, -- You obtain <number> <item>!
        CARRIED_OVER_POINTS        = 6999, -- You have carried over <number> login point[/s].
        LOGIN_CAMPAIGN_UNDERWAY    = 7000, -- The [/January/February/March/April/May/June/July/August/September/October/November/December] <number> Login Campaign is currently underway!<space>
        LOGIN_NUMBER               = 7001, -- In celebration of your most recent login (login no. <number>), we have provided you with <number> points! You currently have a total of <number> points.
        FISHING_MESSAGE_OFFSET     = 7049, -- You can't fish here.
        PELFTRIX_SHOP_DIALOG       = 7200, -- Boodlix's Emporium open for business! Boodlix's gots whats you wants, at the price yous likes! It's okay, we takes yours gils, too!
        MOG_LOCKER_OFFSET          = 7465, -- Your Mog Locker lease is valid until <timestamp>, kupo.
        REGIME_CANCELED            = 7735, -- Current training regime canceled.
        HUNT_ACCEPTED              = 7753, -- Hunt accepted!
        USE_SCYLDS                 = 7754, -- You use <number> [scyld/scylds]. Scyld balance: <number>.
        HUNT_RECORDED              = 7765, -- You record your hunt.
        OBTAIN_SCYLDS              = 7767, -- You obtain <number> [scyld/scylds]! Current balance: <number> [scyld/scylds].
        HUNT_CANCELED              = 7771, -- Hunt canceled.
        HOMEPOINT_SET              = 10866, -- Home point set!
        YASSI_POSSI_DIALOG         = 10886, -- Swifty-wifty and safey-wafey parcel delivery! Is there something you need to send?
        EZURAROMAZURA_SHOP_DIALOG  = 10887, -- A potent spelly-well or two can be the key to survival in this time of war. But can you mastaru my magic, or will it master you?
        DOOR_ACOLYTE_HOSTEL_LOCKED = 11329, -- The door appears to be locked...
        MIKHE_ARYOHCHA_DIALOG      = 12466, -- Do you like the headpiece? I made it from my firrrst victim. I wear it to let everrryone know what happens when they cross Mikhe Aryohcha!
        LUTETE_DIALOG              = 12468, -- <Yaaawn>... Mastering these Near Eastern magics can be quite taxing. If I had a choice, I'd rather be back in bed, relaxing...
        ALLIED_SIGIL               = 12912, -- You have received the Allied Sigil!
        RETRIEVE_DIALOG_ID         = 14979, -- You retrieve <item> from the porter moogle's care.
        COMMON_SENSE_SURVIVAL      = 15040, -- It appears that you have arrived at a new survival guide provided by the Servicemen's Mutual Aid Network. Common sense dictates that you should now be able to teleport here from similar tomes throughout the world.
    },
    mob =
    {
    },
    npc =
    {
    },
}

return zones[tpz.zone.WINDURST_WATERS_S]
