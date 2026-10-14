#include "includes.hpp"
class CfgPatches 
{
    class T17_Main
    {
        author = "Queen";
		name = "T17_Main";
		url = "";
		requiredAddons[] = 
        {
            "A3_Data_F_AoW_Loadorder"
        };
		requiredVersion = 2.22;
		units[] = 
        {
            "T17_Unit", // Every unit you make has to be defined here, or else zeus can't access it.
			"T17_Nobody_Unit"
        };
		weapons[] = 
        {
            "T17_CombatShirt_Item", // Same for weapons /  items.
			"T17_MCD_Suit_Item",
			"T17_AR_Uniform_Item",
			"T17_AR_Scientist_Uniform_Item",
			"T17_GOC_Vest",
			"T17_ScrambleGoggles_NVG"
        };
    };
};


class CfgEditorCategories // Top level category for the list. Think NATO, CSAT, or AAF
{
	class T17_Theta17
    {   
        displayName = "Theta - 17";
        scopeCurator = 2;
        scopeEditor = 2;
    };
    class T17_ChaosInsurgency
    {
        displayName = "[T17] Chaos Insurgency";
        scopeCurator = 2;
        scopeEditor = 2;
    };
	class T17_MCD
    {
        displayName = "[T17] Marshall, Carter, & Dark Inc.";
        scopeCurator = 2;
        scopeEditor = 2;
    };
	class T17_SH
    {
        displayName = "[T17] Serpents Hand";
        scopeCurator = 2;
        scopeEditor = 2;
    };
	class T17_AR
	{
		displayName = "[T17] Anderson Robotics";
        scopeCurator = 2;
        scopeEditor = 2;
	};
	class T17_GOC
	{
		displayName = "[T17] Global Occult Coalition";
		scopeCurator = 2;
		scopeEditor = 2;
	};
	class T17_Misc
	{
		displayName = "[T17] Miscellaneous POI / GOI";
		scopeCurator = 2;
        scopeEditor = 2;
	};
};

class CfgFactionClasses
{
	class T17_ChaosInsurgency_Faction
	{
		displayName = "[T17] Chaos Insurgency";
		priority = 1;
		side = 0;
		icon = "\z\t17\addons\main\textures\icons\ciicon_ca.paa";
		flag = "\z\t17\addons\main\textures\flags\ciflag_ca.paa";
	};
	class T17_MCD_Faction
	{
		displayName = "[T17] Marshall, Carter & Dark";
		priority = 1;
		side = 0;
		icon = "\z\t17\addons\main\textures\icons\mcdicon_ca.paa";
		flag = "";
	};
	class T17_SH_Faction
	{
		displayName = "[T17] Serpent's Hand";
		priority = 1;
		side = 0;
		icon = "\z\t17\addons\main\textures\icons\shicon_ca.paa";
		flag = "";
	};
	class T17_AR_Faction
	{
		displayName = "[T17] Anderson Robotics";
		priority = 1;
		side = 0;
		icon = "\z\t17\addons\main\textures\icons\aricon_ca.paa";
		flag = "";
	};
	class T17_GOC_Faction
	{
		displayName = "[T17] Global Occult Coalition";
		priority = 1;
		side = 0;
		icon = "\z\t17\addons\main\textures\icons\aricon_ca.paa";
		flag = "";
	};
};

