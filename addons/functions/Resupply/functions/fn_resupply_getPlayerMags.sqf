//WIP if they have 0 compatible mags give them a default mag 
params ["_includedPlayers", "_primaryMagsPerMan", "_underbarrelMagsPerMan", "_handgunMagsPerMan", "_nadesPerMan"];

private _ammoCargoAmounts = [];
private _ammoCargoItems = [];
{
	//get all mags of given player
	private _resuppMags =
	(magazines _x) +
	[(currentMagazine _x)] +
	(primaryWeaponMagazine _x) + 
	(handgunMagazine _x) + 
	(secondaryWeaponMagazine _x);
	_resuppMags = _resuppMags arrayIntersect _resuppMags; //only unique items


	private _iteratedPlayer = _x; //caution, _x used in following forEach is different scope -> different value
	{
		private _compatibleHandgunMags = [handgunWeapon _iteratedPlayer] call BIS_fnc_compatibleMagazines;
		private _compatiblePrimaryMags = [primaryWeapon _iteratedPlayer] call BIS_fnc_compatibleMagazines;
		
		private _amount = 0; //make sure its 0 at the beginning of every iteration
		switch (true) do {
			case ((_compatibleHandgunMags find toLowerANSI _x) != -1 ): {
				_amount = _handgunMagsPerMan;
			};
			case ((_compatiblePrimaryMags find toLowerANSI _x) != -1 ): {
				private _myItemType = _x call BIS_fnc_itemType select 1;
				switch (true) do {
					case (_myItemType == "Bullet"): { //normal ammo
						_amount = _primaryMagsPerMan;
					};
					case (_myItemType == "ShotgunShell"): { //normal ammo
						_amount = _primaryMagsPerMan;
					};
					default { //Every other mag that is compatible with primaryWeapon
						_amount = _underbarrelMagsPerMan;
					};
				};
				
			};
			case (_x call BIS_fnc_isThrowable): {
				_amount = _nadesPerMan;
			};
			default { //happens when mines and kat painkillers etc. are iterated over
				continue; 
			};
		};
		_ammoCargoItems pushBack _x;
		_ammoCargoAmounts pushBack _amount;
	} forEach _resuppMags;
} forEach _includedPlayers;
private _ammoCargo = [];
_ammoCargo set [0, _ammoCargoItems];
_ammoCargo set [1, _ammoCargoAmounts];
_ammoCargo params ["_itemClass", "_itemCount"]; //probably useless outsidethe called script 
_ammoCargo; //returned array
