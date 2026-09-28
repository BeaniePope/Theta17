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
		units[] = 
        {  
            "T17_CI_Rifleman",
            "T17_CI_MachineGunner",
            "T17_CI_Sniper",
            "T17_CI_Marksman",
            "T17_CI_AntiTank",
            "T17_CI_AntiAir",
            "T17_CI_Conscript",
            "T17_CI_ConscriptMG"
        };
		weapons[] = {}; // Even though you don't have any, arma 3 requires all of these attributes to be in the cfgpatches.
    };
};

class CfgGroups
{
    #include "T17ChaosInsurgencyGroups.hpp" // We do this via includes so the list doesn't become impossible to read. 
};

class CfgVehicles
{
    #include "T17ChaosInsurgencyUnits.hpp"
};

class CfgWeapons
{
    #include "T17ChaosInsurgencyWeapons.hpp"
};