class CfgEditorSubcategories // Intermediate Category for the list. Think Men (Pacific), Armor, Aircraft
{
	class T17_MobileTaskForce
	{
		displayName = "Mobile Task Force"; 
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_ChaosInsurgency_BetaClass
	{
		displayName = "Beta-Class Personnel";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_ChaosInsurgency_AlphaClass
	{
		displayName = "Alpha-Class Personnel";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_MCD_Security
	{
		displayName = "Private Security";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_MCD_TRO
	{
		displayName = "Tactical Response Operators";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_SH_IR
	{
		displayName = "Irregular Forces";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_Nobody
	{
		displayName = "Nobody";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_Androids
	{
		displayName = "Androids";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_AR_Personnel
	{
		displayName = "Personnel";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class T17_GOC_Personnel
	{
		displayName = "Troops";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};

class CfgWeapons
{
    class U_B_CombatUniform_mcam_vest;
    class UniformItem;
	class Uniform_Base;
	class VestItem;
	class ItemCore;

    class T17_CombatShirt_Item: U_B_CombatUniform_mcam_vest
    {
        author = "Queen";
        displayName = "[Theta - 17] Combat Shirt w/ Sleeves";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T17_Unit";
			containerClass="Supply40";
			mass=40;
		};
    };
	class T17_MCD_Suit_Item: Uniform_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[T17] Marshall, Carter & Dark Uniform";
		picture = "\a3\Characters_F_AoW\Uniforms\data\ui\icon_U_C_FormalSuit_01_black_F_ca.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Uniforms\Suitpacks\data\suitpack_FormalSuit_01_black_CO.paa"};
		DLC = "T17";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T17_MCD_Suit_Uniform";
			containerClass = "Supply20";
			mass = 30;
		};
	};
	class T17_AR_Uniform_Item: Uniform_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[T17] AR Android Uniform";
		//picture = "\a3\Characters_F_AoW\Uniforms\data\ui\icon_U_C_FormalSuit_01_black_F_ca.paa";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		modelSides[] = {0,1,2,3,4,5,6,7};
		DLC = "T17";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T17_AR_Uniform";
			containerClass = "Supply200";
			mass = 30;
		};
	};
	class T17_AR_Scientist_Uniform_Item: Uniform_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[T17] AR Scientist Uniform";
		picture = "\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_Uniform_Scientist_01_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {0,1,2,3,4,5,6,7};
		DLC = "T17";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T17_AR_Scientist_Uniform";
			containerClass = "Supply200";
			mass = 30;
		};
	};


	//class CUP_V_RUS_6B45_1;
	//class CUP_Vest_RUS_Camo_Ratnik_Base;
	class T17_GOC_Vest: ItemCore
	{
		dlc = "T17";
		displayName = "Global Occult Coalition Vest";
		author = "Queen";
		scope = 2;
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_6b45_1_emr_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\main\textures\T17_UNGOC_Vest_co.paa",
			"\z\t17\addons\main\textures\T17_UNGOC_VestEquipment_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"z\t17\addons\main\textures\T17_UNGOC_Vest.rvmat",
			"z\t17\addons\main\textures\T17_UNGOC_VestEquipment.rvmat"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
			mass=70;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\t17\addons\main\textures\T17_UNGOC_Vest_co.paa",
				"\z\t17\addons\main\textures\T17_UNGOC_VestEquipment_co.paa"
			};
			hiddenSelectionsMaterials[]= 
			{
				"z\t17\addons\main\textures\T17_UNGOC_Vest.rvmat",
				"z\t17\addons\main\textures\T17_UNGOC_VestEquipment.rvmat"
			};
			armor=20;
			passThrough=0.5;
			containerClass="Supply140";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};

	class NVGoggles;
	class T17_ScrambleGoggles_NVG: NVGoggles
	{

		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "SCRAMBLE Goggles";
        model = "\z\t17\addons\main\models\scramblegoggles.p3d";
		ace_nightvision_generation = 4;
		ace_nightvision_bluRadius = 0.35;
		modelOptics = "\z\t17\addons\main\models\panoramic.p3d";
		nameSound = "nvgoggles";
		descriptionShort = "White Phosphor";
		ace_nightvision_const_maxBrightness = 6;
		ace_nightvision_const_minBrightness = -6;
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\z\t17\addons\main\models\scramblegoggles.p3d";
			modelOff = "\z\t17\addons\main\models\scramblegoggles.p3d";
			mass = 10;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
	};
};



class CfgVehicles // Backpacks, Vehicles, Objects, and Units are all the same thing. Blame Bohemia 
{

	// Backpacks
	class MTF_FCPC_117G_veil;
	class MTF_FCPC_Satcom_veil;
	class BTRG_ZIPON_LR_BLK;

