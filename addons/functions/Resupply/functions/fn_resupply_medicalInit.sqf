//functional module with dialog window to choose options 
// dependencies: 
//	CBA_A3
//	Zeus Enhanced
//	ACE 
//	Zeus Enhanced - ACE3 Compatibility

//WIP make module to log loadouts at start so it will remember who had which mag even if they have 0 at the time of resupply
	//inculde in update one day
//WIP add more options to remove items
//WIP add option for crate model selection
//WIP make attached objects ACE ammo resupply - currently only works with fuel
//WIP mane tank tracks airdroppable - make addaction to them and give it invetory to give them the ace tracks
	//also tank sprocket wheel
["CES Resupply", "Medical Resupply", //ZEN create module framework
{
	params ["_modulePosASL","_attachedObject"];


	private _onConfirm = { //Actual code for the mod
		_values = _this select 0; //Returned values from dialog
		_values params ["_amount", "_spawnType", "_aircraftType", "_height", "_removeInventory", "_ACE_only", "_no_KingLT", "_no_Guedel", "_no_AEDX", "_no_AED", "_no_PulseOximeter" , "_no_Accuvac", "_no_ChestSeal", "_no_AATKit", "_no_Painkillers"];

		_arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject"];
		

		//amount tailored to a fireTeam of 7 including one medic
		private _medicalCargo = [["ACE_fieldDressing", "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_splint", "ACE_morphine", "ACE_adenosine", "ACE_epinephrine", "ACE_painkillers", "ACE_bloodIV", "ACE_bloodIV_500", "ACE_bloodIV_250", "ACE_suture", "ACE_surgicalKit", "kat_guedel", "kat_larynx", "kat_accuvac", "kat_X_AED", "kat_AED", "kat_Pulseoximeter", "kat_chestSeal", "kat_aatKit", "kat_Painkiller"],
									[15, 				20, 					20, 				7, 					7, 				10, 			5, 			7, 					14, 					4, 				4, 					8, 					35, 			1, 					7, 			1, 			1, 			1, 			1, 			1, 						1, 				1, 				1]];


		//remove items from ticked checkboxes
		//Has to be changed for mod usage	//maybe dan also be done with execVM	
		_medicalCargo = [_medicalCargo, _ACE_only, _no_KingLT, _no_Guedel, _no_AEDX, _no_AED, _no_PulseOximeter , _no_Accuvac, _no_ChestSeal, _no_AATKit, _no_Painkillers] call CESaddons_fnc_resupply_removeItemsFromArray;
		

		//change amount of items according to squad size
		private _multiplier = (round _amount) / 7;
		private _medicalCargoAmountNew = _medicalCargo # 1 apply { ceil (_x * _multiplier) };
		_medicalCargo set [1, _medicalCargoAmountNew];
		_medicalCargo params ["_itemClass", "_itemCount"]; 


		if (!isNull _attachedObject) then {
			_spawnType = "attached";
			hint "Supplies are spawned in attached vehicle or box";
		};
		
		_supplyBox = nil; //defined here otherwise it will be undefined outside the if or switch case
		private _containerClassName = "ACE_medicalSupplyCrate";
		switch (_spawnType) do {
			case "attached": { 
				_supplyBox = _attachedObject;
				if (_removeInventory) then {
					clearItemCargoGlobal _supplyBox;
					clearMagazineCargoGlobal _supplyBox;
					clearWeaponCargoGlobal _supplyBox;
					clearBackpackCargoGlobal _supplyBox; 
				};
				
				//Despite bein in magazine section, KAT Painkillers still count as items, so addItemCargoGlobal will add them
				{_supplyBox addItemCargoGlobal [_x, _itemCount select _forEachIndex]} forEach _itemClass;
			};
			case "ground": { 
				_supplyBox = createVehicle [_containerClassName, (ASLToATL _modulePosASL),[],0,"CAN_COLLIDE"];

				
				if (missionNamespace getVariable ["ace_main", true]) then {
					[_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
					[_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
				};
				

				{
					[_x, [[_supplyBox], false]] remoteExec ["addCuratorEditableObjects", 2];
				} forEach allCurators;
				clearItemCargoGlobal _supplyBox;
				clearMagazineCargoGlobal _supplyBox;
				clearWeaponCargoGlobal _supplyBox; 
				clearBackpackCargoGlobal _supplyBox; 
				
				//Despite bein in magazine section, KAT Painkillers still count as items, so addItemCargoGlobal will add them
				{_supplyBox addItemCargoGlobal [_x, _itemCount select _forEachIndex]} forEach _itemClass;
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
				hint "CESresupply error finding medical resupply type";
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
		"Medical Resupply (Can also be placed on any vehicle or box)", 
		[
			["SLIDER",["Squad / Fireteam size", "Item amount is dynamically scaled according to team size"],[1, 20, 7, 0]], //1 to 20, default is 7
			["COMBO",["Resupply type", ""],[["ground","chute","aircraft"], [["On ground", "Spawns crate on module position"], ["Airdrop (spawned in)", "Will airdrop crate at given altitude"], ["Airdrop with selected aircraft", "Will spawn selected aircraft to deliver your supply crate"]], 0]],
			["COMBO",["Aircraft type", "Will not take effect if crate is spawned on ground"], [_planyes, _planyenames]],
			["SLIDER",["Airdrop height", "Will not take effect if crate is spawned on ground"],[100, 1000, 200, 0]],//100 to 1000, default 200 and showing 0 decimal
			["CHECKBOX",["Remove Vehicle/Box inventory", "For attached Onjects only! By default it will not remove the already existing items in the inventory of vehicles etc."],[false]],
			["CHECKBOX",["ACE Medical only", "Exclude all KAT items"],[false]],
			["CHECKBOX",["Exclude King LT", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude Guedel Tube", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude AED-X", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude AED", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude Pulse Oximeter", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude Accuvac", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude Chest Seal", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude AAT Kit", "Overwritten if ACE Medical only is checked"],[false]],
			["CHECKBOX",["Exclude Painkillers", "Overwritten if ACE Medical only is checked"],[false]]

		],
		_onConfirm, //alternatively { code },
		{}, //On Cancel
		[_modulePosASL, _attachedObject] //arguments for _onConfirm
	] call zen_dialog_fnc_create;
}, "\CES_Resupply\data\MedicalResupplyIcon.paa"] call zen_custom_modules_fnc_register;
