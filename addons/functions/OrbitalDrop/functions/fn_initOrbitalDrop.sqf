params["_position", "_objectStr", "_arsenalType", "_object"];
systemChat "imWorkingBtw";

sleep 10;
private _reEntryPosition = getPosATL _object;
private _reEntryZElevated = ((_reEntryPosition # 2) + 600);
_reEntryPosition set [2, _reEntryZElevated];
playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\orbitalDrop.wss", _object, false, _reEntryPosition, 5];
private _movingOrbital = createVehicle ["T17_Crate_Physx", _reEntryPosition, [], 0, "CAN_COLLIDE"];
_movingOrbital setVelocity [0, 0, -250];
systemChat "whistle";

sleep 2;

systemChat "boom";
playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\orbitalDropImpact.wss", _object, false, _position, 5];
deleteVehicle _movingOrbital;

sleep 1;

// stole the effects from blastcore TT 
[_position] spawn {
	params ["_particlePos"];

	_PS =  createVehicleLocal ["#particlesource", _particlePos, [], 0, "CAN_COLLIDE"];
	
	_PS setParticleClass "FlashSmokeHuge";
	
	_PS  setDropInterval 0.001 ; // 粒子掉落间隔时间 (Particle emission interval)
	
	sleep 0.25;
	
	deleteVehicle _PS;
	
};

private _weatherEffect = true;


// Helper object to reference in particle creation.
private _particleSource = createSimpleObject ["Land_HelipadEmpty_F", ATLToASL _position, true];

// If weather effects are enabled, the effect will be affected by air humidity.
private _alphaMultiplier = 1;
if (_weatherEffect) then {
	_alphaMultiplier = (overcast + humidity);
};

// Define variation macros
private _alphaVar = random 0.1;
private _lifeTimeVar = random 0.15;
private _sizeVar = random 0.5;

drop [
		["\z\t17\addons\functions\OrbitalDrop\models\Wave.p3d", 1, 0, 1, 0],
		// animationName, type, timerPeriod, lifeTime
		"", "Billboard", 1, 0.6 + _lifeTimeVar,
		// position relative to referenceObject
		[0,0,0],
		// velocity
		[0,0,0],
		// rotation, weight, volume, rubbing, size
		0, 10, 7.9000001, 0.1, [2 + _sizeVar, 2 + _sizeVar, 2 + _sizeVar, 24 + _sizeVar, 60 + _sizeVar, 105 + _sizeVar, 150 + _sizeVar, 210 + _sizeVar],
		// colors
		[
			[1,1, 0.85, (0.06 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, (0.12 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, (0.02 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, 0]
		],
		// animationPhase
		[1],
		// randomDirectionPeriod, randomDirectionIntensity
		0.2, 0.2,
		// onTimer, beforeDestroy
		"", "",
		// referenceObject
		_particleSource,
		// angle, bounces
		1, false,
		// bounceOnSurface, emissiveColor
		-1, [],
		// vectorDir - CANNOT be [0,0,0]
		[0,1,0]
];

deleteVehicle _particleSource;

[_position] spawn {

	params ["_target_pos"];
	
	_source = createVehicleLocal ["#particlesource", _target_pos, [], 0, "CAN_COLLIDE"];
	_source setParticleParams [
		["\z\t17\addons\functions\OrbitalDrop\models\TT_added_smoke_12.p3d", 7, 0, 49, 0],
		// animationName, type, timerPeriod
		"","Billboard",1,
		// lifeTime
		2.6,
		// position relative to referenceObject
		[0,0,16],
		// velocity
		[0, 0, 0],
		// rotation, weight, volume, rubbing
		0, 0.13, 0.1, 0,
		// size
		[27],
		// colors
		[	
			[0.1,0.1,0.1,1.5],          
			[0,0,0,0]
		],
		// animationPhase
		[0.6, 0.1],
		// randomDirectionPeriod, randomDirectionIntensity
		0, 0,
		// onTimer, beforeDestroy
		"", "",
		// referenceObject
		"",
		// angle, bounces
		0, false,
		// bounceOnSurface, emissiveColor
		-1, [[0,0,0,0]],
		// vectorDir - CANNOT be [0,0,0]
		[0,1,0]
	];
	
	_source setDropInterval 0.01;

	sleep 0.1;

	deleteVehicle _source;

};

[_position] spawn {

	params ["_particlePos"];

	_source = createVehicleLocal ["#particlesource", _particlePos, [], 0, "CAN_COLLIDE"];
	_source setParticleParams [
		["\z\t17\addons\functions\OrbitalDrop\models\TT_added_smoke_01.p3d", 8, 0, 64, 0],
		// animationName, type, timerPeriod
		"","Billboard",1,
		// lifeTime
		6,
		// position relative to referenceObject
		[0, 0, 0],
		// velocity
		[0, 0, 0.1],
		// rotation, weight, volume, rubbing
		100, 0.13, 0.1, 0,
		// size
		[20],
		// colors
		[	
			[0.4,0.4,0.4,1],          
			[0.3,0.3,0.3,0]
		],
		// animationPhase
		[0.3, 0.000000001],
		// randomDirectionPeriod, randomDirectionIntensity
		0, 0,
		// onTimer, beforeDestroy
		"", "",
		// referenceObject
		"",
		// angle, bounces
		0, false,
		// bounceOnSurface, emissiveColor
		-1, [[0,0,0,0]],
		// vectorDir - CANNOT be [0,0,0]
		[0,1,0]
	];

	_source setParticleRandom [
		// lifeTime,
		0, 
		// position,
		[0,0,0],
		// moveVelocity,
		[0,0,0],
		// rotationVelocity,
		100,
		// size,
		0,
		// color,
		[0, 0, 0, 0],
		// directionPeriod,
		0,
		// directionIntensity,
		0,
		//Angle
		360
	];
	
	_source setParticleCircle [10, [0,0,0]]; // [circle radius, velocity]
	
	_source setDropInterval 0.001;

	sleep 0.1;

	deleteVehicle _source;



};

deleteVehicle _object;

private _explosive = createVehicle ["T17_OrbitalDrop_Ammo", _position, [], 0, "CAN_COLLIDE"];

private _crater = createVehicle ["Land_ShellCrater_01_F", _position, [], 0, "CAN_COLLIDE"];

_crater setObjectTextureGlobal [0, surfaceTexture (getPos _crater)];

private _newElevation = (_position # 2) - 0.3;

private _newPosition = _position;

_newPosition set [2, _newElevation];

private _orbitalDropObject =  createVehicle [_objectStr, _newPosition, [], 0, "CAN_COLLIDE"];

private _vec = vectorDir _object;

private _newVec = _vec vectorAdd [random 8, random 8, random 5];

_orbitalDropObject setVectorDir _newVec;
_orbitalDropObject setPosATL _newPosition;

_orbitalDropObject setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenLocked_co.paa"];

deleteVehicle _explosive;
switch (_arsenalType) do
{
	case "Scholar": { 
		_orbitalDropObject addAction [
			"Unlock Crate", 
			{
				params ["_target", "_caller", "_actionId", "_arguments"]; 
				if !([_caller, "SCP_CB_Things_Keycard_C3"] call BIS_fnc_hasItem) exitWith {playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessDenied.wss", _target];};
				playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessAccepted.wss", _target];
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenUnlocked_co.paa"];
				[_target, 'Scholar'] call T17_Utility_fnc_initArsenal;
				_position = getPosATL _target;
				waitUntil {sleep 1; ((_position nearEntities ["Man", 10]) isEqualTo [])};
				[_target, true] call ace_arsenal_fnc_removeBox;
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenLocked_co.paa"];
			}
		]
	};
	case "Cleaners": { 
		_orbitalDropObject addAction [
			"Unlock Crate", 
			{
				params ["_target", "_caller", "_actionId", "_arguments"]; 
				if !([_caller, "SCP_CB_Things_Keycard_C3"] call BIS_fnc_hasItem) exitWith {playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessDenied.wss", _target];};
				playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessAccepted.wss", _target];
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenUnlocked_co.paa"];
				[_target, 'Cleaners'] call T17_Utility_fnc_initArsenal;
				_position = getPosATL _target;
				waitUntil {sleep 1; ((_position nearEntities ["Man", 10]) isEqualTo [])};
				[_target, true] call ace_arsenal_fnc_removeBox;
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenLocked_co.paa"];
			}
		]
	};
	case "Overseer": { 
		_orbitalDropObject addAction [
			"Unlock Crate", 
			{
				params ["_target", "_caller", "_actionId", "_arguments"]; 
				if !([_caller, "SCP_CB_Things_Keycard_C3"] call BIS_fnc_hasItem) exitWith {playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessDenied.wss", _target];};
				playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessAccepted.wss", _target];
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenUnlocked_co.paa"];
				[_target, 'Overseer'] call T17_Utility_fnc_initArsenal;
				_position = getPosATL _target;
				waitUntil {sleep 1; ((_position nearEntities ["Man", 10]) isEqualTo [])};
				[_target, true] call ace_arsenal_fnc_removeBox;
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenLocked_co.paa"];
			}
		]
	};
	case "SERE": { 
		_orbitalDropObject addAction [
			"Unlock Crate", 
			{
				params ["_target", "_caller", "_actionId", "_arguments"]; 
				if !([_caller, "SCP_CB_Things_Keycard_C3"] call BIS_fnc_hasItem) exitWith {playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessDenied.wss", _target];};
				playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\accessAccepted.wss", _target];
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenUnlocked_co.paa"];
				[_target, 'SERE'] call T17_Utility_fnc_initArsenal;
				_position = getPosATL _target;
				waitUntil {sleep 1; ((_position nearEntities ["Man", 10]) isEqualTo [])};
				[_target, true] call ace_arsenal_fnc_removeBox;
				_target setObjectTextureGlobal ["camoScreen", "\z\t17\addons\props\textures\ScreenLocked_co.paa"];
			}
		]
	};
};
