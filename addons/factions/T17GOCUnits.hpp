class T17_GOC_Base_Unit: B_Soldier_base_F
{
    author = "Queen";
    scope = 0;
    scopeCurator = 0;

    faction = "T17_GOC_Faction";
    editorCategory = "T17_GOC";
    editorSubcategory = "T17_GOC_Personnel";
    side = 1;

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

class T17_GOC_Rifleman: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_Rifleman_Alt: T17_GOC_Rifleman
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Alt)";

    weapons[] =
    {
        "T17_GOC_PSG1A1",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_PSG1A1",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_15Rnd_9x19_B_P226"
    };
};

class T17_GOC_Rifleman_HK: T17_GOC_Rifleman
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (HK417)";

    weapons[] =
    {
        "T17_GOC_HK417",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_HK417",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "hlc_15Rnd_9x19_B_P226"
    };
};

class T17_GOC_MG: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine Gunner";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_MG3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_MG3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_50Rnd_762x51_B_MG3",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_50Rnd_762x51_B_MG3",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "150Rnd_762x51_Box",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_Marksman: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_M110",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_M110",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "CUP_20Rnd_762x51_B_M110",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_AT: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Tank";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_PSG1A1",
        "T17_GOC_Mk153",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_PSG1A1",
        "T17_GOC_Mk153",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "CUP_SMAW_HEAA_M",
        "CUP_SMAW_HEDP_M",
        "CUP_SMAW_HEDP_M",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "CUP_SMAW_HEAA_M",
        "CUP_SMAW_HEDP_M",
        "CUP_SMAW_HEDP_M",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_AA: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Air";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_PSG1A1",
        "T17_GOC_Stinger",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_PSG1A1",
        "T17_GOC_Stinger",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "CUP_Stinger_M",
        "CUP_Stinger_M",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "hlc_20rnd_762x51_b_G3",
        "CUP_Stinger_M",
        "CUP_Stinger_M",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_RTO: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "RTO";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "TFAR_rt1523g_black";

    weapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_CBRN: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "CBRN Specialist";
    uniformClass = "U_CBRN_C_white";
    backpack = "CBRN_CBRN_Specialist_Hazardous_pack";

    weapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "G_CBRN_C_white",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "G_CBRN_C_white",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_CBRN_C_white'";
    };
};

class T17_GOC_CBRN_Light: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "CBRN Specialist (Light)";
    uniformClass = "U_CBRN_C_white";
    backpack = "CBRN_CBRN_Specialist_Hazardous_pack";

    weapons[] =
    {
        "T17_GOC_MP5A2",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_MP5A2",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "G_CBRN_C_white",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "G_CBRN_C_white",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_CBRN_C_white'";
    };
};

class T17_GOC_Crew: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Crewman";
    uniformClass = "CUP_U_B_BDUv2_gloves_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_HK417",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_HK417",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "CUP_20Rnd_762x51_HK417",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "CUP_G_ESS_BLK",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "CUP_G_ESS_BLK",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_gloves_Tpattern'";
    };
};

class T17_GOC_AirCrew: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Air Crew";
    uniformClass = "CUP_U_B_BDUv2_roll_gloves_Tpattern";
    backpack = "";

    weapons[] =
    {
        "T17_GOC_MP7",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_MP7",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "CUP_40Rnd_46x30_MP7",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "CUP_G_ESS_KHK_Facewrap_White",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_H_PASGT_UN",
        "CUP_G_ESS_KHK_Facewrap_White",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_roll_gloves_Tpattern'";
    };
};

class T17_GOC_Pilot: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Pilot";
    uniformClass = "CUP_U_B_BDUv2_roll_gloves_Tpattern";
    backpack = "";

    weapons[] =
    {
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_SPH4_grey_visor",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_SPH4_grey_visor",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_roll_gloves_Tpattern'";
    };
};

class T17_GOC_GroundTechnician: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ground Technician";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "Alpine_Backpack_kitbag";

    weapons[] =
    {
        "T17_GOC_MP5A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_MP5A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_30Rnd_9x19_B_MP5",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
        "ACE_DefusalKit",
        "ACE_EntrenchingTool",
        "ACE_Fortify",
        "ACE_Flashlight_XL50",
        "ToolKit",
        "ACE_wirecutter",
        "ACE_MapTools",
        "MineDetector",
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
        "ACE_DefusalKit",
        "ACE_EntrenchingTool",
        "ACE_Fortify",
        "ACE_Flashlight_XL50",
        "ToolKit",
        "ACE_wirecutter",
        "ACE_MapTools",
        "MineDetector",
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_OfficerCap_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_OfficerCap_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_FieldOfficer: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Field Officer";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "";

    weapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_G3A3",
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "CUP_20Rnd_762x51_G3",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_Beret_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_Beret_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};

class T17_GOC_Officer: T17_GOC_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer";
    uniformClass = "CUP_U_B_BDUv2_Tpattern";
    backpack = "";

    weapons[] =
    {
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    respawnWeapons[] =
    {
        "T17_GOC_P226",
        "Throw",
        "Put"
    };

    magazines[] =
    {
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226"
    };

    respawnMagazines[] =
    {
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226",
        "hlc_15Rnd_9x19_B_P226"
    };

    items[] =
    {
        "crowsew_ctrack",
        "ItemcTab",
        "crowsew_tfar_icom",
        "AnomalyDetector",
        "ACE_M26_Clacker",
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
        "FirstAidKit",
        "FirstAidKit",
        "FirstAidKit"
    };

    linkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_Beret_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    respawnLinkedItems[] =
    {
        "T17_GOC_Vest",
        "CUP_H_CDF_Beret_UN",
        "ItemMap",
        "DSA_Detector",
        "TFAR_anprc152",
        "ItemCompass",
        "KAT_ChemicalDetector"
    };

    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'CUP_U_B_BDUv2_Tpattern'";
    };
};
