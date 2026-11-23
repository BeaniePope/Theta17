#include "includes.hpp"
class CfgPatches 
{
    class T17_Equipment_CUP
    {
        author = "Scout";
		name = "T17_Equipment_CUP";
		url = "";
		requiredAddons[] = 
		{
			"A3_Data_F_AoW_Loadorder",
		};
		requiredVersion = 2.22;
		units[] = 
        {
			"T17_MH60L_AAP_4x"
        };
		weapons[] = 
        {
		};
    };
};

class CfgVehicles
{
	class Helicopter;
    class Helicopter_Base_F: Helicopter
    {
        class Turrets;
    };
    class Helicopter_Base_H: Helicopter_Base_F
    {
        class Turrets: Turrets
        {
            class CopilotTurret;
            class MainTurret;
        };
    };
    class CUP_Uh60_Base: Helicopter_Base_H
    {
        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class MainTurret: MainTurret {};
            class RightDoorGun: MainTurret {};
        };
    };
    class CUP_MH60L_Dap_4x_Dynamic_Base: CUP_Uh60_Base
    {
        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class MainTurret: MainTurret {};
            class RightDoorGun: MainTurret {};
        };
    };
    class CUP_B_MH60L_DAP_4x_US: CUP_MH60L_Dap_4x_Dynamic_Base {};
	class T17_MH60L_AAP_4x: CUP_B_MH60L_DAP_4x_US
	{
		scope = 2;
		side = 1;
		author = "Scout";
		displayname = "(T17) MH60L AAP";
		faction = "CUP_B_US_Army";
		crew = "CUP_B_US_Pilot";
		typicalCargo[] = {"CUP_B_US_Pilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_MH60L_DAP_4x_Multi_US.jpg";
		maximumLoad = 1000;
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks{};
		class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret
            {
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
            };
			class MainTurret: MainTurret {};
            class RightDoorGun: RightDoorGun {};
        };
	};
};
