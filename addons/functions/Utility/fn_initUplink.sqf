params ["_unit", "_container", "_item"];

if (_item == "T17_UplinkTerminalMagazine") then
{
    sleep 1;
    private _targetItem = "T17_UplinkTerminalMagazine";
    private _holders = nearestObjects [getPosATL _unit, ["GroundWeaponHolder", "WeaponHolderSimulated"], 10];
    private _foundHolder = objNull;
    {
        if (_targetItem in (itemCargo _x) || { _targetItem in (magazineCargo _x)}) exitWith {
            _foundHolder = _x;
        };
    } forEach _holders;

    if (_foundHolder isNotEqualTo objNull) then
    {
        private _terminalPosition = getPosATL _foundHolder;
        private _veh = createVehicle ["T17_UplinkTerminal", _terminalPosition, [], 0, "CAN_COLLIDE"];
        _veh setPos _terminalPosition;
        deleteVehicle _foundHolder;
    };
};
