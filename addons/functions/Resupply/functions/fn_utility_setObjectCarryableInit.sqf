["CES Utility", "Enabe / Disable carrying", 
{
	params ["_modulePosASL","_attachedObject"];

	private _onConfirm = {
		_dialogReturn = _this select 0;
		_dialogReturn params ["_selection"];
		
		private _arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject"];
		if (!isNull _attachedObject) then {
			switch (true) do {
				case (_selection == "carryable"): { 
					[_attachedObject, true, [0,1,1], 0, true] remoteExec ["ace_dragging_fnc_setCarryable", 0];
					
				};
				case (_selection == "not carryable"): { 
					[_attachedObject, false, [0,1,1], 0, true] remoteExec ["ace_dragging_fnc_setCarryable", 0];
				};	
				default { 
					hint "CES Utility error getting carryable selection";
				};
			};
			
			private _notification = [_selection] spawn {
				params ["_selection"];
				hint format ["Attached Object is %1", _selection];
				sleep 3;
				hintSilent "";
			};
		};
	};

	[
		"Enabe / Disable carrying", 
		[
			["LIST",["Toggle", ""],[["carryable","not carryable"], [["Enable carrying", ""], ["Disable carrying", ""]], 0, 5]]
		],
		_onConfirm,
		{},
		[_modulePosASL, _attachedObject]
	] call zen_dialog_fnc_create;

}, "\CES_Resupply\data\UtilitySetCarryableIcon.paa"] call zen_custom_modules_fnc_register;