	class T17_LR_Veil: MTF_FCPC_117G_veil
	{
		displayName = "[Theta - 17] AN/PRC 117G Veil";
		tf_encryptionCode = "tf_west_radio_code";
		tf_radio = 1;
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_range = 5000;
	};
	class T17_LR_Satcom:  MTF_FCPC_Satcom_veil
	{
		displayName = "[Theta - 17] AN/PRC 117G Veil (SATCOM)";
		tf_radio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_range = 5000;
	};
	class T17_LR_Backpack: BTRG_ZIPON_LR_BLK
	{
		displayName = "[Theta - 17] Backpack (Radio)";
		tf_radio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_range = 2000;
	};



	// Units
    class B_Soldier_F; // This is the base BI soldier. It provides the basic template so that game knows its dealing with a human soldier.
    class T17_Unit: B_Soldier_F // All of your classnames should have "T17" appended to them. No classnames should be the same. Try to keep them descriptive so it's easy to distinguish when there's a ton of them.
    {
        author = "Queen";  // you (or me, in this instance!)
        displayName = "Operator (Rifleman)"; // The name displayed in the list.
		scope = 2; // Scope should equal 2, 1 is editor only, 0 is it will never show up ingame unless called via script.
		identityTypes[] = 
		{
			"LanguageENG_F",
			"Head_NATO",
			"NoGlasses"
		}; // You can define different faces, voices and facewear here. it will choose a random one from the list for each.
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; // the model path for the uniform you want to use is defined here
		uniformClass = "T17_CombatShirt_Item";  // the actual classname for the uniform item that is connected to this here
		side = 2;  // Side is Blufor = 1, Opfor = 0, Indfor = 2, Empty = 8, Civilian = 3 
		editorCategory = "T17_Theta17";  // this is the top level category in the faction list
		editorSubCategory = "T17_MobileTaskForce"; // this is the smaller category
		backpack = ""; // backpack class name here
		hiddenSelections[] = 
        {
            "camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = 
        {
            "\z\t17\addons\main\textures\T17CombatShirt_CO.paa", // I know this path looks weird, it's how hemtt does it. You can extrapolate how to do it yourself, ask if you need help <3
            "\z\t17\addons\main\textures\T17Insignia.paa"
        };
		/*
			HiddenSelections and HiddenSelectionsTextures exist in order to provide a way for you
			to retexture assets. If you aren't retexturing anything, you MUST remove them.
		*/
		weapons[]= // Weapons are defined here. Throw is for grenades, Put is for explosives. remove if you dont want them to use either or.
		{
			"hlc_wp_C7",
			"Throw",
			"Put"
		};
		respawnWeapons[]=  // This defines what weapons they respawn with. Generally, these should be kept the same. Same as above.
		{
			"hlc_wp_C7",
			"Throw",
			"Put"
		}; 
		magazines[]= // Magazines and all other throwables are here. 
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			MAG_5("hlc_30rnd_556x45_EPR")

		};
		respawnMagazines[]= // Ones accessible on respawn.
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			MAG_5("hlc_30rnd_556x45_EPR")
		};
		linkedItems[]= // Additional items given to the units. 
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
    };

	class C_Uniform_FormalSuit_01_base_F;
	class T17_MCD_Suit_Uniform: C_Uniform_FormalSuit_01_base_F
	{
		author = "Queen";
		uniformClass = "T17_MCD_Suit_Item";
		model = "\a3\Characters_F_AoW\Uniforms\FormalSuit_01_F";
		scope = 1;
		side = 0;
		hiddenSelectionsTextures[] = 
		{
			"\z\t17\addons\main\textures\MCD_Suit_CO.paa"
		};
	};

