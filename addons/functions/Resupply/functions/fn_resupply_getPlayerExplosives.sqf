//WIP if they have 0 compatible mags give them a default mag 
params ["_includedPlayers", "_explosivesMagsPerMan", "_rocketMagsPerMan"];

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

	{
		private _amount = 0; //make sure its 0 at the beginning of every iteration
		private _myItemType = _x call BIS_fnc_itemType;
		switch (true) do {
			case (_myItemType select 0 == "Mine"): { 
				_amount = _explosivesMagsPerMan;
			};
			case (_myItemType select 1 == "Rocket"): { 
				_amount = _rocketMagsPerMan;
			};
			case (_myItemType select 1 == "Missile"): { 
				_amount = _rocketMagsPerMan;
			};
			default { 
				continue; //when items aren't rockets, missiles or explosives - skip
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
