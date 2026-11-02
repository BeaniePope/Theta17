
["CES Utility", "Set object cargo space", 
{
	params ["_modulePosASL","_attachedObject"];

	private _onConfirm = {
		_dialogReturn = _this select 0;
		_dialogReturn params ["_space"];
		private _space = round _space;
		private _arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject"];
		if (!isNull _attachedObject) then {
			[_attachedObject, _space] remoteExec ["ace_cargo_fnc_setSpace", 0];
			
			private _notification = [_space] spawn {
				params ["_space"];
				hint format ["Attached Object's cargo space has been adjusted to %1", _space];
				sleep 3;
				hintSilent "";
			};
		};
	};

	[
		"Set Object cargo space (place on any vehicle)", 
		[
			["SLIDER",["Cargo space", "Changes how much can be loaded into the vehicle"],[0,500,50,0]]
		],
		_onConfirm,
		{},
		[_modulePosASL, _attachedObject]
	] call zen_dialog_fnc_create;

}, "\CES_Resupply\data\UtilityScaleSizeIcon.paa"] call zen_custom_modules_fnc_register;
