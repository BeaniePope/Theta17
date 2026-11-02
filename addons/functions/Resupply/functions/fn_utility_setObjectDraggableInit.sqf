
["CES Utility", "Enabe / Disable dragging", 
{
	params ["_modulePosASL","_attachedObject"];

	private _onConfirm = {
		_dialogReturn = _this select 0;
		_dialogReturn params ["_selection"];
		
		private _arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject"];
		if (!isNull _attachedObject) then {
			switch (true) do {
				case (_selection == "draggable"): { 
					[_attachedObject, true, [0,2,0], 0, true] remoteExec ["ace_dragging_fnc_setDraggable", 0];
				};
				case (_selection == "not draggable"): { 
					[_attachedObject, false, [0,2,0], 0, true] remoteExec ["ace_dragging_fnc_setDraggable", 0];
				};	
				default { 
					hint "CES Utility error getting draggable selection";
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
		"Enabe / Disable dragging", 
		[
			["LIST",["Toggle", ""],[["draggable","not draggable"], [["Enable dragging", ""], ["Disable dragging", ""]], 0, 5]]
		],
		_onConfirm,
		{},
		[_modulePosASL, _attachedObject]
	] call zen_dialog_fnc_create;

}, "\CES_Resupply\data\UtilitySetDraggableIcon.paa"] call zen_custom_modules_fnc_register;
