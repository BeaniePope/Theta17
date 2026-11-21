#include "includes.hpp"

class CfgPatches 
{
    class T17_Compat_Regalis
    {
        author = "Scout";
		name = "T17_Compat_Regalis";
		url = "";
		requiredAddons[] = 
        {
            "RegalisSCP_CB_main"
        };
		requiredVersion = 0;
		units[] = 
        {
        };
		weapons[] = 
        {
		};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles
{
	class SCP_CB_Things_Door1_Button;
    class T17_Door1_Button: SCP_CB_Things_Door1_Button
    {
        displayName = "(T17) Door 1 (Button)"; // Name in editor
        class UserActions
        {
            class Close_door_F
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = "Press Button";
                priority            = 63;
                position            = "button_f";
                radius              = 5;
                onlyForPlayer       = 0;
                condition           = "this animationSourcePhase 'Door_1_source' == 1";
                statement           = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
            };
            class Open_door_F: Close_door_F
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
            };
            class Close_door_B: Close_door_F
            {
                position = "button_b";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound;";
            };
            class Open_door_B: Close_door_B
            {
                condition = "this animationSourcePhase 'Door_1_source' == 0";
                statement = "[[this], 'None'] call SCP_fnc_buttonTrigger; [this, 'Press', 'button_b'] call SCP_fnc_buttonSound;";
            };
        };
    };
	class SCP_CB_Things_Door1_Button_Error;
    class T17_Door1_Button_Error: SCP_CB_Things_Door1_Button_Error
    {
        displayName = "(T17) Door 1 (Error)"; // Name in editor
        class UserActions
        {
            class Error_door_F
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = "Press Button";
                priority            = 63;
                position            = "button_f";
                radius              = 5;
                onlyForPlayer       = 0;
                condition           = "this animationSourcePhase 'Door_1_source' == 0";
                statement           = "[this, 'Press Error', 'button_f'] call SCP_fnc_buttonSound";
            };
            class Error_door_B: Error_door_F
            {
                position = "button_b";
                statement = "[this, 'Press Error', 'button_b'] call SCP_fnc_buttonSound";
            };
        };
    };
	class SCP_CB_Things_Door1_Button_NoRespose;
    class T17_Door1_Button_NoRespose: SCP_CB_Things_Door1_Button_NoRespose
    {
        displayName = "(T17) Door 1 (No Response)"; // Name in editor
        class UserActions
        {
            class NoResponse_door_F
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = "Press Button";
                priority            = 63;
                position            = "button_f";
                radius              = 5;
                onlyForPlayer       = 0;
                condition           = "this animationSourcePhase 'Door_1_source' == 0";
                statement           = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
            class NoResponse_door_B: NoResponse_door_F
            {
                position = "button_b";
                statement = "[this, 'Press', 'button_b'] call SCP_fnc_buttonSound";
            };
        };
    };
	class SCP_CB_Things_Keypad_Button;
    class T17_Keypad_Button: SCP_CB_Things_Keypad_Button
    {
        displayName = "(T17) Keypad Button"; // Name in editor
        class UserActions
        {
            class Button_f
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = "Press Button";
                priority            = 63;
                position            = "button_f";
                radius              = 5;
                onlyForPlayer       = 0;
                condition           = "!(this getVariable ['SCP_CB_Operetable_InteractHalt', 0])";
                statement           = "[this] call SCP_fnc_buttonExecExpression; [this, 'Press', 'button_f'] call SCP_fnc_buttonSound;";
            };
        };
    };
	class SCP_CB_Things_Keypad_Code;
    class T17_Keypad_Code: SCP_CB_Things_Keypad_Code
    {
        displayName = "(T17) Keypad Code"; // Name in editor
        class UserActions
        {
            class Button_f
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = "Press Button";
                priority            = 63;
                position            = "button_f";
                radius              = 5;
                onlyForPlayer       = 0;
                condition           = "true";
                statement           = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };
	class SCP_CB_Things_Keypad_Scanner;
    class T17_Keypad_Scanner: SCP_CB_Things_Keypad_Scanner
    {
        displayName = "(T17) Keypad Scanner"; // Name in editor
        class UserActions
        {
            class Button_f
            {
                displayNameDefault  = "<img image='z\RegalisSCP_CB\addons\textures\handsymbol.paa' size='2.5' />";
                displayName         = "Press Button";
                priority            = 63;
                position            = "button_f";
                radius              = 5;
                onlyForPlayer       = 0;
                condition           = "true";
                statement           = "[this, 'Press', 'button_f'] call SCP_fnc_buttonSound";
            };
        };
    };
};
