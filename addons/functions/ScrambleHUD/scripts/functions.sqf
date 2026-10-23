//Define sound variables for easy changing
HOV_targetingSystemSoundOn = "hov_threat_detector";
HOV_targetingSystemSoundOff = "click";

HOV_ICON_MODIFIER = 1;
HOV_detectorRange = 5000;
HOV_FOV_MOD = 1;
HOV_BOOT_OFFSET = 0.022;
HOV_ARMOR_MK = "II";


HOV_fnc_DebugMessage = {
    private _msg  = _this select 0;
    private _args = _this select [1, count _this - 1];

    if !(missionNamespace getVariable ["HOV_DEBUG_MODE", false]) exitWith {};

    private _formatted = if (_args isEqualTo []) then {
        _msg
    } else {
        format ([_msg] + _args)
    };

    systemChat format ["[HOV DEBUG] %1", _formatted];
    diag_log format ["[HOV DEBUG] %1", _formatted];
};

HOV_initScripts = {
	params [["_unit", player], "_local"];

	if !(local _unit) exitWith {};

	sleep (random 3); //Stagger script execution to avoid performance spikes

	["HOV_initScripts started for: %1", name _unit] call HOV_fnc_DebugMessage;

	_isplayer = (isPlayer _unit);

	if (_isplayer) then {
		[_unit] call HOV_updateGearVariables;
	};
};

HOV_Suit_Ready =  {
	params [["_unit", player]];
	if (!(local _unit) or !(isPlayer _unit)) exitWith {};
	
	["HOV_suit_ready started for: %1", name _unit] call HOV_fnc_DebugMessage;

	newViewAngle = 0;
	oldViewAngle = 0;
	hudAngle = 0;

	HOV_threatRange = (_unit getVariable ["HOV_TierBased_AuspexRange", 150]);
	
	HOV_nearUnits = [];
	HOV_hasHelmet = (goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG);
	HOV_eventHandlerAdded = false;
	HOV_targetingHandlerAdded = false;
	HOV_helmetOverlayShown = false;
	HOV_systemMessages = [];
	HOV_systemMessageAllowed = false;
	if (isNil "HOV_activateHudAction") then {
		HOV_activateHudAction = _unit addAction ["Activate HUD", {
			params ["_target", "_caller", "_actionId", "_arguments"];
			call HOV_fnc_hudBootUp;
		}, [], 6, false, true,"","(alive _originalTarget) && !(_originalTarget getvariable ['HOV_hudInitiated', false]) && (goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG)"];
	};
};

HOV_fnc_initSuit = {
	params [["_unit", player]];
	[_unit] call HOV_suit_ready;
	_hasSCRAMBLEHeadgear = (goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG);

	if ((_hasSCRAMBLEHeadgear) && (alive _unit) && !(_unit getVariable ['HOV_hudInitiated', false])) then {
		["[HOV_fnc_initSuit] Booting HUD for: %1", name _unit] call HOV_fnc_DebugMessage;
		[_unit] call HOV_suit_activation;
		call HOV_fnc_hudBootUp;
	} else {
		["[HOV_fnc_initSuit] HUD boot skipped for: %1", name _unit] call HOV_fnc_DebugMessage;
	};
};

HOV_suit_activation = {
	params [["_unit", player]];

	if !(local _unit) exitWith {};

	["HOV_suit_activation started for: %1", name _unit] call HOV_fnc_DebugMessage;

	HOV_hasHelmet = (goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG);
	HOV_firstPersonCheck = ((cameraView == "INTERNAL") || (cameraView == "GUNNER"));
	_unit setVariable ["HOV_suitActive",true, true];
	_unit setVariable ["HOV_hasUniform", true, true];
	
	_unit setVariable ["HOV_HUD_ACTIVE", false, true];
	_unit setVariable ["HOV_HUD_ALLOWED", false];
	_unit setVariable ["HOV_HUD_BOOTING", false];
	
	_unit setVariable ["HOV_active_mode", "armor", true];
	
	call HOV_fnc_getHelmetOverlay;

	call HOV_fnc_hudInit;
	[_unit] spawn HOV_fnc_system;
	[] spawn HOV_fnc_SystemMessageLoop;
};


