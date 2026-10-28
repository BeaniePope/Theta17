#include "includes.hpp"
class CfgPatches 
{
    class T17_Equipment_JCA
    {
        author = "Scout";
		name = "T17_Equipment_JCA";
		url = "";
		requiredAddons[] = 
		{
			"A3_Data_F_AoW_Loadorder"
		};
		requiredVersion = 2.22;
		units[] = 
        {
			"T17_CombatUniform_B_Vehicle"
        };
		weapons[] = 
        {
			"T17_CombatUniform_B",
            "T17_CarrierRigKBT_01_B",
            "T17_CarrierRigKBT_01_Light_B",
            "T17_CarrierRigKBT_01_Heavy_B",
            "T17_CarrierRigKBT_01_Combat_B",
            "T17_CarrierRigKBT_01_Command_B",
            "T17_CarrierRigKBT_01_Compact_B",
            "T17_CarrierRigKBT_01_CQB_B",
            "T17_CarrierRigKBT_01_Crew_B",
            "T17_CarrierRigKBT_01_Holster_B",
            "T17_CarrierRigKBT_01_Recon_B",
            "T17_CarrierRigKBT_01_Tactical_B",
            "T17_CarrierRigKBT_01_Security_B",

            "T17_Cleaners_CarrierRigKBT_01_Combat_B",
            "T17_Cleaners_CarrierRigKBT_01_Command_B",
            "T17_Cleaners_CarrierRigKBT_01_Compact_B",
            "T17_Cleaners_CarrierRigKBT_01_CQB_B",
            "T17_Cleaners_CarrierRigKBT_01_Crew_B",
            "T17_Cleaners_CarrierRigKBT_01_Recon_B",
            "T17_Cleaners_CarrierRigKBT_01_Tactical_B",
            "T17_Cleaners_CarrierRigKBT_01_Security_B",

			"T17_Cleaners_Lieb_CarrierRigKBT_01_Command_B",

            "T17_Overseer_CarrierRigKBT_01_Combat_B",
            "T17_Overseer_CarrierRigKBT_01_Command_B",
            "T17_Overseer_CarrierRigKBT_01_Compact_B",
            "T17_Overseer_CarrierRigKBT_01_CQB_B",
            "T17_Overseer_CarrierRigKBT_01_Crew_B",
            "T17_Overseer_CarrierRigKBT_01_Recon_B",
            "T17_Overseer_CarrierRigKBT_01_Tactical_B",
            "T17_Overseer_CarrierRigKBT_01_Security_B",

            "T17_Scholar_CarrierRigKBT_01_Combat_B",
            "T17_Scholar_CarrierRigKBT_01_Command_B",
            "T17_Scholar_CarrierRigKBT_01_Compact_B",
            "T17_Scholar_CarrierRigKBT_01_CQB_B",
            "T17_Scholar_CarrierRigKBT_01_Crew_B",
            "T17_Scholar_CarrierRigKBT_01_Recon_B",
            "T17_Scholar_CarrierRigKBT_01_Tactical_B",
            "T17_Scholar_CarrierRigKBT_01_Security_B",

            "T17_HelmetHBK_B",
            "T17_HelmetHBK_Ear_B",
            "T17_HelmetHBK_Chops_B",
            "T17_HelmetHBK_Headset_B",

			"T17_HelmetHBK_SL_B",
			"T17_HelmetHBK_Ear_SL_B",
			"T17_HelmetHBK_Chops_SL_B",
			"T17_HelmetHBK_Headset_SL_B",

			"T17_HelmetHBK_Medic_B",
			"T17_HelmetHBK_Ear_Medic_B",
			"T17_HelmetHBK_Chops_Medic_B",
			"T17_HelmetHBK_Headset_Medic_B",

			"T17_HelmetHBK_Headset_Puppy_B",
			"T17_HelmetHBK_Headset_Queen"
		};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles
{

// Uniforms

    class I_soldier_F;
    class T17_CombatUniform_B_Vehicle: I_soldier_F
    {
        author = "Scout";
        scope = 1;
        displayName = "Combat Uniform (Black)";
        uniformClass = "T17_CombatUniform_B";
        _generalMacro = "";
		modelSides[] = {0,1,2,3,4,5,6,7};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = 
		{
            "z\t17\addons\equipment\jca\textures\CombatUniform_01_B_co.paa",
        };
    };
};

class CfgWeapons
{

// Uniforms

