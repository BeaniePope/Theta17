params["_position", "_objectStr"];
hint "imworkingbtw";
systemChat "imWorkingBtw";

sleep 15;

playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\orbitalDrop.wss", player, false, _position];
systemChat "whistle";

sleep 2;

systemChat "boom";
playSound3D ["\z\t17\addons\functions\OrbitalDrop\sounds\orbitalDropImpact.wss", player, false, _position];

// stole the effects from blastcore
[_position] spawn {
	params ["_particlePos"];

	_PS = "#particlesource" createVehicleLocal _particlePos;
	
	_PS setParticleClass "FlashSmokeHuge";
	
	_PS  setDropInterval 0.001 ; // 粒子掉落间隔时间
	
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

// Define variations
private _alphaVar = random 0.1;
private _lifeTimeVar = random 0.05;
private _sizeVar = random 0.5;

drop [
		["\z\t17\addons\functions\OrbitalDrop\models\Wave.p3d", 1, 0, 1, 0],
		// animationName, type, timerPeriod, lifeTime
		"", "Billboard", 1, 0.075 + _lifeTimeVar,
		// position relative to referenceObject
		[0,0,0],
		// velocity
		[0,0,0],
		// rotation, weight, volume, rubbing, size
		0, 10, 7.9000001, 0.1, [1 + _sizeVar, 2 + _sizeVar, 5 + _sizeVar, 8 + _sizeVar, 12 + _sizeVar, 17 + _sizeVar],
		// colors
		[
			[1,1, 0.85, (0.03 + _alphaVar) * _alphaMultiplier],
			[1,1, 0.85, (0.08 + _alphaVar) * _alphaMultiplier],
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

private _newPos = (_position # 3) - 0.2;

private _object = _objectStr createVehicle _position;

private _vec = vectorDir _object;

private _newVec = _vec vectorAdd [random 5, random 5, random 3];

_object setVectorDir _newVec;