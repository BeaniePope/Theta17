#include "includes.hpp"
class CfgPatches 
{
    class T17_Equipment_NVGs
    {
        author = "Scout";
		name = "T17_Equipment_NVGs";
		url = "";
		requiredAddons[] = 
		{
			"A3_Data_F_AoW_Loadorder",
			"MTF_NVG"
		};
		requiredVersion = 2.22;
		units[] = 
        {
        };
		weapons[] = 
        {
			"T17_GPNVG18F_01",
			"T17_GPNVG18F_02",
			"T17_GPNVG18F_03",
			"T17_GPNVG18F_L4COTI",
			"T17_GPNVG18F_L4COTI_Bat",
			"T17_GPNVG18F_L4COTI_Pouch",
			"T17_GPNVG18F_01_Full",
			"T17_GPNVG18F_02_Full",
			"T17_GPNVG18F_03_Full",
			"T17_GPNVG18F_L4COTI_Full",
			"T17_GPNVG18F_L4COTI_Bat_Full",
			"T17_GPNVG18F_L4COTI_Pouch_Full"
		};
        skipWhenMissingDependencies = 1;
    };
};

class Extended_PreInit_EventHandlers
{
	class T17_NVG_PreInit
	{
		init="call compile preProcessFileLineNumbers '\z\T17\addons\equipment\nvgs\XEH_PreInit.sqf';";
	};
};

class CfgWeapons
{

	// Better Overlays NVGs

	class MTF_GPNVG18F_01;
	class T17_GPNVG18F_01: MTF_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG 18F - BLK (WP)";
		model = "MTF_NVG\GPNVG18F_L4_Up.p3d";
		ace_nightvision_generation = 4;
		ace_nightvision_bluRadius = 0;
		modelOptics = "z\t17\addons\equipment\nvgs\models\panoramic.p3d";
		nameSound = "nvgoggles";
		descriptionShort = "White Phosphor";
		ace_nightvision_colorPreset[] = {0,{0,0,0,0},{1.1,0.8,1.9,0.9},{1,1,6,0}};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4_Down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4_Up.p3d";
			mass = 10;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_universal = 1;
	};
	class T17_GPNVG18F_02: T17_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F BT - BLK (WP)";
		model = "MTF_NVG\GPNVG18F_L4Bat_Up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\panoramic.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4Bat_Down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4Bat_Up.p3d";
			mass = 10;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_universal = 1;
	};
	class T17_GPNVG18F_03: T17_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F Pouch/BT - BLK (WP)";
		model = "MTF_NVG\GPNVG18F_L4Pouch_Up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\panoramic.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4Pouch_Down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4Pouch_Up.p3d";
			mass = 10;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_universal = 1;
	};
	class T17_GPNVG18F_L4COTI: T17_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F COTI - BLK (WP)";
		model = "MTF_NVG\GPNVG18F_L4COTI_up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\panoramic.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4COTI_down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4COTI_up.p3d";
			mass = 20;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_universal = 1;
	};
	class T17_GPNVG18F_L4COTI_Bat: T17_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F COTI BT - BLK (WP)";
		model = "MTF_NVG\GPNVG18F_L4COTI_Bat_up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\panoramic.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4COTI_Bat_down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4COTI_Bat_up.p3d";
			mass = 20;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_universal = 1;
	};
	class T17_GPNVG18F_L4COTI_Pouch: T17_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F COTI Pouch/BT - BLK (WP)";
		model = "MTF_NVG\GPNVG18F_L4COTI_Pouch_up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\panoramic.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4COTI_Pouch_down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4COTI_Pouch_up.p3d";
			mass = 20;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_universal = 1;
	};

	// No Overlay NVGs

	class T17_GPNVG18F_01_Full: T17_GPNVG18F_01
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG 18F - BLK (WP + Full)";
		modelOptics = "z\t17\addons\equipment\nvgs\models\full.p3d";
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_raven = 1;
		t17_universal = 0;
	};
	class T17_GPNVG18F_02_Full: T17_GPNVG18F_02
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F BT - BLK (WP + Full)";
		model = "MTF_NVG\GPNVG18F_L4Bat_Up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\full.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4Bat_Down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4Bat_Up.p3d";
			mass = 10;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_raven = 1;
		t17_universal = 0;
	};
	class T17_GPNVG18F_03_Full: T17_GPNVG18F_03
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F Pouch/BT - BLK (WP + Full)";
		model = "MTF_NVG\GPNVG18F_L4Pouch_Up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\full.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4Pouch_Down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4Pouch_Up.p3d";
			mass = 10;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_raven = 1;
		t17_universal = 0;
	};
	class T17_GPNVG18F_L4COTI_Full: T17_GPNVG18F_L4COTI
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F COTI - BLK (WP + Full)";
		model = "MTF_NVG\GPNVG18F_L4COTI_up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\full.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4COTI_down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4COTI_up.p3d";
			mass = 20;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_raven = 1;
		t17_universal = 0;
	};
	class T17_GPNVG18F_L4COTI_Bat_Full: T17_GPNVG18F_L4COTI_Bat
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F COTI BT - BLK (WP + Full)";
		model = "MTF_NVG\GPNVG18F_L4COTI_Bat_up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\full.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4COTI_Bat_down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4COTI_Bat_up.p3d";
			mass = 20;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_raven = 1;
		t17_universal = 0;
	};
	class T17_GPNVG18F_L4COTI_Pouch_Full: T17_GPNVG18F_L4COTI_Pouch
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "[T17] GPNVG18F COTI Pouch/BT - BLK (WP + Full)";
		model = "MTF_NVG\GPNVG18F_L4COTI_Pouch_up.p3d";
		modelOptics = "z\t17\addons\equipment\nvgs\models\full.p3d";
		descriptionShort = "White Phosphor";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "MTF_NVG\GPNVG18F_L4COTI_Pouch_down.p3d";
			modelOff = "MTF_NVG\GPNVG18F_L4COTI_Pouch_up.p3d";
			mass = 20;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG","TI"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		t17_raven = 1;
		t17_universal = 0;
	};
};
