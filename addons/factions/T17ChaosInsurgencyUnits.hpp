    class B_Soldier_base_F;
    class T17_CI_Rifleman: B_Soldier_base_F 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_BetaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;
		identityTypes[] = {"Head_Euro","Head_Asian","Head_African","LanguageENG_F"};
        uniformClass = "MLO_ProjectHonor_Crye_Black_Pants_Camo";
        backpack = "VSM_ProjectHonor_Backpack_Compact";
        weapons[] = 
        {
            "T17_CI_G36KTac",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "T17_CI_G36KTac",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
        respawnLinkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
    };
    class T17_CI_MachineGunner: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_BetaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;
        uniformClass = "MLO_ProjectHonor_Crye_Black_Pants_Camo";
        backpack = "VSM_ProjectHonor_carryall";
        weapons[] = 
        {
            "T17_CI_MG3KWS",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "T17_CI_MG3KWS",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_50Rnd_762x51_B_MG3",
            "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
            "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
            "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_50Rnd_762x51_B_MG3",
            "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
            "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
            "150Rnd_762x51_Box_Tracer", "150Rnd_762x51_Box_Tracer",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
        respawnLinkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
    };
    class T17_CI_Sniper: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_BetaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;

        uniformClass = "MLO_ProjectHonor_Crye_Black_Pants_Camo";
        backpack = "VSM_ProjectHonor_Backpack_Compact";

        weapons[] = 
        {
            "T17_CI_AWCovert",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "T17_CI_AWCovert",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM",
            "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM",
            "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM",
            "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM",
            "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM",
            "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_T_AWM",
            "hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_FMJ_AWM",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
        respawnLinkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
    };
    class T17_CI_Marksman: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_BetaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;

        uniformClass = "MLO_ProjectHonor_Crye_Black_Pants_Camo";
        backpack = "VSM_ProjectHonor_Backpack_Compact";

        weapons[] = 
        {
            "T17_CI_PSG1A1",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "T17_CI_PSG1A1",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3",
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3",
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3",
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3",
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
        respawnLinkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
    };
    class T17_CI_AntiTank: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_BetaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;

        uniformClass = "MLO_ProjectHonor_Crye_Black_Pants_Camo";
        backpack = "VSM_ProjectHonor_Backpack_Compact";

        weapons[] = 
        {
            "T17_CI_G36KTac",
            "T17_CI_MRAWS",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "T17_CI_G36KTac",
            "T17_CI_MRAWS",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "MRAWS_HE_F", "MRAWS_HE_F", "MRAWS_HE_F", "MRAWS_HE_F", "MRAWS_HE_F",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "MRAWS_HE_F", "MRAWS_HE_F", "MRAWS_HE_F", "MRAWS_HE_F", "MRAWS_HE_F",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
        respawnLinkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
    };
    class T17_CI_AntiAir: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AA)";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_BetaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;

        uniformClass = "MLO_ProjectHonor_Crye_Black_Pants_Camo";
        backpack = "VSM_ProjectHonor_Backpack_Kitbag";

        weapons[] = 
        {
            "T17_CI_G36KTac",
            "T17_CI_TitanAA",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "T17_CI_G36KTac",
            "T17_CI_TitanAA",
            "T17_CI_P226R",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "Titan_AA", "Titan_AA", "Titan_AA",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
            "Titan_AA", "Titan_AA", "Titan_AA",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "hlc_12Rnd_40sw_JHP_P226",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
        respawnLinkedItems[] = 
        {
            "MLO_Black_Vest_1",
            "VSM_ProjectHonor_OPS_2",
            "MTF_Face_2",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter",
            "MTF_GPNVG18F_01",
            "TFAR_anprc148jem"
        };
    };
    class T17_CI_Conscript: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Conscript";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_AlphaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;

        uniformClass = "MLO_Black_Tan_Pants_ACU_SS_Camo";
        backpack = "B_Rangemaster_belt_black";

        weapons[] = 
        {
            "hlc_rifle_RK62",
            "hgun_Rook40_F",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "hlc_rifle_RK62",
            "hgun_Rook40_F",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet",
            "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet",
            "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet",
            "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet", "hlc_30Rnd_762x39_t_ak_Valmet",
            "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "VSM_MBSS_BLK",
            "H_Beret_blk",
            "BTRG_Balaclava_BLK",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter"
        };
        respawnLinkedItems[] = 
        {
            "VSM_MBSS_BLK",
            "H_Beret_blk",
            "BTRG_Balaclava_BLK",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter"
        };
    };
    class T17_CI_ConscriptMG: T17_CI_Rifleman 
    {
        author = "Scout";
        scope = 2;
        scopeCurator = 2;
        displayName = "Conscript (MG)";
        faction = "T17_ChaosInsurgency_Faction";
        editorSubcategory = "T17_ChaosInsurgency_AlphaClass";
        editorCategory = "T17_ChaosInsurgency";
        side = 0;

        uniformClass = "MLO_Black_Tan_Pants_ACU_SS_Camo";
        backpack = "B_Rangemaster_belt_black";

        weapons[] = 
        {
            "hlc_rifle_RK62",
            "hgun_Rook40_F",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "hlc_rifle_RK62",
            "hgun_Rook40_F",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "hlc_75Rnd_762x39_t_rpk",
            "hlc_75Rnd_762x39_t_rpk", "hlc_75Rnd_762x39_t_rpk", "hlc_75Rnd_762x39_t_rpk",
            "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        respawnMagazines[] = 
        {
            "hlc_75Rnd_762x39_m_rpk",
            "hlc_75Rnd_762x39_t_rpk", "hlc_75Rnd_762x39_t_rpk", "hlc_75Rnd_762x39_t_rpk",
            "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag",
            "SmokeShell", "SmokeShell",
            "ACE_M84", "ACE_M84",
            "MiniGrenade", "MiniGrenade"
        };
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        respawnItems[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = 
        {
            "VSM_MBSS_BLK",
            "H_Beret_blk",
            "BTRG_Balaclava_BLK",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter"
        };
        respawnLinkedItems[] = 
        {
            "VSM_MBSS_BLK",
            "H_Beret_blk",
            "BTRG_Balaclava_BLK",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ACE_Altimeter"
        };
    };
