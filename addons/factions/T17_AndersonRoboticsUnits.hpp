class T17_AR_Base_Unit: B_Soldier_base_F
{
    author = "Queen";
    scope = 0;
    scopeCurator = 0;
    faction = "T17_AR_Faction";
    editorCategory = "T17_AR";
    editorSubcategory = "T17_AR_Personnel";
    side = 0;
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

class T17_AR_Technician: T17_AR_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Technician";
    uniformClass = "U_C_WorkerCoverallsGloves_grey";
    backpack = "Alpine_Carryall";
    weapons[] = {"T17_AR_P226","Throw","Put"};
    respawnWeapons[] = {"T17_AR_P226","Throw","Put"};
    magazines[] = {"hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226"};
    respawnMagazines[] = {"hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226"};
    items[] = {"AnomalyDetector","ToolKit","ACE_Cellphone","ACE_DAGR","ACE_DefusalKit","ACE_Fortify","ACE_Flashlight_MX991","ACE_wirecutter","ChemicalDetector_01_black_F","ACE_Flashlight_KSF1","ACE_ATragMX"};
    respawnItems[] = {"AnomalyDetector","ToolKit","ACE_Cellphone","ACE_DAGR","ACE_DefusalKit","ACE_Fortify","ACE_Flashlight_MX991","ACE_wirecutter","ChemicalDetector_01_black_F","ACE_Flashlight_KSF1","ACE_ATragMX"};
    linkedItems[] = {"H_Cap_blu_headset","ItemMap","DSA_Detector","","ItemCompass","KAT_ChemicalDetector"};
    respawnLinkedItems[] = {"H_Cap_blu_headset","ItemMap","DSA_Detector","","ItemCompass","KAT_ChemicalDetector"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'U_C_WorkerCoverallsGloves_grey'";
    };
};

class T17_AR_Scientist: T17_AR_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Scientist";
    uniformClass = "T17_AR_Scientist_Uniform_Item";
    backpack = "";
    weapons[] = {"Throw","Put"};
    respawnWeapons[] = {"Throw","Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {"H_Cap_blu_headset","ItemMap","DSA_Detector","","ItemCompass","KAT_ChemicalDetector"};
    respawnLinkedItems[] = {"H_Cap_blu_headset","ItemMap","DSA_Detector","","ItemCompass","KAT_ChemicalDetector"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'T17_AR_Scientist_Uniform_Item'";
    };
};

class T17_AR_Rifleman: T17_AR_Base_Unit
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    uniformClass = "T17_AR_Uniform_Item";
    editorSubCategory = "T17_Androids";
    backpack = "";
    weapons[] = {"T17_AR_Rifle","T17_AR_P226","Throw","Put"};
    respawnWeapons[] = {"T17_AR_Rifle","T17_AR_P226","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","hlc_15Rnd_9x19_B_P226"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","hlc_15Rnd_9x19_B_P226"};
    items[] = {"crowsew_ctrack","ItemcTab","crowsew_tfar_icom","AnomalyDetector","ACE_M26_Clacker","ACE_DAGR","ACE_Cellphone"};
    respawnItems[] = {"crowsew_ctrack","ItemcTab","crowsew_tfar_icom","AnomalyDetector","ACE_M26_Clacker","ACE_DAGR","ACE_Cellphone"};
    linkedItems[] = {"SSV_Helmet_Android_Army","ItemMap","DSA_Detector","TFAR_anprc152","ItemCompass","KAT_ChemicalDetector"};
    respawnLinkedItems[] = {"SSV_Helmet_Android_Army","ItemMap","DSA_Detector","TFAR_anprc152","ItemCompass","KAT_ChemicalDetector"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'T17_AR_Uniform_Item'";
    };
};

class T17_AR_Rifleman_2: T17_AR_Rifleman
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Alt)";
    weapons[] = {"T17_AR_Katiba","T17_AR_P226","Throw","Put"};
    respawnWeapons[] = {"T17_AR_Katiba","T17_AR_P226","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","hlc_15Rnd_9x19_B_P226"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_B_P226"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'T17_AR_Uniform_Item'";
    };
};

class T17_AR_Marksman: T17_AR_Rifleman
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    weapons[] = {"T17_AR_MXM","T17_AR_P226","Throw","Put"};
    respawnWeapons[] = {"T17_AR_MXM","T17_AR_P226","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_black_mag_Tracer","hlc_15Rnd_9x19_B_P226"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag_Tracer","hlc_15Rnd_9x19_B_P226"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'T17_AR_Uniform_Item'";
    };
};

class T17_AR_AntiTank: T17_AR_Rifleman
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Tank";
    backpack = "CUP_B_RPGPack_Khaki";
    weapons[] = {"T17_AR_Rifle","T17_AR_TitanAT","T17_AR_P226","Throw","Put"};
    respawnWeapons[] = {"T17_AR_Rifle","T17_AR_TitanAT","T17_AR_P226","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","Titan_AT","Titan_AP","hlc_15Rnd_9x19_B_P226"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","Titan_AT","Titan_AP","hlc_15Rnd_9x19_B_P226"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'T17_AR_Uniform_Item'";
    };
};

class T17_AR_AntiAir: T17_AR_Rifleman
{
    author = "Queen";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Air";
    backpack = "CUP_B_RPGPack_Khaki";
    weapons[] = {"T17_AR_Rifle","T17_AR_TitanAA","T17_AR_P226","Throw","Put"};
    respawnWeapons[] = {"T17_AR_Rifle","T17_AR_TitanAA","T17_AR_P226","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","Titan_AA","hlc_15Rnd_9x19_B_P226"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","Titan_AA","hlc_15Rnd_9x19_B_P226"};
    class EventHandlers
    {
        init = "params ['_unit']; _unit forceAddUniform 'T17_AR_Uniform_Item'";
    };
};