    class Uniform_Base;
    class U_I_CombatUniform: Uniform_Base
	{
		class ItemInfo;
	};
    class T17_CombatUniform_B: U_I_CombatUniform
    {
        author = "Scout";
        scope = 2;
        displayName = "Combat Uniform (Black)";
        picture = "\A3\characters_f\data\ui\icon_u_b_combatuniform_mcam_tshirt_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "-";
            uniformClass = "T17_CombatUniform_B_Vehicle";
            containerClass = "Supply40";
            mass = 10;
        };
		t17_universal = 1;
    };

// Vests

    class JCA_V_CarrierRigKBT_01_black_F;
	class T17_CarrierRigKBT_01_B: JCA_V_CarrierRigKBT_01_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Vest (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa"};
	    hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat"};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_light_black_F;
	class T17_CarrierRigKBT_01_Light_B: JCA_V_CarrierRigKBT_01_light_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Lite (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa"};
	    hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat"};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_heavy_black_F;
	class T17_CarrierRigKBT_01_Heavy_B: JCA_V_CarrierRigKBT_01_heavy_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation GL Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa"};
    	hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat"};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_combat_black_F;
	class T17_CarrierRigKBT_01_Combat_B: JCA_V_CarrierRigKBT_01_combat_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Combat Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_command_black_F;
	class T17_CarrierRigKBT_01_Command_B: JCA_V_CarrierRigKBT_01_command_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Command Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_compact_black_F;
	class T17_CarrierRigKBT_01_Compact_B: JCA_V_CarrierRigKBT_01_compact_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Compact Vest (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_CQB_black_F;
	class T17_CarrierRigKBT_01_CQB_B: JCA_V_CarrierRigKBT_01_CQB_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation CQB Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_crew_black_F;
	class T17_CarrierRigKBT_01_Crew_B: JCA_V_CarrierRigKBT_01_crew_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Crew Vest (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_holster_black_F;
	class T17_CarrierRigKBT_01_Holster_B: JCA_V_CarrierRigKBT_01_holster_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Holster (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa"};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_recon_black_F;
	class T17_CarrierRigKBT_01_Recon_B: JCA_V_CarrierRigKBT_01_recon_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Recon Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_tactical_black_F;
	class T17_CarrierRigKBT_01_Tactical_B: JCA_V_CarrierRigKBT_01_tactical_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Tactical Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","","","",""};
		t17_universal = 1;
	};
    class JCA_V_CarrierRigKBT_01_security_black_F;
	class T17_CarrierRigKBT_01_Security_B: JCA_V_CarrierRigKBT_01_security_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Security Rig (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","","",""};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","","",""};
		t17_universal = 1;
	};

// Vests - Cleaners

	class T17_Cleaners_CarrierRigKBT_01_Combat_B: T17_CarrierRigKBT_01_Combat_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Combat Rig (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_Command_B: T17_CarrierRigKBT_01_Command_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Command Rig (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_Compact_B: T17_CarrierRigKBT_01_Compact_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Compact Vest (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_CQB_B: T17_CarrierRigKBT_01_CQB_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation CQB Rig (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_Crew_B: T17_CarrierRigKBT_01_Crew_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Crew Vest (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_Recon_B: T17_CarrierRigKBT_01_Recon_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Recon Rig (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_Tactical_B: T17_CarrierRigKBT_01_Tactical_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Tactical Rig (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};
	class T17_Cleaners_CarrierRigKBT_01_Security_B: T17_CarrierRigKBT_01_Security_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Security Rig (Cleaners)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};

// Vests - Cleaners (Customs)

	class T17_Cleaners_Lieb_CarrierRigKBT_01_Command_B: T17_Cleaners_CarrierRigKBT_01_Command_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Command Rig (Lieb)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_Lieb_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Cleaners.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_Lieb.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_cleaners = 1;
	};

// Vests - Overseer

	class T17_Overseer_CarrierRigKBT_01_Combat_B: T17_CarrierRigKBT_01_Combat_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Combat Rig (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_Command_B: T17_CarrierRigKBT_01_Command_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Command Rig (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_Compact_B: T17_CarrierRigKBT_01_Compact_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Compact Vest (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_CQB_B: T17_CarrierRigKBT_01_CQB_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation CQB Rig (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_Crew_B: T17_CarrierRigKBT_01_Crew_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Crew Vest (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_Recon_B: T17_CarrierRigKBT_01_Recon_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Recon Rig (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_Tactical_B: T17_CarrierRigKBT_01_Tactical_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Tactical Rig (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};
	class T17_Overseer_CarrierRigKBT_01_Security_B: T17_CarrierRigKBT_01_Security_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Security Rig (Overseer)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Overseer.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_overseer = 1;
	};

// Vests - Scholar

	class T17_Scholar_CarrierRigKBT_01_Combat_B: T17_CarrierRigKBT_01_Combat_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Combat Rig (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_Command_B: T17_CarrierRigKBT_01_Command_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Command Rig (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_Compact_B: T17_CarrierRigKBT_01_Compact_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Compact Vest (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_CQB_B: T17_CarrierRigKBT_01_CQB_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation CQB Rig (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_Crew_B: T17_CarrierRigKBT_01_Crew_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Crew Vest (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_Recon_B: T17_CarrierRigKBT_01_Recon_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Recon Rig (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_Tactical_B: T17_CarrierRigKBT_01_Tactical_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Tactical Rig (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch_ca.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Patch.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};
	class T17_Scholar_CarrierRigKBT_01_Security_B: T17_CarrierRigKBT_01_Security_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Security Rig (Scholar)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\CarrierRigKBT_01_B_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate_co.paa"};
        hiddenSelectionsMaterials[] = {"vests_f_JCA_IE\Data\V_KBT\CarrierRigKBT_01.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nametag_Scholar.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat","z\t17\addons\equipment\jca\textures\CarrierRigKBT_Nameplate.rvmat"};
		t17_scholar = 1;
	};

// Helmets

    class JCA_H_HelmetHBK_black_F;
	class T17_HelmetHBK_B: JCA_H_HelmetHBK_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Black)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","",""};
		t17_universal = 1;
	};
    class JCA_H_HelmetHBK_ear_black_F;
	class T17_HelmetHBK_Ear_B: JCA_H_HelmetHBK_ear_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Black, Ear Protectors)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","",""};
		t17_universal = 1;
	};
    class JCA_H_HelmetHBK_chops_black_F;
	class T17_HelmetHBK_Chops_B: JCA_H_HelmetHBK_chops_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Black, Chops)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","",""};
		t17_universal = 1;
	};
    class JCA_H_HelmetHBK_headset_black_F;
	class T17_HelmetHBK_Headset_B: JCA_H_HelmetHBK_headset_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Black, Headset)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","",""};
		t17_universal = 1;
	};

// Helmets - Squad Lead

	class T17_HelmetHBK_SL_B: T17_HelmetHBK_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (SL)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat"};
	};
	class T17_HelmetHBK_Ear_SL_B: T17_HelmetHBK_Ear_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (SL, Ear Protectors)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat"};
	};
	class T17_HelmetHBK_Chops_SL_B: T17_HelmetHBK_Chops_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (SL, Chops)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat"};
	};
	class T17_HelmetHBK_Headset_SL_B: T17_HelmetHBK_Headset_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (SL, Headset)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat"};
	};

// Helmets - Medic

	class T17_HelmetHBK_Medic_B: T17_HelmetHBK_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Medic)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat"};
	};
	class T17_HelmetHBK_Ear_Medic_B: T17_HelmetHBK_Ear_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Medic, Ear Protectors)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat"};
	};
	class T17_HelmetHBK_Chops_Medic_B: T17_HelmetHBK_Chops_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Medic, Chops)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat"};
	};
	class T17_HelmetHBK_Headset_Medic_B: T17_HelmetHBK_Headset_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Medic, Headset)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Medic.rvmat"};
	};

// Helmets - Puppy

	class T17_HelmetHBK_Headset_Puppy_B: T17_HelmetHBK_Headset_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Puppy, Headset)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_01_B_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Puppy_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Puppy_co.paa"};
		hiddenSelectionsMaterials[] = {"headwear_f_JCA_IE\Data\H_Helmet_HBK\H_HelmetHBK_01.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Puppy.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Puppy.rvmat"};
		t17_scholar = 1;
		t17_universal = 0;
	};

// Helmets - Queen

	class T17_HelmetHBK_Headset_Queen: T17_HelmetHBK_Chops_B
	{
		author = "Scout";
		scope = 2;
		displayName = "Foundation Helmet (Queen)";
		hiddenSelectionsTextures[] = {"z\t17\addons\equipment\jca\textures\Helmet_Hbk_Queen_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Queen_co.paa","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL_co.paa"};
		hiddenSelectionsMaterials[] = {"z\t17\addons\equipment\jca\textures\HelmetHBK_Queen.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_Queen.rvmat","z\t17\addons\equipment\jca\textures\HelmetHBK_Patch_SL.rvmat"};
		t17_scholar = 1;
		t17_universal = 0;
	}; 
};