HOV_addKillEH = {
	if !(player getVariable ["HOV_EH_Killed", false]) then {
		["[HOV_fnc_InitEventHandlers] Adding killed EH for: %1", name player] call HOV_fnc_DebugMessage;
		player setVariable ["HOV_EH_Killed", true];
		player addEventHandler ["Killed", {
			["[HOV_EH_Killed] %1 killed, running cleanup", name player] call HOV_fnc_DebugMessage;

			["[HOV_EH_Killed] Removing actions for: %1", name player] call HOV_fnc_DebugMessage;
			if !(isNil "HOV_activateHudAction") then {
				player removeAction HOV_activateHudAction;
				HOV_activateHudAction = nil;
				["[HOV_EH_Killed] Removed HOV_activateHudAction"] call HOV_fnc_DebugMessage;
			};

			player setVariable ["HOV_suitActive", false, true];
			player setVariable ["HOV_active_mode", "none", true];
			player setUnitRecoilCoefficient 1;
			player setCustomAimCoef 1;

			player setVariable ["HOV_HUD_ACTIVE", false, true];
			player setVariable ["HOV_HUD_ALLOWED", false];
			player setVariable ["HOV_hudInitiated", false, true];
			player setVariable ["HOV_TARGETING_ALLOWED", false];

			HOV_systemMessageAllowed = false;
			HOV_lowLight = false;
			HOV_threatRange = (player getVariable ["HOV_TierBased_AuspexRange", 150]);
			HOV_nearUnits = [];

			call HOV_fnc_clearHud;

			setAperture -1;

			"HOV_OVERLAY_LAYER" cutText ["", "PLAIN", 1, false];
			"HOV_INDICATOR_LAYER" cutText ["", "PLAIN", 1, false];
			"HOV_HUD_INFO_LAYER" cutText ["", "PLAIN", 1, false];
			"HOV_HUD_BOOTUP" cutText ["", "PLAIN", 1, false];

			if (missionNamespace getVariable ["ace_advanced_fatigue_enabled", false]) then {
				["[HOV_EH_Killed] Restoring ACE fatigue factors for: %1", name player] call HOV_fnc_DebugMessage;
				if !(isNil "oldPerformanceFactor") then { ace_advanced_fatigue_performanceFactor = oldPerformanceFactor };
				if !(isNil "oldRecoveryFactor") then { ace_advanced_fatigue_recoveryFactor = oldRecoveryFactor };
			};

			if (player getVariable ["HOV_speedModified", false]) then {
				["[HOV_EH_Killed] Restoring animation speed for: %1", name player] call HOV_fnc_DebugMessage;
				[player, {
					params ["_target", "_speed"];
					_target setAnimSpeedCoef 1;
				}] remoteExec ["BIS_fnc_call"];
				player setVariable ["HOV_speedModified", false, true];
			};

			["[HOV_EH_Killed] Cleanup complete for: %1", name player] call HOV_fnc_DebugMessage;
		}];
	} else {
		["[HOV_fnc_InitEventHandlers] Killed EH already registered for: %1, skipping", name player] call HOV_fnc_DebugMessage;
	};
};

HOV_fnc_InitEventHandlers = {
	if !(hasInterface) exitWith {
		["[HOV_fnc_InitEventHandlers] No interface, skipping"] call HOV_fnc_DebugMessage;
	};

	["[HOV_fnc_InitEventHandlers] Initializing for: %1", name player] call HOV_fnc_DebugMessage;
	[player] spawn HOV_fnc_initSuit;
    if !(player getVariable ["HOV_EH_respawn", false]) then {
		["[HOV_fnc_InitEventHandlers] Adding respawn EH for: %1", name player] call HOV_fnc_DebugMessage;
        player setVariable ["HOV_EH_respawn", true];
        player addEventHandler ["Respawn", {
            params ["_unit", "_corpse"];
			["[HOV_EH_respawn] Fired | new unit: %1 | corpse: %2", name _unit, name _corpse] call HOV_fnc_DebugMessage;
			HOV_activateHudAction = nil;
			HOV_suit_activate_action = nil;
			[_unit] spawn HOV_fnc_initSuit;
			call HOV_addKillEH;
			_unit addEventHandler ["Respawn", thisEventHandler];
        }];
    } else {
		["[HOV_fnc_InitEventHandlers] Respawn EH already registered for: %1, skipping", name player] call HOV_fnc_DebugMessage;
	};

	// kill Eventhandler added here and on each respawn as its not persitent
	call HOV_addKillEH;

	["[HOV_fnc_InitEventHandlers] All event handlers registered for: %1", name player] call HOV_fnc_DebugMessage;
};


HOV_fnc_getHelmetOverlay = {
	//yes this looks disgusting, its future proofing for different hud textures per armor
	switch (true) do {
		case (goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG): {
			HOV_hudOverlayTexture = "";
			HOV_hudOverlayBrokenTexture = "";

			HOV_TEXTURE_INTERIOR_OVERLAY = "\z\T17\addons\functions\SCRAMBLEHUD\textures\T17_interiorOverlay.paa";
			HOV_HUD_START_IMAGE = "\z\T17\addons\functions\SCRAMBLEHUD\textures\T17_startUp_normal.paa";			
		};
		default {
			HOV_hudOverlayTexture = "";
			HOV_hudOverlayBrokenTexture = "";

			HOV_TEXTURE_INTERIOR_OVERLAY = "";
			HOV_TEXTURE_SHIELD = "";
			HOV_TEXTURE_ARMOR_HEAD = "";
			HOV_TEXTURE_ARMOR_TORSO = "";
			HOV_TEXTURE_ARMOR_ARM_R = "";
			HOV_TEXTURE_ARMOR_ARM_L = "";
			HOV_TEXTURE_ARMOR_LEG_R = "";
			HOV_TEXTURE_ARMOR_LEG_L = "";
		};
	};
};

