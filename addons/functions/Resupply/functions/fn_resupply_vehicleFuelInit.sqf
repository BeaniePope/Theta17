//Make remotexec setDraggable JIP to have it work for JIP people
["CES Resupply", "Vehicle Fuel Resupply", 
{
	params ["_modulePosASL","_attachedObject"];


	private _onConfirm = { //Actual code for the mod
		private _values = _this select 0; //Returned values from dialog
		_values params ["_size", "_spawnType", "_aircraftType", "_height"];

		private _arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject"];
	
		//kept for ease of use with called scripts and their params
		private _ammoCargo = [[],[]];
		_ammoCargo params ["_itemClass", "_itemCount"]; 




		//if placed on vehicle it will not spawn a box else it will create a box and add it to editable objects
		if (!isNull _attachedObject) then {
			_spawnType = "attached";
			private _notification = [] spawn {
				hint "Attached Object is now vehicle refuel station";
				sleep 3;
				hintSilent "";
			};
		};

		private _containerClassName = "";
		private _fuelAmount = 0;
		switch (true) do {
			case (_size == "car"): { 
				_containerClassName = "FlexibleTank_01_forest_F";
				_fuelAmount = 200; 
			};
			case (_size == "tank"): { 
				_containerClassName = "CargoNet_01_barrels_F";
				_fuelAmount = 1000;
			};
			default { 
				hint "CESresupply error finding fuel resupply size";
			};
		};
		
		private _supplyBox = nil; //defined here otherwise it will be undefined outside the if or switch case
		switch (_spawnType) do {
			case "attached": { 
				_supplyBox = _attachedObject;
				[_supplyBox, _fuelAmount, [[0,0,0]]] remoteExec ["ace_refuel_fnc_makeSource", 2];
				[_supplyBox, true, [0,1.5,0], 0, true] remoteExec ["ace_dragging_fnc_setDraggable", 0];
			};
			case "ground": { 
				_supplyBox = createVehicle [_containerClassName, (ASLToATL _modulePosASL),[],0,"CAN_COLLIDE"];
				
				if (missionNamespace getVariable ["ace_main", true]) then {
					[_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
					[_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
				};
				
				[_supplyBox, _fuelAmount, [[0,0,-0.5]]] remoteExec ["ace_refuel_fnc_makeSource", 2];
				[_supplyBox, true, [0,1.5,0], 0, true] remoteExec ["ace_dragging_fnc_setDraggable", 0];
				{
					[_x, [[_supplyBox], false]] remoteExec ["addCuratorEditableObjects", 0];
				} forEach allCurators;
			};

			case "chute": {
				// modify pos to altitude
				private _airDropPos = ASLToATL _modulePosASL;
				_airDropPos set [2, _height];

				private _myAirdropCrate = [_airDropPos, _itemClass, _itemCount, _containerClassName] call CESaddons_fnc_resupply_createAirdropCrate;
			};

			
			case "aircraft": { 
				private _myAirdrop = [_modulePosASL, _aircraftType, _itemClass, _itemCount, _containerClassName] call CESaddons_fnc_resupply_airdropWithAircraft;
			};

			default {
				hint "CESresupply error finding fuel resupply type";
			};
		};
	};


	_planyes = [];
	{
		if (getText (configFile >> "CfgVehicles" >> _x >> "vehicleClass") == "Air" && (getNumber (configFile >> "CfgVehicles" >> _x >> "scope") == 2)) then {
			(_planyes pushBack _x)
		}
	}forEach ((configFile >> "CfgVehicles") call BIS_fnc_getCfgSubClasses);
	_planyes;
	_planyenames = [];
	{
		if (getText (configFile >> "CfgVehicles" >> _x >> "vehicleClass") == "Air" && (getNumber (configFile >> "CfgVehicles" >> _x >> "scope") == 2)) then {
			(_planyenames pushBack (getText (configFile >> "CfgVehicles" >> _x >> "displayName")))
		}
	}forEach ((configFile >> "CfgVehicles") call BIS_fnc_getCfgSubClasses);
	_planyenames;

	[	//ZEN Dialog Framework - WIP Saves last used configuration of checkboxes etc. - test on dedicated if its the same
		"Vehicle Fuel Resupply (Can also be placed placed on any vehicle or box)", 
		[
			["COMBO",["Resupply size", ""],[["car","tank"], [["Car", "Small fuel tank"], ["Tank", "A palette with 4 barrels"]], 0]],
			["COMBO",["Resupply type", ""],[["ground","chute","aircraft"], [["On ground", "Spawns crate on module position"], ["Airdrop (spawned in)", "Will airdrop crate at given altitude"], ["Airdrop with selected aircraft", "Will spawn selected aircraft to deliver your supply crate"]], 0]],
			["COMBO",["Aircraft type", "Will not take effect if crate is spawned on ground"], [_planyes, _planyenames]],
			["SLIDER",["Airdrop height", "Will not take effect if crate is spawned on ground"],[100, 1000, 200, 0]]//100 to 1000, default 200 and showing 0 decimal
		],
		_onConfirm, //alternatively { code },
		{}, //On Cancel
		[_modulePosASL, _attachedObject] //arguments
	] call zen_dialog_fnc_create;
}, "\CES_Resupply\data\VehicleFuelResupplyIcon.paa"] call zen_custom_modules_fnc_register;
