params ["_modulePosASL", "_aircraftType", "_itemClass", "_itemCount", "_containerClassName"];

CESlocal_fnc_airdropSpawn = {
	params ["_groupLeader", "_itemClass", "_itemCount", "_container"];

	_container = (_container # 0); //has to converted back to string
	private _aircraft = vehicle _groupLeader; 
	private _pos = ASLToAGL (getPosASL _aircraft);
	private _airDropPos = _pos getPos [10, (getDir _aircraft) - 180]; //spawn crate 10 behind aircraft
	_airDropPos set [2, _pos select 2];

	//Has to be changed for mod usage	//maybe dan also be done with execVM	
	private _myAirdrop = [_airDropPos, _itemClass, _itemCount, _container, _aircraft] call CESaddons_fnc_resupply_createAirdropCrate;
};

//requiredParams [_modulePosASL, _aircraftType]
// get random direction from 0 to 7 index and convert to degrees
private _direction = (random 7) * 45;
private _distance = 2000;
private _speed;
if (_aircraftType call BIS_fnc_objectType select 1 == "Helicopter") then {
	_speed = ["LIMITED", "NORMAL", "FULL"] select 2;
} else {
	_speed = ["LIMITED", "NORMAL", "FULL"] select 1;
};

// convert to AGL
private _pos = ASLToAGL _modulePosASL;

// calculate to and from waypoints for plane, and direction to look. 
private _startPos = _pos getPos [_distance, _direction - 180];
private _endPos   = _pos getPos [_distance, _direction];

// set altitude as flight-height
_startPos set [2, _height];
_endPos   set [2, _height];

// create group - Using civilian so none shoots at it. Set to delete when empty
private _group = createGroup [civilian, true];

// spawn plane at start pos and start it flying in direction 
private _plane = createVehicle [_aircraftType, _startPos, [], 0, "FLY"];
_plane setPos _startPos;
_plane setDir _direction;

// set initial velocity
_plane setVelocity [sin _direction * 100, cos _direction * 100, 0];

// create aircraft crew
createVehicleCrew _plane;
crew _plane joinSilent _group;
_group addVehicle _plane;

// set flight height 
_plane flyInHeight _height;

// make crew handle aircraft better by changing behaviour and ignoring surroundings
_plane setCaptive true;
{
	_x disableAI "TARGET";
	_x disableAI "AUTOTARGET";
	_x disableAI "AUTOCOMBAT";
	_x setCaptive true;
	_x setSkill 1;
} forEach crew _plane;

// set first waypoint, over dropzone 
private _waypoint = _group addWaypoint [_pos, -1];
_waypoint setWaypointType "MOVE";
_waypoint setWaypointBehaviour "CARELESS";
_waypoint setWaypointCombatMode "BLUE";
_waypoint setWaypointSpeed _speed;
_waypoint setWaypointCompletionRadius 1; // only complete if within 1m of the waypoint (does not seem to work)
_waypoint setWaypointTimeout [0.5, 0.5, 0.5]; //wait 0.5 seconds until it finishes waypoint

// when over drop-point, spawn crate below plane and attach chute 
//containerClassName has to be array here to be able to be passed as parameter
_waypoint setWaypointStatements ["true", format ["[this, %1, %2, %3] call CESlocal_fnc_airdropSpawn", _itemClass, _itemCount, [_containerClassName]]];



// final waypoint 
private _waypointEnd = _group addWaypoint [_endPos, 1];
_waypointEnd setWaypointType "MOVE";
_waypointEnd setWaypointBehaviour "CARELESS";
_waypointEnd setWaypointCombatMode "BLUE";
_waypointEnd setWaypointSpeed _speed;

// cleanup
_waypointEnd setWaypointStatements ["true", "private _group = group this; private _aircrafts = []; {_aircrafts pushBackUnique vehicle _x; deleteVehicle _x} forEach thisList; {deleteVehicle _x} forEach _aircrafts; deleteGroup _group"];

// add plane to zeus editable so they can see it coming
{
	[_x, [[_plane], false]] remoteExec ["addCuratorEditableObjects", 0];
} forEach allCurators;

private _compileSuccessFul = true;
_compileSuccessFul
