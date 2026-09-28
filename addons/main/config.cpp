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
            "T17_Unit" // Every unit you make has to be defined here, or else zeus can't access it.
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
};
