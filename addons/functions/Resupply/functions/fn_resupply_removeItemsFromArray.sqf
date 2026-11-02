//remove unwanted items from array

params ["_medicalCargo", "_ACE_only", "_no_KingLT", "_no_Guedel", "_no_AEDX", "_no_AED", "_no_PulseOximeter" , "_no_Accuvac", "_no_ChestSeal", "_no_AATKit", "_no_Painkillers"];		
		switch (_ACE_only) do { //will only execute one of the cases and never both
			case true: { 
				private _KATItems = ["kat_guedel", "kat_larynx", "kat_accuvac", "kat_X_AED", "kat_AED", "kat_Pulseoximeter", "kat_chestSeal", "kat_aatKit", "kat_Painkiller"];
				{	private _itemName = _x;
					private _index = _medicalCargo # 0 find _itemName;
					_medicalCargo # 1 deleteAt _index;
					private _medicalCargoItemsNew = (_medicalCargo # 0) - [_itemName];
					_medicalCargo set [0, _medicalCargoItemsNew];
				} forEach _KATItems;
			};
			case false: { 
				//delete Item and amount [itemnames,amounts]
				_removeArrayItem = {
					params ["_item"];
					private _index = _medicalCargo # 0 find _item;
					_medicalCargo # 1 deleteAt _index;
					private _medicalCargoItemsNew = (_medicalCargo # 0) - [_item]; //could also use deleteAt _index???
					_medicalCargo set [0, _medicalCargoItemsNew];
				};

				if (_no_KingLT) then {
					private _itemName = "kat_larynx";
					[_itemName] call _removeArrayItem;
				};
				if (_no_Guedel) then {
					private _itemName = "kat_guedel";
					[_itemName] call _removeArrayItem;
				};
				if (_no_AEDX) then {
					private _itemName = "kat_X_AED";
					[_itemName] call _removeArrayItem;
				};
				if (_no_AED) then {
					private _itemName = "kat_AED";
					[_itemName] call _removeArrayItem;
				};
				if (_no_Accuvac) then {
					private _itemName = "kat_accuvac";
					[_itemName] call _removeArrayItem;
				};
				if (_no_ChestSeal) then {
					private _itemName = "kat_chestSeal";
					[_itemName] call _removeArrayItem;
				};
				if (_no_AATKit) then {
					private _itemName = "kat_aatKit";
					[_itemName] call _removeArrayItem;
				};
				if (_no_PulseOximeter) then {
					private _itemName = "kat_Pulseoximeter";
					[_itemName] call _removeArrayItem;
				};
				if (_no_Painkillers) then {
					private _itemName = "kat_Painkiller";
					[_itemName] call _removeArrayItem;
				};
			};
		};
_medicalCargo //return new array
