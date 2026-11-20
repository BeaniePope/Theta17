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
    class t17_utility
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

class CfgRemoteExec 
{
    class Functions 
    {
        mode = 1;
        jip = 1;
        class T17_Utility_fnc_initArsenal 
        {
            allowedTargets = 0;
            jip = 1;
        };
        class T17_Utility_fnc_init
        {
            allowedTargets = 0;
            jip = 1;
        };
    };
};
