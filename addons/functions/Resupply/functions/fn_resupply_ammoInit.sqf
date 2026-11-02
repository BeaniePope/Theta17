//functioning ammo crate - can spawn, airdrop or put stuff in vehicle it's placed on with dialog and dynamic amounts
["CES Resupply", "Ammo Resupply", 
{
	params ["_modulePosASL","_attachedObject"];


	private _onConfirm = { //Actual code for the mod
		private _values = _this select 0; //Returned values from dialog
		_values params ["_primaryMagsPerMan", "_underbarrelMagsPerMan", "_handgunMagsPerMan", "_nadesPerMan", "_spawnType", "_aircraftType", "_height", "_removeInventory", "_who"];

		private _arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject"];

		private _primaryMagsPerMan = round _primaryMagsPerMan;
		private _underbarrelMagsPerMan = round _underbarrelMagsPerMan;
		private _handgunMagsPerMan = round _handgunMagsPerMan;
		private _nadesPerMan = round _nadesPerMan;

		private _includedPlayers = []; //defined here because scope
		{
			{
				_includedPlayers pushBackUnique _x; //add players
			} forEach (units _x); //get players from groups
		} forEach (_who select 1); //get groups

		{ 
			_includedPlayers pushBackUnique _x;
		} forEach (_who select 2); //players

		//Has to be changed for mod usage		
		private _ammoCargo = [_includedPlayers, _primaryMagsPerMan, _underbarrelMagsPerMan, _handgunMagsPerMan, _nadesPerMan] call CESaddons_fnc_resupply_getPlayerMags;
		_ammoCargo params ["_itemClass", "_itemCount"]; 




		//if placed on vehicle it will not spawn a box else it will create a box and add it to editable objects
		if (!isNull _attachedObject) then {//WIP make hint to notify that you cannot airdrop attached onjects - use hintC
			_spawnType = "attached";
			private _notification = [] spawn {
				hint "Supplies are spawned in attached vehicle or box";
				sleep 3;
				hintSilent "";
			};
			
		};

		//Different Crate models incase of only grenade supply
		private _containerClassName = "";
		switch (true) do {
			case ((_primaryMagsPerMan == 0) && (_handgunMagsPerMan == 0)): { 
				_containerClassName = "Box_NATO_Grenades_F";
			};
			default { 
				_containerClassName = "ACE_Box_Ammo";
			};
		};
		private _supplyBox = nil; //defined here otherwise it will be undefined outside the if or switch case
		switch (_spawnType) do {
			case "attached": { 
				_supplyBox = _attachedObject;
				if (_removeInventory) then {
					clearItemCargoGlobal _supplyBox;
					clearMagazineCargoGlobal _supplyBox;
					clearWeaponCargoGlobal _supplyBox;
					clearBackpackCargoGlobal _supplyBox; 
				};
				{_supplyBox addMagazineCargoGlobal [_x, _itemCount select _forEachIndex]} forEach _itemClass;
			};
			case "ground": { 
				_supplyBox = createVehicle [_containerClassName, (ASLToATL _modulePosASL),[],0,"CAN_COLLIDE"];

				if (missionNamespace getVariable ["ace_main", true]) then {
					[_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
					[_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
				};

				{
				[_x, [[_supplyBox], false]] remoteExec ["addcuratorEditableObjects", 0];

				} forEach allCurators;
				
				clearItemCargoGlobal _supplyBox;
				clearMagazineCargoGlobal _supplyBox;
				clearWeaponCargoGlobal _supplyBox; 
				clearBackpackCargoGlobal _supplyBox; 
				
				{_supplyBox addMagazineCargoGlobal [_x, _itemCount select _forEachIndex]} forEach _itemClass;
			};

			case "chute": { //needed params - [_modulePosASL, _height, ]
				// modify pos to altitude
				private _airDropPos = ASLToATL _modulePosASL;
				_airDropPos set [2, _height];

				//Has to be changed for mod usage	//maybe dan also be done with execVM	
				private _myAirdropCrate = [_airDropPos, _itemClass, _itemCount, _containerClassName] call CESaddons_fnc_resupply_createAirdropCrate;
			};

			
			case "aircraft": { 
				//Has to be changed for mod usage	//maybe dan also be done with execVM
				private _myAirdrop = [_modulePosASL, _aircraftType, _itemClass, _itemCount, _containerClassName] call CESaddons_fnc_resupply_airdropWithAircraft;
			};

			default {
				hint "CESresupply error finding ammo resupply type";
			};
		};
	};



	_planyes=[];
	{
		if (getText (configFile >> "CfgVehicles" >> _x >> "vehicleClass") == "Air" && (getNumber (configFile >> "CfgVehicles" >> _x >> "scope") == 2)) then {
			(_planyes pushBack _x)
		}
	}forEach ((configFile >> "CfgVehicles") call BIS_fnc_getCfgSubClasses);
	_planyes;
	_planyenames=[];
	{
		if (getText (configFile >> "CfgVehicles" >> _x >> "vehicleClass") == "Air" && (getNumber (configFile >> "CfgVehicles" >> _x >> "scope") == 2)) then {
			(_planyenames pushBack (getText (configFile >> "CfgVehicles" >> _x >> "displayName")))
		}
	}forEach ((configFile >> "CfgVehicles") call BIS_fnc_getCfgSubClasses);
	_planyenames;
	[	//ZEN Dialog Framework - WIP Saves last used configuration of checkboxes etc. - test on dedicated if its the same
		"Ammo Resupply (Can also be placed on any vehicle or box)", 
		[
			["SLIDER",["Primary mags per man", "Amount of magazines every soldier which uses given mag should get"], [0, 15, 4, 0]], //1 to 15, default is 4
			["SLIDER",["Underbarrel mags per man", "Amount of magazines every soldier which uses given mag should get"], [0, 15, 4, 0]], //1 to 15, default is 4
			["SLIDER",["Handgun mags per man", "Amount of magazines every soldier which uses given mag should get"], [0, 15, 2, 0]], //1 to 15, default is 2
			["SLIDER",["Grenades per man", "Amount of grenades of each type every soldier should get"], [0, 10, 3, 0]], //1 to 10, default is 3		
			["COMBO",["Resupply type", ""],[["ground","chute","aircraft"], [["On ground", "Spawns crate on module position"], ["Airdrop (spawned in)", "Will airdrop crate at given altitude"], ["Airdrop with selected aircraft", "Will spawn selected aircraft to deliver your supply crate"]], 0]],
			["COMBO",["Aircraft type", "Will not take effect if crate is spawned on ground"], [_planyes, _planyenames]],
			["SLIDER",["Airdrop height", "Will not take effect if crate is spawned on ground"],[75, 1000, 100, 0]],//75 to 1000, default 100 and showing 0 decimal
			["CHECKBOX",["Remove Vehicle/Box inventory", "For attached Onjects only! By default it will not remove the already existing items in the inventory of vehicles etc."],[false]],
			["OWNERS",["Choose group(s) / player(s) - READ TOOLTIP", "Side has no effect. Selected groups will include members, even if they are unchecked in player section. Additional players can be added in players section"],[[],[],[],1 ]]

		],
		_onConfirm, //alternatively { code },
		{}, //On Cancel
		[_modulePosASL, _attachedObject] //arguments
	] call zen_dialog_fnc_create;
}, "\CES_Resupply\data\AmmoResupplyIcon.paa"] call zen_custom_modules_fnc_register;