	class SSV_Unit_Android_Military;
	class T17_AR_Uniform: SSV_Unit_Android_Military
	{
		author = "Queen";
		uniformClass = "T17_AR_Uniform_Item";
		scope = 1;
		side = 0;
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\z\t17\addons\main\textures\AR_Uniform_CO.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\z\t17\addons\main\textures\AR_Uniform.rvmat"
		};
	};
	class C_Uniform_Scientist_01_base_F;
	class T17_AR_Scientist_Uniform: C_Uniform_Scientist_01_base_F
	{
		author = "Queen";
		uniformClass = "T17_AR_Scientist_Uniform_Item";
		model = "\a3\Characters_F\Civil\Scientist_01_F.p3d";
		scope = 1;
		side = 0;
		hiddenSelections[] = 
		{
			"id"
		};
		hiddenSelectionsTextures[] = 
		{
			"\z\t17\addons\main\textures\T17_AR_Scientist_ID.paa"
		};
	};

	class T17_Nobody_Unit: B_Soldier_F
	{
		author = "Queen";  
        displayName = "Nobody";
		scope = 2; 
		identityTypes[] = 
		{
			"ACE_NoVoice",
			"Adams",
			"G_Spectacles_Tinted"
		};
		model = "\a3\Characters_F_AoW\Uniforms\FormalSuit_01_F.p3d";
		uniformClass = "U_C_FormalSuit_01_gray_F"; 
		side = 2;  
		editorCategory = "T17_Misc";  
		editorSubCategory = "T17_Nobody"; 
		backpack = ""; 
		weapons[]= 
		{
			"hgun_Pistol_01_F"
		};
		respawnWeapons[]=  
		{
			"hgun_Pistol_01_F"
		}; 
		magazines[]= 
		{
			"10Rnd_9x21_Mag"
		};
		respawnMagazines[]= 
		{
			"10Rnd_9x21_Mag"
		};
		linkedItems[]= 
		{
			"H_StrawHat_dark"
		};
		respawnLinkedItems[]=
		{
			"H_StrawHat_dark"
		};
	};
	class Mavic_drone_base_F
	{
		class ViewPilot;
		class ViewOptics;
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide;
			};
		};
	};
	class Mavic_3_BLU: Mavic_drone_base_F
	{
		class ViewPilot: ViewPilot
		{
			maxFov = 0.85;
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {0,1};
			opticsPPEffects[] = {};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {0,1};
			opticsPPEffects[] = {};
			maxFov = 0.85;
		};
		class PilotCamera: PilotCamera
		{
			class OpticsIn: OpticsIn
			{
				class Wide: Wide
				{
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
					opticsPPEffects[] = {};
					minFov = 0.015;
					maxFov = 0.9;
				};
			};
			minTurn = -180;
			maxTurn = 180;
			minElev = -35;
			maxElev = 180;
			initElev = 0;
		};
	};
};
// [[[],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_C_FormalSuit_01_gray_F",[]],[],[],"H_StrawHat_dark","G_Spectacles_Tinted",[],["ItemMap","DSA_Detector","TFAR_anprc152","ItemCompass","KAT_ChemicalDetector",""]],[["aceax_textureOptions",[]]]]

class CfgGlasses
{
	class G_Balaclava_blk;
	class T17_GlassesRound: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "Glasses (Round)";
		scope = 2;
        model = "\z\t17\addons\main\models\glasses.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {"frame", "lens"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\main\textures\frame_co.paa", "\z\t17\addons\main\textures\lens_ca.paa"};
	};
	class T17_ScrambleGoggles: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "SCRAMBLE Goggles";
		scope = 2;
        model = "\z\t17\addons\main\models\scramblegoggles.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
};

class CfgMainMenuSpotlight
{
	delete OldMan;
	delete Bootcamp;
	delete EastWind;
	delete ApexProtocol;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Orange_CampaignGerman;
	delete Orange_Campaign;
	delete Tanks_Campaign_01;
	delete Showcase_TankDestroyers;
	delete Contact_Campaign;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_01;
	delete SP_FD14;
	delete AoW_Showcase_AoW;
	delete AoW_Showcase_Future;
	delete Showcase_VR_lxWS;
	delete Extraction_lxWS;
	delete Showcase_Alchemist_lxWS;
	delete Training_Day_RF;
	delete Air_Control_RF;
	delete EF_ResoluteCyclone;
	delete Scenario_AirControl_RF;
	delete Scenario_FireSeason_RF;
	delete Scenario_TrainingDay_RF;
	class T17_ServerJoin
	{
		text = "Operations";
		textIsQuote = 0;
		picture = "\z\t17\addons\main\textures\mainmenulogo_co.paa";
		video = "\z\t17\addons\main\videos\mainmenuvideo.ogv";
		action = "connectToServer ['216.245.177.54', 2306, 'MTFT17']";
		actionText = "Join";
		condition = "true";
	};
};
