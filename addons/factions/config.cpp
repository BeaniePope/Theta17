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
            "T17_CI_ConscriptMG",
            "T17_MCD_PrivateSecurity",
            "T17_MCD_PrivateSecurity_LightCombat",
            "T17_MCD_PrivateSecurity_LightCombatRifleman",
            "T17_MCD_TRO_Rifleman",
            "T17_MCD_TRO_DMR",
            "T17_MCD_TRO_MG",
            "T17_MCD_TRO_RTO"
        };
		weapons[] = {}; // Even if you don't have anything to put in them, arma 3 requires all of these attributes to be in the cfgpatches.
    };
};

class CfgGroups
{
    class East // East is Opfor, West is Blufor - Independent is Independent, Civilian is Civilian.
    {    
        name = "$STR_A3_CfgGroups_East0"; // base arma stringtable assocation. used for language localization. just replace east with west and so on.
        side = 0; 
        #include "T17ChaosInsurgencyGroups.hpp" // We do this via includes so the list doesn't become impossible to read. 
        #include "T17MCDIncGroups.hpp"
    };
};

class CfgVehicles
{
    #include "T17ChaosInsurgencyUnits.hpp"
    #include "T17MCDIncUnits.hpp"
};

class CfgWeapons
{
    #include "T17ChaosInsurgencyWeapons.hpp"
    #include "T17MCDIncWeapons.hpp"
};
