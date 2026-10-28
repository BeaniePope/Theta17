class CfgPatches 
{
    class T17_Functions
    {
        author = "Scout & Queen";
		name = "T17_Functions";
		url = "";
		requiredAddons[] = 
        {
            "T17_Main"
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

class Extended_PreInit_EventHandlers {
    class T17_pre_init_event {
        init = "call compile preprocessFileLineNumbers '\z\t17\addons\functions\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class T17_post_init_event {
        init = "call compile preprocessFileLineNumbers '\z\t17\addons\functions\XEH_postInit.sqf'";
    };
};

class CfgFunctions
{
    class t17
    {
        class functions 
        {
            file = "\z\t17\addons\functions\utility";
            class toggleVisualCognitohazard{};
            class initArsenal{};
            class init{};
        };
    };
};

class CfgWeapons
{

};

class CfgVehicles
{

};
