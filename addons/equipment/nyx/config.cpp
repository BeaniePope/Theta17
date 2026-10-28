#include "includes.hpp"
class CfgPatches 
{
    class T17_Equipment_Nyx
    {
        author = "Scout";
		name = "T17_Equipment_Nyx";
		url = "";
		requiredAddons[] = 
		{
			"A3_Data_F_AoW_Loadorder"
		};
		requiredVersion = 2.22;
		units[] = 
        {
        };
		weapons[] = 
        {
			"T17_Helmet_Heli_01_Crew_Nyx"
		};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
	class JCA_H_Helmet_Heli_01_crew_black_F;
	class T17_Helmet_Heli_01_Crew_Nyx: JCA_H_Helmet_Heli_01_crew_black_F
	{
		author = "Scout";
		scope = 2;
		displayName = "Heli Crew Helmet (Nyx)";
		hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\nyx\textures\h_helmet_heli_01_black_nyx_co.paa","\z\t17\addons\equipment\nyx\textures\h_helmet_heli_01_glass_nyx_ca.paa","",""};
		t17_raven = 1;
	};
};
