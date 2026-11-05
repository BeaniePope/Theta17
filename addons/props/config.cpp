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
            "T17_Obelisk",
            "T17_Crate",
            "T17_UplinkTerminal"
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
    class T17_Crate: T17_Obelisk
    {
        displayName = "Crate";
        author = "Scout";
		model = "\z\t17\addons\props\models\Crate.p3d";
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
        maximumLoad=100000;
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
    class T17_UplinkTerminal: T17_Obelisk
    {
        displayName = "Uplink Terminal";
        author = "Scout";
		model = "\z\t17\addons\props\models\antenna.p3d";
		scope = 2;
		scopeCurator = 2;
		destrType = "DestructNo";
        ace_dragging_canDrag = 1;
        ace_dragging_canCarry = 1;
        ace_cargo_size = 0;
        ace_cargo_canLoad = 0;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
        editorCategory="T17_Props";
        editorSubcategory="T17_Objects";
        maximumLoad = 0;
        transportMaxBackpacks = 0;
        transportMaxMagazines = 0;
        transportMaxWeapons = 0;
        transportMaxItems = 0; 
		mapSize = 2;
        class UserActions
        {
            //priority 60 and up so these sit above the base-game scroll actions
            class scholar_arsenal
            {
                displayName = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold' color='#00C200'> Request Scholar Arsenal </t>";
                displayNameDefault = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold' color='#00C200'> Request Scholar Arsenal </t>";
                textToolTip = "Request Scholar Arsenal";
                position = "interact";
                radius  = 5;
                priority = 64;
                onlyForPlayer = 0;
                condition = "true";
                statement = "[getPosATL this, 'T17_Crate', 'Scholar', this] spawn t17_Orbital_fnc_initOrbitalDrop;";
                animPeriod = 0.25;
            };
            class cleaners_arsenal
            {
                displayName = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold' color='#E30000'> Request Cleaners Arsenal </t>";
                displayNameDefault = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold' color='#E30000'> Request Cleaners Arsenal </t>";
                textToolTip = "Request Cleaners Arsenal";
                position = "interact";
                radius  = 5;
                priority = 63;
                onlyForPlayer = 0;
                condition = "true";
                statement = "[getPosATL this, 'T17_Crate', 'Cleaners', this] spawn t17_Orbital_fnc_initOrbitalDrop;";
                animPeriod = 1.0;
            };
			class overseer_arsenal
            {
                displayName = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold' color='#005ADE'> Request Overseer Arsenal </t>";
                displayNameDefault = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold' color='#005ADE'> Request Overseer Arsenal </t>";
                textToolTip = "Request Overseer Arsenal";
				position = "interact";
                radius  = 5;
                priority = 62;
                onlyForPlayer = 0;
                showWindow = 0;
                condition = "true";
                statement = "[getPosATL this, 'T17_Crate', 'Overseer', this] spawn t17_Orbital_fnc_initOrbitalDrop;";
            };
            class SERE_Arsenal
            {
                displayName = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold'  color='#69219E'> Request SERE Arsenal </t>";
                displayNameDefault = "<img size='1.4' image=''/><t size='1.2' font='PuristaSemibold'  color='#69219E'> Request SERE Arsenal </t>";
                textToolTip = "Request SERE Arsenal";
                position = "interact";
                radius  = 5;
                priority = 61;
                onlyForPlayer = 0;
                condition = "true";
                statement = "[getPosATL this, 'T17_Crate', 'SERE', this] spawn t17_Orbital_fnc_initOrbitalDrop;";
            };
        };
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
