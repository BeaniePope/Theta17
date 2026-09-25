class CfgPatches 
{
    class T17_Factions
    {
        author = "Queen";
		name = "T17_Factions";
		url = "";
		requiredAddons[] = 
        {
            "T17_Main"
        };
		requiredVersion = 2.22;
		units[] = {};
		weapons[] = {}; // Even though you don't have any, arma 3 requires all of these attributes to be in the cfgpatches.
    };
};

class CfgGroups
{
    #include "T17ChaosInsurgency.hpp" // We do this via includes so the list doesn't become impossible to read. 
};