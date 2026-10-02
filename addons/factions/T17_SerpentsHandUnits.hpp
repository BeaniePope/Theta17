

class T17_SH_Base_Unit: B_Soldier_base_F
{
    author = "Queen";
    scope = 0;
    scopeCurator = 0;

    faction = "T17_SH_Faction";
    editorCategory = "T17_SH";
    editorSubcategory = "T17_SH_IR";
    side = 2;

    identityTypes[] = {"Head_Euro","Head_Asian","Head_African","LanguageENG_F"};

    weapons[] = {"Throw","Put"};
    respawnWeapons[] = {"Throw","Put"};

    magazines[] = {};
    respawnMagazines[] = {};

    items[] = {};
    respawnItems[] = {};

    linkedItems[] = {"ItemMap","ItemCompass"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass"};
};

class T17_SH_Heavy: T17_SH_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Heavy";
    uniformClass = "U_BG_Guerilla1_2_F";
    //nakedUniform = "U_BG_Guerilla1_2_F";
    backpack = "B_Kitbag_dgtl";

    weapons[] =
    {
        "T17_SH_AKM",
        "T17_SH_MRAWS",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_SH_AKM",
        "T17_SH_MRAWS",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "MRAWS_HEAT_F",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "MRAWS_HEAT_F",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom", 
        "FirstAidKit", 
        "FirstAidKit", 
        "FirstAidKit"
    };

    respawnItems[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "FirstAidKit", 
        "FirstAidKit", 
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "H_Booniehat_dgtl",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "H_Booniehat_dgtl",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_BG_Guerilla1_2_F'";
    };
};

class T17_SH_Rifleman: T17_SH_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    uniformClass = "U_BG_Guerilla3_1";
    //nakedUniform = "U_BG_Guerilla3_1";
    backpack = "B_Kitbag_dgtl";

    weapons[] =
    {
        "T17_SH_AKM",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_SH_AKM",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "CUP_30Rnd_762x39_AK47_bakelite_M",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DAGR",
        "ACE_Cellphone",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    respawnItems[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DAGR",
        "ACE_Cellphone",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "H_Booniehat_dgtl",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "H_Booniehat_dgtl",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_BG_Guerilla3_1'";
    };
};

class T17_SH_MachineGunner: T17_SH_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine Gunner";
    uniformClass = "U_BG_Guerilla2_1";
    //nakedUniform = "U_BG_Guerilla2_1";
    backpack = "B_Kitbag_dgtl";

    weapons[] =
    {
        "T17_SH_RPK74",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_SH_RPK74",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_30Rnd_545x39_B_AK",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_15Rnd_9x19_B_P226",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };

    respawnMagazines[] =
    {
        "hlc_30Rnd_545x39_B_AK",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_45Rnd_545x39_b_rpkm",
        "hlc_15Rnd_9x19_B_P226",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "bolts_infinite",
        "FirstAidKit", 
        "FirstAidKit", 
        "FirstAidKit"
    };

    respawnItems[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "bolts_infinite",
        "FirstAidKit", 
        "FirstAidKit", 
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "CUP_H_C_Beanie_02",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "CUP_H_C_Beanie_02",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_BG_Guerilla2_1'";
    };
};

class T17_SH_Sniper: T17_SH_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper";
    uniformClass = "U_BG_Guerilla3_1";
    //nakedUniform = "U_BG_Guerilla3_1";
    backpack = "B_Kitbag_dgtl";

    weapons[] =
    {
        "T17_SH_AWM",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_SH_AWM",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_15Rnd_9x19_B_P226",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };

    respawnMagazines[] =
    {
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_5rnd_300WM_FMJ_AWM",
        "hlc_15Rnd_9x19_B_P226",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DAGR",
        "ACE_Cellphone",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit",
        "bolts_infinite"
    };

    respawnItems[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DAGR",
        "ACE_Cellphone",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit",
        "bolts_infinite"
    };

    linkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "CUP_H_SLA_Beret",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "CUP_H_SLA_Beret",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_BG_Guerilla3_1'";
    };
};

class T17_SH_DMR: T17_SH_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "DMR";
    uniformClass = "U_BG_Guerilla3_1";
    //nakedUniform = "U_BG_Guerilla3_1";
    backpack = "B_Kitbag_dgtl";

    weapons[] =
    {
        "T17_SH_SVD",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_SH_SVD",
        "T17_SH_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "hlc_15Rnd_9x19_B_P226",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };

    respawnMagazines[] =
    {
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "ACE_10Rnd_762x54_Tracer_mag",
        "hlc_15Rnd_9x19_B_P226",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade",
        "HandGrenade"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DAGR",
        "ACE_Cellphone",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit",
        "bolts_infinite"
    };

    respawnItems[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DAGR",
        "ACE_Cellphone",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit",
        "bolts_infinite"
    };

    linkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "CUP_H_SLA_Beret",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "V_Chestrig_rgr_noHydrator",
        "CUP_H_SLA_Beret",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_BG_Guerilla3_1'";
    };
};

