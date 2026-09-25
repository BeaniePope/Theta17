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
            "T17_Unit",
			"T17_ChaosInsurgency_Rifleman_Unit" // Every unit you make has to be defined here, or else zeus can't access it.
        };
		weapons[] = 
        {
            "T17_CombatShirt_Item" // Same for weapons /  items.
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
};

class CfgEditorSubcategories // Intermediate Category for the list. Think Men (Pacific), Armor, Aircraft
{
	class T17_MobileTaskForce
	{
		displayName = "Mobile Task Force"; 
        scopeCurator = 2;
        scopeeditor = 2;
	};
};

class CfgWeapons
{
    class U_B_CombatUniform_mcam_vest;
    class UniformItem;

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
    class T17_Unit: B_Soldier_F 
    {
        author = "Queen";
        displayName = "Operator (Rifleman)";
		scope = 2;
		identityTypes[] = {};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "T17_CombatShirt_Item";
		side = 2;
		editorCategory = "T17_Theta17";
		editorSubCategory = "T17_MobileTaskForce";
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
		weapons[]=
		{
			"hlc_wp_C7",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hlc_wp_C7",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			MAG_5("hlc_30rnd_556x45_EPR")

		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			MAG_5("hlc_30rnd_556x45_EPR")
		};
		linkedItems[]=
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
	class T17_ChaosInsurgency_Rifleman_Unit: B_Soldier_F // All of your classnames should have "T17" appended to them. No classnames should be the same. Try to keep them descriptive so it's easy to distinguish when there's a ton of them.
	{
		author = "Queen"; // you (or me, in this instance!)
        displayName = "Rifleman"; // The name displayed in the list.
		scope = 2; // Scope should equal 2, 1 is editor only, 0 is it will never show up ingame unless called via script.
		identityTypes[] = 
		{
			"LanguageENG_F",
			"Head_NATO",
			"NoGlasses"
		}; // You can define different faces, voices and facewear here. it will choose a random one from the list for each.
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; // the model path for the uniform you want to use is defined here
		uniformClass = "T17_CombatShirt_Item"; // the actual classname for the uniform item here
		side = 0; // Side is Blufor = 1, Opfor = 0, Indfor = 2, Empty = 8, Civilian = 3 
		editorCategory = "T17_ChaosInsurgency"; // this is the top level category in the faction list
		editorSubCategory = "T17_MobileTaskForce"; // this is the smaller category
		backpack = "" // backpack class name here
		hiddenSelections[] = 
        {
            "camo",
            "insignia" 
        };
        hiddenSelectionsTextures[] = 
        {
            "\z\t17\addons\main\textures\T17CombatShirt_CO.paa",
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
		respawnWeapons[]= // This defines what weapons they respawn with. Generally, these should be kept the same. Same as above.
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
};
