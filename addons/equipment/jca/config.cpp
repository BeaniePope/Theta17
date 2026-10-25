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
			"T17_CombatUniform_B"
		};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles
{
    class I_E_Soldier_base_F;
    class T17_CombatUniform_B_Vehicle: I_E_Soldier_base_F
    {
        author = "Scout";
        scope = 1;
        displayName = "Combat Uniform (Black)";
        uniformClass = "T17_CombatUniform_B";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
        hiddenSelectionsTextures[] = 
		{
            "\z\t17\addons\equipment\jca\textures\CombatUniform_01_B_co.paa",
            "\z\t17\addons\equipment\jca\textures\CombatUniform_02_B_co.paa",
            "\a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa",
			""
        };

    };
};

class CfgWeapons
{
    class Uniform_Base;
    class U_I_E_Uniform_01_F: Uniform_Base
	{
		class ItemInfo;
	};
    class T17_CombatUniform_B: U_I_E_Uniform_01_F
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
            mass = 40;
        };
    };
};
