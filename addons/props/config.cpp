#include "includes.hpp"
class CfgPatches 
{
    class T17_Props
    {
        author = "Scout";
		name = "T17_Props";
		url = "";
		requiredAddons[] = 
        {
            "A3_Data_F_AoW_Loadorder"
        };
		requiredVersion = 2.22;
		units[] = 
        {
            "T17_Obelisk"
        };
		weapons[] = 
        {
			
		};
    };
};

class CfgVehicles
{
    class House_F;
    class T17_Obelisk: House_F
    {
        displayName = "Obelisk";
        author = "Scout";
		model = "\z\t17\addons\props\models\Obelisk.p3d";
		scope = 2;
		scopeCurator = 2;
		destrType = "DestructNo";
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        ace_cargo_size = 0;
        ace_cargo_canLoad = 0;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
        editorCategory="T17_Props";
        editorSubcategory="T17_Objects";
        maximumLoad=0;
		mapSize = 2;
        class EventHandlers {};
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.52;
			verticalOffsetWorld = 0;
			init = "''";
		};
    };
};