HOV_updateGearVariables = {
	params [["_unit", player]];

	if !(local _unit) exitWith {};

	["HOV_updateGearVariables started for: %1", name _unit] call HOV_fnc_DebugMessage;


	if (goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG) then
	{
		HOV_hasHelmet = true;
	};

	HOV_firstPersonCheck = ((cameraView == "INTERNAL") || (cameraView == "GUNNER"));
	
	if (HOV_hasHelmet) then {
		[_unit] call HOV_suit_activation;
		call HOV_fnc_addHudEventhandler;
		call HOV_fnc_getHelmetOverlay;
	};
};

HOV_fnc_clearHud = {

	["HOV_fnc_clearHud started for: %1", name player] call HOV_fnc_DebugMessage;

	_hudElements = [
		(HOV_interiorOverlay#0),
		(HOV_visorEffect#0)
	];
	
	[_hudElements] spawn {
		private _hudElements = _this select 0;
		{_x ctrlSetTextColor [0,0,0,0]; _x ctrlCommit 0;} forEach _hudElements;
	};


	player setVariable ["HOV_HUD_ACTIVE", false, true];
	player setVariable ["HOV_HUD_ALLOWED", false];
	player setVariable ["HOV_hudInitiated", false, true];
	player setVariable ["HOV_indicatorsActive",false];
	player setVariable ["HOV_TARGETING_ALLOWED", false];
	HOV_systemMessageAllowed = false;
	(HOV_bootUpTextField#0) ctrlSetStructuredText parseText "";
	HOV_lowLight = false;
	HOV_threatRange = (player getVariable ["HOV_TierBased_AuspexRange", 5000]);
	HOV_nearUnits = [];
	if (!(goggles player in T17_SCRAMBLEGOGGLES || hmd player in T17_SCRAMBLENVG)) then {
		call HOV_fnc_removeHudEventhandler;
	};
	call HOV_fnc_removeTargetingEventhandler;
	setAperture -1;
};

HOV_fnc_splitTypeText = {
	params [["_string", ""]];
	private _tokens = [];
	private _buffer = "";
	private _closer = "";
	{
		if (_closer isEqualTo "") then {
			switch (_x) do {
				case "&": { _buffer = _x; _closer = ";" };
				case "<": { _buffer = _x; _closer = ">" };
				default { _tokens pushBack _x };
			};
		} else {
			_buffer = _buffer + _x;
			// a lone & never terminates, flush on the space so it can't swallow the rest of the line
			if ((_x isEqualTo _closer) || {_closer isEqualTo ";" && {_x isEqualTo " "}}) then {
				_tokens pushBack _buffer;
				_buffer = "";
				_closer = "";
			};
		};
	} forEach (_string splitString "");
	if (_buffer isNotEqualTo "") then {
		_tokens pushBack _buffer;
	};
	_tokens
};

HOV_fnc_hudBootUp = {

	["HOV_fnc_hudBootUp started for: %1", name player] call HOV_fnc_DebugMessage;

	player setVariable ["HOV_HUD_ACTIVE", false, true];
	player setVariable ["HOV_HUD_ALLOWED", true];
	player setVariable ["HOV_hudInitiated",true, true];
	HOV_systemMessageAllowed = false;

	call HOV_fnc_removeTargetingEventhandler;

	private _hudElements = [
		(HOV_interiorOverlay#0),
		(HOV_visorEffect#0)
	];
	{_x ctrlSetTextColor [0,0,0,1]} forEach _hudElements;

	_chapterID = "Theta - 17";
	
	///////////////////////////////////
	/*
		To input an empty line, put "&#160;" in the first string.
	*/
	///////////////////////////////////

	_iteration = 0;
	private _input = "";
	private _bootupText = [];

	
	_bootupText = [
		["// Initializing SCRAMBLE Systems //",0.0,"",0.5, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["--Loading Foundation Data--",0.1,"",0.0, _input, _input],
		["-Secure. Contain. Protect.-",0.1,"",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["Initializing visual processing...",0.1,"",0.0, _input, _input],
		["Reading data...",0.1,"   Complete",0.0, _input, _input],
		["Updating from SCPNET...",0.1,"   Updated",0.0, _input, _input],
		["System vers. v40.7",0.1,"",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["Listing Core Functions",0.1,"",0.0, _input, _input],
		["Device        Device ID        Device Class",0.1,"",0.0, _input, _input],
		["----------------------------------------------------",0.1,"",0.0, _input, _input],
		["23            2F798-Theta-7       Visual CognitoHazard Scrub",0.1,"",0.0, _input, _input],
		["56            4D927-Alpha-9       Localized Amnestic System",0.1,"",0.0, _input, _input],
		["78            9G487-Beta-4        SCPNET Integrated Communications",0.1,"",0.0, _input, _input],
		["----------------------------------------------------",0.1,"",0.0, _input, _input],
		["--All Functions Loaded--",0.1,"",0.1, _input, _input],
		["&gt;&gt; Initializing SCRAMBLE Boot Sequence &lt;&lt;",0.1,"",0.3, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["Operator ID:",0.1," [%1]",0.2, _input, name player],
		["Mobile Task Force Designation:",0.1," [%1]",0.2, _input, _chapterID],
		["SCRAMBLE Mark:",0.1," [%1]",0.2, _input, HOV_ARMOR_MK],
		["&#160;",0.1,"",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["Powering Up Head Up Display",0.1,"",0.2, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["      Live Visual Feed",0.1,"   [ONLINE]",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["          Calibrating Global Positioning System...",0.1,"   Completed",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["      Visual Impairment Assistance",0.1,"   [ONLINE]",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["Testing Amnestic Protocols....",0.1,"",0.2, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["          Activating SCIPNET Link...",0.1,"   Online",0.0, _input, _input],
		["          Syncing to Internal Communications Network...",0.1,"   Complete",0.0, _input, _input],
		["          Initializing Cognitohazard Scanners... ",0.3,"   Online",0.2, _input, _input],
		["          Calibrating Visual Acuity Detection...",0.1,"   Complete",0.0, _input, _input],
		["          Final Amnestics Checks...",0.1,"   Success",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["      General Combat Assist",0.1,"   [ONLINE]",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["--Boot Sequence Complete--",0.2,"",0.2, _input, _input],
		["        All systems: NOMINAL",0.2,"",0.2, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["&gt;&gt; SCRAMBLE System Ready for Use. &lt;&lt;",0.1,"",0.4, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["// Thank you, Operator //",0.1,"",0.0, _input, _input],
		["&#160;",0.1,"",0.0, _input, _input],
		["To keeping the Veil secure.",2.1,"",0.0, _input, _input]
	];


	private _textField = (HOV_bootUpTextField#0);
	private _startUpImage = (HOV_startUpImage#0);
	private _accumulatedText = "";
	private _offset = -HOV_BOOT_OFFSET * safeZoneH;
	private _textPos = [-5.40912e-007 * safeZoneW,0 * safeZoneH,0.984844 * safeZoneW,1.946 * safeZoneH];
	private _textScale = safeZoneH / 1.81818;
	private _letterDelay = 0.0001;
	private _structuredText = "<t align='left'" + format [" size='%1'>",_textScale] + "%1</t>";
	
	private _color1R = HOV_INTERIOR_OVERLAY_COLOR select 0;
	private _color1G = HOV_INTERIOR_OVERLAY_COLOR select 1;
	private _color1B = HOV_INTERIOR_OVERLAY_COLOR select 2;
	private _color1A = HOV_INTERIOR_OVERLAY_COLOR select 3;
	private _removeAlpha = _color1A / 10;

	private _startImage = "\z\T17\addons\functions\SCRAMBLEHUD\textures\T17_StartUp_normal";
	private _startImageGlitched = "\z\T17\addons\functions\SCRAMBLEHUD\textures\T17_StartUp_glitched";
	private _effectColor = [_color1R,_color1G,_color1B,_color1A];
	_textField ctrlSetTextColor HOV_INTERIOR_OVERLAY_COLOR;
	(HOV_visorEffect#0) ctrlSetTextColor [1,1,1,0.3];

	_iterations = 0;
	_indicatorLine = 28;
	_auspexLine = 39;

	playSound "hov_typing_1";
	_startUpImage ctrlSetText _startImage;
	_startUpImage ctrlSetTextColor _effectColor;
	sleep 1;
	playSound "hov_glitch";
	_startUpImage ctrlSetText _startImageGlitched;
	sleep 0.5;
	_startUpImage ctrlSetText _startImage;
	sleep 0.3;
	playSound "hov_glitch_short";
	_startUpImage ctrlSetText _startImageGlitched;
	sleep 0.2;
	_startUpImage ctrlSetText _startImage;
	sleep 1;
	for "_i" from 0 to 9 do {
		_effectColor set[3,(_effectColor select 3) - _removeAlpha];
		if (HOV_hasHelmet && HOV_firstPersonCheck) then {
			_startUpImage ctrlSetTextColor _effectColor;
		} else {
			_startUpImage ctrlSetTextColor [0,0,0,0];
		};
		sleep 0.1;
	};
	_startUpImage ctrlSetTextColor [0,0,0,0];
	//};
	
	sleep 0.5;

	_textField ctrlSetPosition _textPos;
	_textField ctrlCommit 0;
	{
		scopeName "textLoop";
		if (!HOV_hasHelmet || !(player getVariable ["HOV_hudInitiated",false])) exitWith {
			breakOut "textLoop";
		};

		private _string1 = [format [(_x select 0), (_x select 4)]] call HOV_fnc_splitTypeText;
		private _string2 = [format [(_x select 2), (_x select 5)]] call HOV_fnc_splitTypeText;
	
		{
			_accumulatedText = _accumulatedText + _x;
			_textField ctrlSetStructuredText parseText format [_structuredText, _accumulatedText];
			sleep _letterDelay;
		} forEach _string1;

		playSound "hov_typing_1";
		sleep (_x select 1);

		{
			_accumulatedText = _accumulatedText + _x;
			_textField ctrlSetStructuredText parseText format [_structuredText, _accumulatedText];
			sleep _letterDelay;
		} forEach _string2;

		_accumulatedText = _accumulatedText + "<br/>";
		_textField ctrlSetStructuredText parseText format [_structuredText, _accumulatedText];
		playSound "hov_typing_1";
		sleep (_x select 3);

		if (_iterations > 15) then {
			_textPos set [1, (_textPos select 1) + _offset];
			_textField ctrlSetPosition _textPos;
			_textField ctrlCommit 0;
		};

		if (_iterations == _indicatorLine) then {
			sleep (_x select 1);
			
			[] spawn {
				_hudEffect = ppEffectCreate ["ColorCorrections",2593]; 
				_hudEffect ppEffectForceInNVG true; 
				_hudEffect ppEffectEnable true; 
				_hudEffect ppEffectAdjust [0,1,0,HOV_INTERIOR_OVERLAY_COLOR,[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]]; 
				_hudEffect ppEffectCommit 0.3;
				playSound "Simulation_Restart";

				private _colorR = HOV_INTERIOR_OVERLAY_COLOR select 0;
				private _colorG = HOV_INTERIOR_OVERLAY_COLOR select 1;
				private _colorB = HOV_INTERIOR_OVERLAY_COLOR select 2;
				private _colorA = 0;
				private _maxAlpha = HOV_INTERIOR_OVERLAY_COLOR select 3;

				private _effectColor = [_colorR,_colorG,_colorB,_colorA];
				(HOV_interiorOverlay#0) ctrlSetTextColor _effectColor;
				while {((_effectColor select 3) < _maxAlpha)} do {
					
					_effectColor set[3,(_effectColor select 3) + 0.1];
					if (HOV_hasHelmet && HOV_firstPersonCheck) then {
						(HOV_interiorOverlay#0) ctrlSetTextColor _effectColor;
					} else {
						(HOV_interiorOverlay#0) ctrlSetTextColor [0,0,0,0];
					};
					sleep 0.1;
				};
				// systemChat 'done!';
				if (HOV_hasHelmet && HOV_firstPersonCheck) then {
					(HOV_interiorOverlay#0) ctrlSetTextColor HOV_INTERIOR_OVERLAY_COLOR;
				} else {
					(HOV_interiorOverlay#0) ctrlSetTextColor [0,0,0,0];
				};
				player setVariable ["HOV_HUD_ACTIVE", true, true];
				ppEffectDestroy _hudEffect;
			};
		};

		if (_iterations == _auspexLine) then {
			//sleep (_x select 1);
			[] spawn {
				_targetingEffect = ppEffectCreate ["ColorCorrections",2593]; 
				_targetingEffect ppEffectForceInNVG true; 
				_targetingEffect ppEffectEnable true; 
				_targetingEffect ppEffectAdjust [0,1,0,[0.105,0.105,0.105,0.5],[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]]; 
				_targetingEffect ppEffectCommit 0.3;
				playSound HOV_targetingSystemSoundOn;
				sleep 0.1;
				player setVariable ["HOV_TARGETING_ALLOWED", true];
				HOV_showIcons = true;
				call HOV_fnc_addTargetingEventhandler;
				sleep 0.5;
				ppEffectDestroy _targetingEffect;
			};
		};

		_iterations = _iterations + 1;
	} forEach _bootupText;

	_accumulatedText = "";
	_textField ctrlSetStructuredText parseText "";

	_textField ctrlSetPosition [-5.40912e-007 * safeZoneW,0 * safeZoneH,0.984844 * safeZoneW,1.946 * safeZoneH];
	_textField ctrlCommit 0;

	if (!HOV_hasHelmet || !(player getVariable ["HOV_hudInitiated", false])) exitWith {
		call HOV_fnc_clearHud;
	};
	
	HOV_systemMessageAllowed = true;
	[] spawn HOV_fnc_SystemMessageLoop;

};

HOV_fnc_addHudEventhandler = {
  if (missionNamespace getVariable ['HOV_eventHandlerAdded', false]) exitWith {};

	["HOV_fnc_addHudEventhandler started for: %1", name player] call HOV_fnc_DebugMessage;

  HOV_eventHandlerAdded = true;
  HOV_notMovingTimer = 0;

  ["HOV_MOVING_HUD", "onEachFrame",{
 
    private _cameraview = getCameraViewDirection player; 
    private _overlay = (HOV_hudOverlay#0); 
    private _overlayColor = (HOV_hudOverlayColor#0); 
    private _speed = abs(speed player) / 40; 
    
    private _newViewAngle = (_cameraview select 0) atan2 (_cameraview select 1); 
    _newViewAngle = (_newViewAngle + 360) % 360; 
    
    private _viewAngleDifference = abs(oldViewAngle - _newViewAngle);
    if (_viewAngleDifference > 0.02 && _viewAngleDifference < 100 && _speed <= 12) then { 
      private _angleDelta = _newViewAngle - oldViewAngle; 
      if (_angleDelta > 180) then {_angleDelta = _angleDelta - 360}; 
      if (_angleDelta < -180) then {_angleDelta = _angleDelta + 360}; 
      
      private _angleChange = _angleDelta / 5; 
      
      if (_angleChange > 0) then {
        if (hudAngle - _angleChange >= -25) then {
            hudAngle = hudAngle - _angleChange;
        };
      } else {
          if (hudAngle - _angleChange <= 25) then {
              hudAngle = hudAngle - _angleChange;
          };
      };
      HOV_notMovingTimer = 0;
    } else {
      HOV_notMovingTimer = HOV_notMovingTimer + diag_deltaTime;
      if (HOV_notMovingTimer >= 0.5) then {
          private _angleChange = hudAngle / 50;
          if (abs(_angleChange) < 0.0001) then {
              hudAngle = 0;
          } else {
              hudAngle = hudAngle - (2 * _angleChange * HOV_notMovingTimer);
          };
      };
    };

    if (speed player != 0 && hudAngle != 0) then {
        private _angleChange = _speed;
        if (hudAngle > 0) then {
            hudAngle = hudAngle - _angleChange;
        };
        if (hudAngle < 0) then {
            hudAngle = hudAngle + _angleChange;
        };
    };
    
    oldViewAngle = _newViewAngle; 
    
    private _hudX = -0.1259 * safeZoneW + safeZoneX + abs(safeZoneX) * hudAngle / 80; 
    private _hudY = -0.61 * safeZoneH + safeZoneY + (_cameraview select 2) / 5; 
    private _hudW = 1.25 * safeZoneW; 
    private _hudH = 2.18 * safeZoneH; 
    
    private _hudPosition = [_hudX, _hudY, _hudW, _hudH]; 
    
    _overlay ctrlSetPosition _hudPosition; 
    _overlayColor ctrlSetPosition _hudPosition; 
    
    if (player getVariable "HOV_headArmor" <= 0) then { 
      _overlay ctrlSetText HOV_hudOverlayBrokenTexture; 
      _overlayColor ctrlSetText HOV_hudOverlayBrokenTexture; 
    } else { 
      _overlay ctrlSetText HOV_hudOverlayTexture; 
      _overlayColor ctrlSetText HOV_hudOverlayTexture; 
    }; 
    
    _overlay ctrlCommit 0; 
    _overlayColor ctrlCommit 0;
  }] call BIS_fnc_addStackedEventHandler;
};

HOV_throttleTime = 0.3;

HOV_nearUnitsHandler = {
	private _filteredUnits = [];
  private _nearUnits = [];
	if !(player getVariable ["HOV_TierBased_AuspexRange", 0] <= 0) then {
    _nearUnits = nearestObjects [player, [], HOV_threatRange, true]; 
  };
   
  HOV_nearUnits = _nearUnits select {
    private _unitBlocked = lineIntersects [eyePos player, eyePos _x, player, _x] || terrainIntersectASL [eyePos player, eyePos _x];
    private _Cloaked = ((_x getVariable ["PHEN_SpaceMarineAbilities_isCamoCloaked", false]) || (_x getVariable ["EQPLUS_isCloaked", false]));
    private _Blacklisted = ((typeOf _x) in HOV_AUSPEX_BLACKLIST);
    private _isHidden = (isObjectHidden _x);
    private _isZeus = (!isNull (getAssignedCuratorLogic _x));
    alive _x && vehicle _x != vehicle player && !_unitBlocked && !_Cloaked && !_Blacklisted && !_isHidden && !_isZeus;
  };
};

HOV_fnc_addTargetingEventhandler = {
  if (HOV_targetingHandlerAdded) exitWith {};
  HOV_targetingHandlerAdded = true;
  
	["HOV_fnc_addTargetingEventhandler started for: %1", name player] call HOV_fnc_DebugMessage;

  HOV_nearUnitsHandlerHandle = [] spawn {
    while {HOV_targetingHandlerAdded} do {
      while {HOV_showIcons} do {
        HOV_nearUnitsHandler call HOV_nearUnitsHandler;
        sleep HOV_throttleTime;
      };
      sleep 1;
    };
  };
 
  ["HOV_TARGETING_HUD", "onEachFrame",{
    if (isNull(findDisplay 312)) then {
      {
        private _unit = _x;
        private _distance = positionCameraToWorld [0,0,0] distance _unit;
        private _icon = "";
        private _size = 0;
        private _color = [0,0,0,0];
        private _sideUnit = side _unit;
        private _sidePlayer = side player;
        private _hostileCheck = _sidePlayer getFriend _sideUnit;
        private _fov = getObjectFOV vehicle player;
        private _pos = [0,0,0];

        private _sizeDivisor = (tan (_fov / 2)) * _distance;
        if (_sizeDivisor <= 0) then {
          _sizeDivisor = 1e10;
        };

        if (_unit getVariable ["T17_isVisualCognitoHazard", false]) then {
        	_pos = _unit modelToWorldVisual (_unit selectionPosition "spine3");
			_color = [0, 0, 0, 1]; 
        	_icon = "\z\T17\addons\functions\SCRAMBLEHUD\textures\REDACTED.paa";
            _size = (HOV_HUD_HUMAN_SIZE / _sizeDivisor) max 0.5;
        };
        // anything that hit none of the type branches has no icon, drawing it just puts a blank marker at [0,0,0]
        if (_icon isNotEqualTo "") then {
          drawIcon3D [_icon,_color,_pos,_size,_size,0,"",0,0.04,"RobotoCondensed","center",false];
        };
      } forEach HOV_nearUnits;
    };
  }] call BIS_fnc_addStackedEventHandler;
};

HOV_fnc_removeHudEventhandler = {
  if (!HOV_eventHandlerAdded) exitWith {};
  HOV_eventHandlerAdded = false;

	["HOV_fnc_addTargetingEventhandler started for: %1", name player] call HOV_fnc_DebugMessage;

  	(HOV_hudOverlay#0) ctrlSetTextColor [0,0,0,0];
	(HOV_hudOverlayColor#0) ctrlSetTextColor [0,0,0,0];
  ["HOV_MOVING_HUD", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

HOV_fnc_removeTargetingEventhandler = {
  if (!HOV_targetingHandlerAdded) exitWith {
  };
  HOV_targetingHandlerAdded = false;

	["HOV_fnc_removeTargetingEventhandler started for: %1", name player] call HOV_fnc_DebugMessage;
  
  ["HOV_TARGETING_HUD", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

HOV_fnc_hudInit = {

	call HOV_fnc_getHelmetOverlay;

	"HOV_OVERLAY_LAYER" cutRsc ["HOV_OVERLAY_BASE", "PLAIN", -1, false];
	"HOV_HUD_BOOTUP" cutRsc ["HOV_HUD_BOOTUP", "PLAIN", -1, false];
	"HOV_INDICATOR_LAYER" cutRsc ["HOV_INDICATOR_BASE", "PLAIN", -1, false];
	with uiNamespace do {
		_displayHelmet = uiNamespace getVariable "HOV_OVERLAY_BASE";
		_displayMessage = uiNamespace getVariable "HOV_HUD_BOOTUP";
		_displayHUD = uiNamespace getVariable "HOV_INDICATOR_BASE";

		HOV_hudOverlay = _displayHelmet ctrlCreate ["RscPicture", 28636];
		HOV_hudOverlay ctrlCommit 0;
		HOV_hudOverlayColor = _displayHelmet ctrlCreate ["RscPicture", 28637];
		HOV_hudOverlayColor ctrlCommit 0;

		HOV_bootUpControlGroup = _displayMessage displayCtrl 110863;
		HOV_bootUpTextField = _displayMessage displayCtrl 10863;

		

		HOV_startUpImage = _displayMessage ctrlCreate ["RscPicture", 10864];
		HOV_interiorOverlay = _displayHelmet ctrlCreate ["RscPicture", 27637];

	};
	
	HOV_hudOverlay = [uiNamespace getVariable "HOV_hudOverlay"];
	HOV_hudOverlayColor = [uiNamespace getVariable "HOV_hudOverlayColor"];
	HOV_helmetOverlayShown = true;

	HOV_startUpImage = [uiNamespace getVariable "HOV_startUpImage"];
	HOV_bootUpControlGroup = [uiNamespace getVariable "HOV_bootUpControlGroup"];
	HOV_bootUpTextField = [uiNamespace getVariable "HOV_bootUpTextField"];

	HOV_interiorOverlay = [uiNamespace getVariable "HOV_interiorOverlay"];

	HOV_visorEffect = [uiNamespace getVariable "HOV_visorEffect"];

	(HOV_startUpImage#0) ctrlSetPosition [safeZoneX,safeZoneY,safeZoneW,safeZoneH];
	
	(HOV_startUpImage#0) ctrlSetText HOV_HUD_START_IMAGE;
	(HOV_startUpImage#0) ctrlSetTextColor [0,0,0,0];
	(HOV_startUpImage#0) ctrlCommit 0;


	(HOV_interiorOverlay#0) ctrlSetPosition [safeZoneX,safeZoneY,safeZoneW,safeZoneH];
	(HOV_interiorOverlay#0) ctrlSetText HOV_TEXTURE_INTERIOR_OVERLAY;
	(HOV_interiorOverlay#0) ctrlSetTextColor [0,0,0,0];
	(HOV_interiorOverlay#0) ctrlCommit 0;

	(HOV_visorEffect#0) ctrlSetPosition [safeZoneX,safeZoneY,safeZoneW,safeZoneH];
	(HOV_visorEffect#0) ctrlSetText HOV_HUD_VISOR_EFFECT;
	(HOV_visorEffect#0) ctrlSetTextColor [0,0,0,0];
	(HOV_visorEffect#0) ctrlCommit 0;

	call HOV_fnc_addHudEventhandler;
};

HOV_fnc_system = {
		
		//HUD OVERLAY

	private _hudActive = player getVariable ["HOV_HUD_ACTIVE",false];
	private _hudCheck = HOV_helmetOverlayShown;

	if (_hudActive) then {
		if (HOV_hasHelmet && !(_hudCheck) && missionNamespace getVariable "HOV_SHOW_HUD_OVERLAY" && HOV_firstPersonCheck) then {
			player setVariable ["HOV_HUD_ALLOWED", true];
			// (HOV_hudOverlay#0) ctrlSetTextColor HOV_HUD_COLOR;
			HOV_helmetOverlayShown = true;
			(HOV_interiorOverlay#0) ctrlSetTextColor [0.329, 0, 0.722, .8];
			(HOV_visorEffect#0) ctrlSetTextColor [1,1,1,0.3];

		
			call HOV_fnc_addHudEventhandler;
			call HOV_fnc_addTargetingEventhandler;
		};
		if ((!(missionNamespace getVariable "HOV_SHOW_HUD_OVERLAY") && (_hudCheck)) || (HOV_hasHelmet && _hudCheck && !HOV_firstPersonCheck) || (!(isNull findDisplay 49) || !(isNull findDisplay 312))) then {
			HOV_helmetOverlayShown = false;
			call HOV_fnc_removeHudEventhandler;

			(HOV_hudOverlay#0) ctrlSetTextColor [0,0,0,0];
			(HOV_interiorOverlay#0) ctrlSetTextColor [0,0,0,0];
			(HOV_visorEffect#0) ctrlSetTextColor [0,0,0,0];
		};
	};

	if (!(HOV_hasHelmet) && _hudActive) then {
		HOV_helmetOverlayShown = false;
		call HOV_fnc_clearHud;
		(HOV_hudOverlay#0) ctrlSetTextColor [0,0,0,0];
		//systemchat "helmet";
	};

	
	sleep 0.1;
	
	["Exiting HOV_fnc_system loop for: %1", name player] call HOV_fnc_DebugMessage;

	player setVariable ["HOV_suitActive",false,true];
	player setVariable ["HOV_active_mode", "none", true];
	player setUnitRecoilCoefficient  1;
	player setCustomAimCoef 1;
	
	player setVariable ["HOV_HUD_ACTIVE", false, true];
	player setVariable ["HOV_HUD_ALLOWED", false];
	player setVariable ["HOV_hudInitiated", false, true];
	player setVariable ["HOV_TARGETING_ALLOWED", false];

	HOV_systemMessageAllowed = false;
	HOV_threatRange = (player getVariable ["HOV_TierBased_AuspexRange", 5000]);
	HOV_nearUnits = [];

	call HOV_fnc_clearHud;

	setAperture -1;

	"HOV_OVERLAY_LAYER" cutText ["","PLAIN", 1, false];
	"HOV_HUD_BOOTUP" cutText ["","PLAIN", 1, false];
};

HOV_fnc_parseText = {
	if (!HOV_systemMessageAllowed) exitWith {};
	private _textScale = safeZoneH / 1.81818;
	private _structuredText = "<t align='left'" + format [" size='%1'>",_textScale] + "%1</t>";
	private _textToShow = "";
	if (HOV_systemMessages isEqualTo []) exitWith {
		(HOV_bootUpTextField#0) ctrlSetStructuredText parseText format [_structuredText, _textToShow];
	};
    {
        _textToShow = _textToShow + (_x select 0) + "<br/>";
    } forEach HOV_systemMessages;

	playSound "hov_typing_1";
    (HOV_bootUpTextField#0) ctrlSetStructuredText parseText format [_structuredText, _textToShow];
};

HOV_fnc_addSystemMessage = {
	params ["_text","_messageID","_lifeTime"];

	if (!HOV_SYSTEM_MESSAGES || !HOV_systemMessageAllowed || !HOV_hasHelmet) exitWith {};

	if (_messageID == "") then {
		_messageID = "ID_NOT_FOUND:" + str time;
	};

	private _foundIndex = -1;
	{
		if (_messageID in _x) then {
			_foundIndex = _forEachIndex;
			breakOut "";
		};
	} forEach HOV_systemMessages;

	if (_foundIndex > -1) exitWith {
		HOV_systemMessages set [_foundIndex,[_text, _messageID, _lifeTime, time]];
		call HOV_fnc_parseText;
	};

	HOV_systemMessages pushBack [_text, _messageID, _lifeTime, time];
	
	if (count HOV_systemMessages > 15) then {
		HOV_systemMessages deleteAt 0;
	};

	call HOV_fnc_parseText;
};

HOV_fnc_checkAndDeleteOldestLine = {
	
    _lastLineTime = HOV_systemMessages select 0 select 3;
	_lastLineLifeTime = HOV_systemMessages select 0 select 2;
   
   
    if (time - _lastLineTime >= _lastLineLifeTime) then {
        HOV_systemMessages deleteAt 0;
        
        call HOV_fnc_parseText;
    };
};

HOV_fnc_SystemMessageLoop = {
	waitUntil {sleep 1; !(isNil 'HOV_systemMessageAllowed')};

	while {HOV_systemMessageAllowed && HOV_SYSTEM_MESSAGES} do  {
		while {HOV_systemMessages isEqualTo []} do {
			call HOV_fnc_checkAndDeleteOldestLine;
			
			sleep 1;
		};
		sleep 1;
	};
};

