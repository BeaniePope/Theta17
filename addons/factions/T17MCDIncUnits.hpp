
class T17_MCD_Base_Unit: B_Soldier_base_F
{
    author = "Queen";
    scope = 0;
    scopeCurator = 0;

    faction = "T17_MCD_Faction";
    editorCategory = "T17_MCD";
    editorSubcategory = "T17_MCD_Security";
    side = 0;

    identityTypes[] = {"Head_Euro","Head_Asian","Head_African","LanguageENG_F"};

    weapons[] = {"Throw","Put"};
    respawnWeapons[] = {"Throw","Put"};

    magazines[] = {};
    respawnMagazines[] = {};

    items[] = {};
    respawnItems[] = {};

    linkedItems[] = {"ItemMap","ItemGPS","","ItemCompass"};
    respawnLinkedItems[] = {"ItemMap","ItemGPS","","ItemCompass"};
};

class T17_MCD_PrivateSecurity: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Private Security";

    uniformClass = "T17_MCD_Suit_Item";
    //nakedUniform = "T17_MCD_Suit_Item";
    backpack = "";
    weapons[] =
    {
        "T17_MCD_P229",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_MCD_P229",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] = {};
    respawnItems[] = {};

    linkedItems[] =
    {
        "H_WirelessEarpiece_F",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin"
    };

    respawnLinkedItems[] =
    {
        "H_WirelessEarpiece_F",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin"
    };
};

class T17_MCD_PrivateSecurity_LightCombat: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Private Security - Light Combat";

    uniformClass = "T17_MCD_Suit_Item";
    //nakedUniform = "T17_MCD_Suit_Item";
    backpack = "";
    weapons[] =
    {
        "T17_MCD_MP5K",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_MCD_MP5K",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] = {"tsp_sling_lanyard"};
    respawnItems[] = {"tsp_sling_lanyard"};

    linkedItems[] =
    {
        "MMAC_Guard",
        "H_WirelessEarpiece_F",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin"
    };

    respawnLinkedItems[] =
    {
        "MMAC_Guard",
        "H_WirelessEarpiece_F",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin"
    };
};

class T17_MCD_PrivateSecurity_LightCombatRifleman: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Private Security - Rifleman";
    uniformClass = "T17_MCD_Suit_Item";
    //nakedUniform = "T17_MCD_Suit_Item";
    backpack = "";
    weapons[] =
    {
        "T17_MCD_CQBR",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_MCD_CQBR",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "rhs_mag_30Rnd_556x45_M855_PMAG",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] = {"tsp_sling_lanyard"};
    respawnItems[] = {"tsp_sling_lanyard"};

    linkedItems[] =
    {
        "MMAC_Guard",
        "H_WirelessEarpiece_F",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin"
    };

    respawnLinkedItems[] =
    {
        "MMAC_Guard",
        "H_WirelessEarpiece_F",
        "G_Aviator",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin"
    };
};


class T17_MCD_TRO_Rifleman: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "TRO - Rifleman";
    editorSubcategory = "T17_MCD_TRO";
    uniformClass = "MLO_OGA_Crye_SS_Black_Camo";
    //nakedUniform = "MLO_OGA_Crye_SS_Black_Camo";
    backpack = "B_Kitbag_blk";

    weapons[] =
    {
        "T17_MCD_SCARH",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_MCD_SCARH",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    respawnItems[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    linkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };

    respawnLinkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'MLO_OGA_Crye_SS_Black_Camo'";
    };
};

class T17_MCD_TRO_DMR: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "TRO - DMR";
    editorSubcategory = "T17_MCD_TRO";
    uniformClass = "MLO_OGA_Crye_SS_Black_Camo";
    //nakedUniform = "MLO_OGA_Crye_SS_Black_Camo";
    backpack = "B_Kitbag_blk";

    weapons[] =
    {
        "T17_MCD_SCARL",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_MCD_SCARL",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_29rnd_300BLK_STANAG",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    respawnItems[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    linkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };

    respawnLinkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'MLO_OGA_Crye_SS_Black_Camo'";
    };
};


class T17_MCD_TRO_MG: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "TRO - MG";
    editorSubcategory = "T17_MCD_TRO";
    uniformClass = "MLO_OGA_Crye_SS_Black_Camo";
    //nakedUniform = "MLO_OGA_Crye_SS_Black_Camo";
    backpack = "B_Kitbag_blk";

    weapons[] =
    {
        "T17_MCD_MINIMI",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "MCD_TacticalResponse_MINIMI",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_200rnd_556x45_M_SAW",
        "rhsusf_200rnd_556x45_M855_mixed_box",
        "rhsusf_200rnd_556x45_M855_mixed_box",
        "rhsusf_200rnd_556x45_M855_mixed_box",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "hlc_200rnd_556x45_M_SAW",
        "rhsusf_200rnd_556x45_M855_mixed_box",
        "rhsusf_200rnd_556x45_M855_mixed_box",
        "rhsusf_200rnd_556x45_M855_mixed_box",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    respawnItems[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    linkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };

    respawnLinkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'MLO_OGA_Crye_SS_Black_Camo'";
    };
};

class T17_MCD_TRO_RTO: T17_MCD_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "TRO - RTO";
    editorSubcategory = "T17_MCD_TRO";
    uniformClass = "MLO_OGA_Crye_SS_Black_Camo";
    //nakedUniform = "MLO_OGA_Crye_SS_Black_Camo";
    backpack = "MTF_FCPC_117G_veil";

    weapons[] =
    {
        "T17_MCD_SCARH",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_MCD_SCARH",
        "T17_MCD_P229",
        "ACE_VectorDay",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    respawnMagazines[] =
    {
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
        "hlc_10Rnd_357SIG_B_P229",
        "hlc_10Rnd_357SIG_B_P229"
    };

    items[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    respawnItems[] =
    {
        "tsp_sling_lanyard",
        "FirstAidKit","FirstAidKit","FirstAidKit",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ItemAndroid",
        "ItemcTabHCam",
        "ACE_IR_Strobe_Item",
        "FirstAidKit","FirstAidKit",
        "ACE_Canteen",
        "ACE_MRE_BeefStew",
        "ACE_WaterBottle","ACE_WaterBottle",
        "J3FF_FoxholeTool"
    };

    linkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };

    respawnLinkedItems[] =
    {
        "BTRG_SPIRITUS_F_BLK",
        "TRF_BTRG_CAIMAN_A1_BLK",
        "G_Bandanna_SCP_Purple",
        "ItemMap",
        "ItemGPS",
        "",
        "ItemCompass",
        "KAT_Cavmin",
        "SC_GPNVG"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'MLO_OGA_Crye_SS_Black_Camo'";
    };
};
