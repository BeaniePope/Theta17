waitUntil { !isNull (findDisplay 46) };





//setting player variables
if (hasInterface) then { call HOV_fnc_InitEventHandlers; };

["ace_arsenal_displayClosed",{
	[] call HOV_updateGearVariables;
}] call CBA_fnc_addEventHandler;

[missionNamespace, "arsenalClosed", {
	[] call HOV_updateGearVariables;
}] call BIS_fnc_addScriptedEventHandler;






/////////////////////////
// Adding Zeus Modules //
/////////////////////////

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) then {
	diag_log "ZEN not detected. Zeus modules disabled.";
};

if (_hasZen && hasInterface) then {

//DEBUG MODULES
["[FOD] Black Carapace", "Restart System [DEBUG]", 
{
	params ["_modulePosASL", "_attachedobject"];

	[[],{
		player setVariable ["HOV_suitDisabled", true];
		sleep 0.2;
		player setVariable ["HOV_suitDisabled", nil, true];
		sleep 0.01;
		[player] spawn HOV_initScripts;
		[player] spawn HOV_fnc_initSuit;
	}] remoteExec ['spawn', 0, false];

}, "a3\modules_f_beta\data\firingdrills\restart_ca.paa"] call zen_custom_modules_fnc_register;	

//Send Message to unit module
["[FOD] Black Carapace", "Send Message",
{
	params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
	if (!isPlayer _logic) exitWith {};
	[
		"Send Message",
		[
			[
				"EDIT", 
				["Message Text", "Only input one line at a time."],
				["",{},1],
				false
			],
			[
				"SLIDER", 
				["Message Duration", "Delay before message is deleted."],
				[1, 30, 5, 0],
				false
			],
			[
				"CHECKBOX", 
				["Send to group", "Everyone in the unit's group will recieve the message."],
				[false],
				false
			]
		],
		{
			params ["_dialogResult","_args"];
			_args params [["_pos",[0,0,0],[[]],3], "_unit"];
			_group = units group _unit;
			_target = _unit;
			if (_dialogResult#2) then {
				_target = _group;
			};
			[[(_dialogResult#0),(_dialogResult#1)], {
				params ["_message","_delay"];
				[_message,"ZeusMessage_" + str time,_delay] call HOV_fnc_addSystemMessage;
			}] remoteExec ["spawn", _target, false];
		}, {}, _this
	] call zen_dialog_fnc_create;
}, "\z\T17\addons\functions\SCRAMBLEHUD\textures\ace_icon.paa"] call zen_custom_modules_fnc_register;

//Send Message to side module
["[FOD] Black Carapace", "Send Message To Side",
{
	params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
	
	[
		"Send Message To Side",
		[
			[
				"SIDES",
				["Select Side", "Side the message is displayed to."],
				west,
				false
			],
			[
				"EDIT", 
				["Message Text", "Only input one line at a time."],
				["",{},1],
				false
			],
			[
				"SLIDER",
				["Message Duration", "Delay before message is deleted."],
				[1, 30, 5, 0],
				false
			]
			
		],
		{
			params ["_dialogResult", "_args"];
			[[(_dialogResult#1),_dialogResult#2], {
				params ["_message","_delay"];
				[_message,"ZeusMessage_" + str time,_delay] call HOV_fnc_addSystemMessage;
			}] remoteExec ["spawn", (_dialogResult#0), false];
		}, {}, []
	] call zen_dialog_fnc_create;
}, "\z\T17\addons\functions\SCRAMBLEHUD\textures\ace_icon.paa"] call zen_custom_modules_fnc_register;

["[FOD] Black Carapace", "Turn Off HUD",
{
	params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
	if (isPlayer _logic && uniform _logic in HOV_uniforms && _logic getVariable ["HOV_suitActive",false]) then {
		[[_logic], {
			call HOV_fnc_clearHud;
		}] remoteExec ["spawn", _logic, false];
	};
}, "\z\T17\addons\functions\SCRAMBLEHUD\textures\ace_icon.paa"] call zen_custom_modules_fnc_register;

}; // end if (_hasZen && hasInterface)



