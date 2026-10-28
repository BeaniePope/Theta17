#include "includes.hpp"
class CfgPatches 
{
    class T17_Main
    {
        author = "Scout & Queen";
		name = "T17_Main";
		url = "";
		requiredAddons[] = 
        {
            "A3_Data_F_AoW_Loadorder"
        };
		requiredVersion = 2.22;
		units[] = 
        {
            "T17_Unit", // Every unit you make has to be defined here, or else zeus can't access it.
			"T17_Nobody_Unit",
			"T17_Scholar_Arsenal",
			"T17_Cleaners_Arsenal",
			"T17_Overseer_Arsenal",
			"T17_Raven_Arsenal"
        };
		weapons[] = 
        {
            "T17_CombatShirt_Item", // Same for weapons /  items.
			"T17_MCD_Suit_Item",
			"T17_AR_Uniform_Item",
			"T17_AR_Scientist_Uniform_Item",
			"T17_GOC_Vest",
			"T17_ScrambleGoggles_NVG",
			"T17_BallisticMask_NVG",
			"T17_BallisticMaskScrambleGoggles_NVG"
        };
    };
};

#include "T17_CfgEditorCategories.hpp"

#include "T17_CfgFactionClasses.hpp"

#include "T17_CfgEditorSubcategories.hpp"

class CfgWeapons
{
    class U_B_CombatUniform_mcam_vest;
    class UniformItem;
	class Uniform_Base;
	class VestItem;
	class ItemCore;

    class T17_CombatShirt_Item: U_B_CombatUniform_mcam_vest
    {
        author = "Queen";
        displayName = "[Theta - 17] Combat Shirt w/ Sleeves";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T17_Unit";
			containerClass="Supply40";
			mass=40;
		};
    };

	#include "T17_MarshallCarterDarkWeapons.hpp"
	#include "T17_AndersonRoboticsWeapons.hpp"
	#include "T17_GlobalOccultCoalitionWeapons.hpp"
	#include "T17_NVGWeapons.hpp"
};



class CfgVehicles // Backpacks, Vehicles, Objects, and Units are all the same thing. Blame Bohemia 
{
	#include "T17_LRBackpacks.hpp"
	#include "T17_AndersonRoboticsVehicles.hpp"
	#include "T17_NobodyVehicles.hpp"
	#include "T17_DroneImprovements.hpp"
	#include "T17_ArsenalBoxes.hpp"
	#include "T17_Backpacks.hpp"
};
// [[[],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_C_FormalSuit_01_gray_F",[]],[],[],"H_StrawHat_dark","G_Spectacles_Tinted",[],["ItemMap","DSA_Detector","TFAR_anprc152","ItemCompass","KAT_ChemicalDetector",""]],[["aceax_textureOptions",[]]]]

#include "T17_CfgGlasses.hpp"

class CfgMainMenuSpotlight
{
	delete OldMan;
	delete Bootcamp;
	delete EastWind;
	delete ApexProtocol;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Orange_CampaignGerman;
	delete Orange_Campaign;
	delete Tanks_Campaign_01;
	delete Showcase_TankDestroyers;
	delete Contact_Campaign;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_01;
	delete SP_FD14;
	delete AoW_Showcase_AoW;
	delete AoW_Showcase_Future;
	delete Showcase_VR_lxWS;
	delete Extraction_lxWS;
	delete Showcase_Alchemist_lxWS;
	delete Training_Day_RF;
	delete Air_Control_RF;
	delete EF_ResoluteCyclone;
	delete Scenario_AirControl_RF;
	delete Scenario_FireSeason_RF;
	delete Scenario_TrainingDay_RF;
	class T17_ServerJoin
	{
		text = "Operations";
		textIsQuote = 0;
		picture = "\z\t17\addons\main\textures\mainmenulogo_co.paa";
		video = "\z\t17\addons\main\videos\mainmenuvideo.ogv";
		action = "connectToServer ['216.245.177.54', 2306, 'MTFT17']";
		actionText = "Join";
		condition = "true";
	};
};
