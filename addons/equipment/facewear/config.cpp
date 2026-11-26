#include "includes.hpp"
class CfgPatches 
{
    class T17_Equipment_Facewear
    {
        author = "Scout";
		name = "T17_Equipment_Facewear";
		url = "";
		requiredAddons[] = 
		{
			"A3_Data_F_AoW_Loadorder",
		};
		requiredVersion = 2.22;
		units[] = 
        {
        };
		weapons[] = 
        {
		};
    };
};

class CfgGlasses
{
	class G_Balaclava_blk;
	class T17_Balaclava: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "Balaclava";
		scope = 2;
        model = "\z\t17\addons\equipment\facewear\models\balaclava.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {"balaclava"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\facewear\textures\balaclava_co.paa"};
	};
};
