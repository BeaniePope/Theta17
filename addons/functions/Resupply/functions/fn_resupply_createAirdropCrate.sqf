params ["_airDropPos", "_itemClass", "_itemCount", "_containerClassName", "_aircraft"]; 

//spawn parachute and attach crate to it
private _parachute = createVehicle ["I_Parachute_02_F", _airDropPos,[],0,"CAN_COLLIDE"];
private _supplyBox = createVehicle [_containerClassName, _airDropPos,[],0,"CAN_COLLIDE"];

    if (missionNamespace getVariable ["ace_main", true]) then {
        [_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
        [_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
    };

if (typeName _aircraft == "OBJECT") then {
    private _aircraftHeading = _parachute getDir _aircraft;
    _parachute setDir _aircraftHeading;
    _parachute setVelocityModelSpace [0,15,-5]; //make it fall in aircraft direction until chute opens
} else {
    _parachute setDir (round random 360);
    _parachute setVelocityModelSpace [0,0.1,-5]; //make it fall until chute opens
};
_supplyBox attachTo [_parachute,[0,0,0]];


{
	[_x, [[_supplyBox, _parachute], false]] remoteExec ["addCuratorEditableObjects", 0];
} forEach allCurators;

clearItemCargoGlobal _supplyBox;
clearMagazineCargoGlobal _supplyBox;
clearWeaponCargoGlobal _supplyBox; 
clearBackpackCargoGlobal _supplyBox; 

//addItemCargoGlobal works with weapons, mags, and items
{_supplyBox addItemCargoGlobal [_x, _itemCount select _forEachIndex]} forEach _itemClass;

//spawn smoke/chemlight signal and renew smoke until timelimit is over
private _smokeSpawner = [_supplyBox, 120, _containerClassName] spawn {
	params ["_supplyBox", "_maxTime", "_containerClassName"];
	private _startTime = time;

	private _chemlightOffset = [];
	private _chemlightDir = 0;
	private _smokeOffset = [];
	switch (_containerClassName) do {
		case "ACE_Box_Ammo": {
			_chemlightOffset = [0,0,0.3];
			_chemlightDir = 180;
			_smokeOffset = [0,0,0]; 
		};
        case "Box_NATO_Grenades_F": {
			_chemlightOffset = [0,0,0.3];
			_chemlightDir = 180;
			_smokeOffset = [0,0,0]; 
		};
		case "Box_NATO_AmmoOrd_F": {
			_chemlightOffset = [0,0,0.3];
			_chemlightDir = 180;
			_smokeOffset = [0,0,0]; 
		};
		case "ACE_medicalSupplyCrate": {
			_chemlightOffset = [0,0,0.4];
			_chemlightDir = 120;
			_smokeOffset = [0,0,0]; 

            [_supplyBox, 1000] remoteExec ["ace_rearm_fnc_makeSource", 2];
		};
		case "Box_NATO_AmmoVeh_F": {
			_smokeOffset = [0,0,0.71];
            [_supplyBox, 1000] remoteExec ["ace_rearm_fnc_makeSource", 2];
		};
		case "CargoNet_01_barrels_F": { 
			_chemlightOffset = [0,0,0.4];
			_chemlightDir = 120;
			_smokeOffset = [0,0,-0.3]; 
            [_supplyBox, 1000, [[0,0,-0.5]]] remoteExec ["ace_refuel_fnc_makeSource", 2];
            [_supplyBox, true, [0,1.5,0], 0, true] remoteExec ["ace_dragging_fnc_setDraggable", 0];
		};
		case "FlexibleTank_01_forest_F": {  
			_chemlightOffset = [0.15,0,0.5];
			_chemlightDir = 120;
			_smokeOffset = [-0.15,0,0.5]; 
            [_supplyBox, 200, [[0,0,-0.5]]] remoteExec ["ace_refuel_fnc_makeSource", 2];
            [_supplyBox, true, [0,1.5,0], 0, true] remoteExec ["ace_dragging_fnc_setDraggable", 0];
		};
		default { 
			_chemlightOffset = [0,0,0];
			_chemlightDir = 0;
			hint "CES_fnc_createAirdropCrate error: unknown Box -> Chemlights misaligned";
		};
	};

    switch (true) do {
        case (_containerClassName == "Box_NATO_AmmoVeh_F"): { 
            _chemlightOffset1 = [0.7,0.7,0.7]; 
            _chemlightOffset2 = [0.7,-0.7,0.7]; 
            _chemlightOffset3 = [-0.71,0.71,0.7]; 
            _chemlightOffset4 = [-0.71,-0.71,0.7]; 
            
            private _chemlight1 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight1 attachTo [_supplyBox, _chemlightOffset1];
            _chemlight1 setVectorDirAndUp [[-1,-1,1], [-1,0,1]]; 

            private _chemlight2 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight2 attachTo [_supplyBox, _chemlightOffset2];
            _chemlight2 setVectorDirAndUp [[-1,1,1], [-1,0,1]]; 

            private _chemlight3 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight3 attachTo [_supplyBox, _chemlightOffset3];
            _chemlight3 setVectorDirAndUp [[1,-1,1], [-1,0,1]]; 

            private _chemlight4 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight4 attachTo [_supplyBox, _chemlightOffset4];
            _chemlight4 setVectorDirAndUp [[1,1,1], [-1,0,1]]; 
            
            sleep 15;
            private _supplySmoke = "SmokeShellBlue" createVehicle (position _supplyBox);
            _supplySmoke attachTo [_supplyBox, _smokeOffset];
            _supplySmoke setVectorDirAndUp [[0,1,0], [1,0,0]];
            
            while {(time - _startTime) <= _maxTime} do {
                sleep 1;

                if (isNull _supplySmoke) then {
                _supplySmoke = "SmokeShellBlue" createVehicle (position _supplyBox);
                _supplySmoke attachTo [_supplyBox, _smokeOffset];
                _supplySmoke setVectorDirAndUp [[0,1,0], [1,0,0]];
                };

                if (isNull _chemlight1) then {
                _chemlight1 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight1 attachTo [_supplyBox, _chemlightOffset1];
                _chemlight1 setVectorDirAndUp [[-1,-1,1], [-1,0,1]]; 
                };

                if (isNull _chemlight2) then {
                _chemlight2 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight2 attachTo [_supplyBox, _chemlightOffset2];
                _chemlight2 setVectorDirAndUp [[-1,1,1], [-1,0,1]]; 
                };

                if (isNull _chemlight3) then {
                _chemlight3 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight3 attachTo [_supplyBox, _chemlightOffset3];
                _chemlight3 setVectorDirAndUp [[1,-1,1], [-1,0,1]]; 
                };

                if (isNull _chemlight4) then {
                _chemlight4 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight4 attachTo [_supplyBox, _chemlightOffset4];
                _chemlight4 setVectorDirAndUp [[1,1,1], [-1,0,1]]; 
                };
            };
        };
        case (_containerClassName == "CargoNet_01_barrels_F"): {
            _chemlightOffset1 = [0.6,0.6,-0.32]; 
            _chemlightOffset2 = [0.6,-0.6,-0.32]; 
            _chemlightOffset3 = [-0.6,0.6,-0.32]; 
            _chemlightOffset4 = [-0.6,-0.6,-0.32]; 
            
            private _chemlight1 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight1 attachTo [_supplyBox, _chemlightOffset1];
            _chemlight1 setDir _chemlightDir + 90;

            private _chemlight2 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight2 attachTo [_supplyBox, _chemlightOffset2];
            _chemlight2 setDir _chemlightDir + 180;

            private _chemlight3 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight3 attachTo [_supplyBox, _chemlightOffset3];
            _chemlight3 setDir _chemlightDir + 0;

            private _chemlight4 = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight4 attachTo [_supplyBox, _chemlightOffset4];
            _chemlight4 setDir _chemlightDir - 90;
            
            sleep 15;
            private _supplySmoke = "SmokeShellBlue" createVehicle (position _supplyBox);
            _supplySmoke attachTo [_supplyBox, _smokeOffset];
            _supplySmoke setVectorDirAndUp [[0,1,0], [1,0,0]]; 
            
            while {(time - _startTime) <= _maxTime} do {
                sleep 1; 

                if (isNull _supplySmoke) then {
                _supplySmoke = "SmokeShellBlue" createVehicle (position _supplyBox);
                _supplySmoke attachTo [_supplyBox, _smokeOffset];
                _supplySmoke setVectorDirAndUp [[0,1,0], [1,0,0]];
                };

                if (isNull _chemlight1) then {
                _chemlight1 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight1 attachTo [_supplyBox, _chemlightOffset1];
                _chemlight1 setDir _chemlightDir + 90;
                };

                if (isNull _chemlight2) then {
                _chemlight2 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight2 attachTo [_supplyBox, _chemlightOffset2];
                _chemlight2 setDir _chemlightDir + 180;
                };

                if (isNull _chemlight3) then {
                _chemlight3 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight3 attachTo [_supplyBox, _chemlightOffset3];
                _chemlight3 setDir _chemlightDir + 0;
                };

                if (isNull _chemlight4) then {
                _chemlight4 = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight4 attachTo [_supplyBox, _chemlightOffset4];
                _chemlight4 setDir _chemlightDir -90;
                };
            };
        };
        default { 
            private _chemlight = "Chemlight_blue" createVehicle (position _supplyBox);
            _chemlight attachTo [_supplyBox, _chemlightOffset];
            _chemlight setDir _chemlightDir;

            sleep 15;
            private _supplySmoke = "SmokeShellBlue" createVehicle (position _supplyBox);
            _supplySmoke attachTo [_supplyBox, _smokeOffset];
            _supplySmoke setVectorDirAndUp [[0,1,0], [1,0,0]];

            while {(time - _startTime) <= _maxTime} do {
                if (isNull _supplySmoke) then {
                _supplySmoke = "SmokeShellBlue" createVehicle (position _supplyBox);
                _supplySmoke attachTo [_supplyBox, _smokeOffset];
                sleep 1;
                };

                if (isNull _chemlight) then {
                _chemlight = "Chemlight_blue" createVehicle (position _supplyBox);
                _chemlight attachTo [_supplyBox, _chemlightOffset];
                _chemlight setDir _chemlightDir;
                };
            };
        };
    };
};


private _detachCrate = [_supplyBox, _parachute] spawn {
	params ["_supplyBox", "_parachute"];
    sleep 10;
    private _myVelocity = 10;
	while {((getPos _supplyBox select 2) > 1) && (_myVelocity > 1)} do {
		_myVelocity =  abs (velocity _supplyBox select 2); //descent velocity
        sleep 0.25;
	};
	detach _supplyBox;
    sleep 2;
    if (_myVelocity < 1) then { //delete parachute incase of getting stuck 
        deleteVehicle _parachute;
    };
};

private _compileSuccessFul = true;
_compileSuccessFul
