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
            "T17_CombatShirt_Uniform"
        };
		weapons[] = 
        {
            "T17_CombatShirt_Item"
        };
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
			uniformClass="T17_CombatShirt_Uniform";
			containerClass="Supply40";
			mass=40;
		};
    };
};

class CfgVehicles
{
    class B_Soldier_F;
    class T17_CombatShirt_Uniform: B_Soldier_F
    {
        author = "Queen";
        displayName = "[Theta - 17] Combat Shirt w/ Sleeves";
        uniformModel = "T17_CombatShirt_Item";
		scope=2;
		identityTypes[]={};
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="T17_CombatShirt_Item";
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
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
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
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
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
