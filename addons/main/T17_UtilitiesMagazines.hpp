class CA_Magazine;

class T17_UplinkTerminalMagazine: CA_Magazine
{
        author = "Queen";
		ACE_isItem = 1;
		scope = 2;
		mass = 20;
		displayName = "Uplink Terminal";
		descriptionUse = "upwink tweminawl";
		picture = "";
		model = "\z\t17\addons\props\models\antenna.p3d";
		useAction = 0;
		useActionTitle = "";
		type = "2*		256";
		allowedSlots[] = {901};
		value = 5;
		ammo = "T17_UplinkTerminalAmmo";
		nameSoundWeapon = "mine";
		nameSound = "mine";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		descriptionShort = "termnial pwink";
		weaponPoolAvailable = 1;
		sound[] = {"A3\sounds_f\dummysound",0.00031622776,1,10};
		class EventHandlers
        {
            init = "params ['_object']; _position = getPosATL _object; 'T17_UplinkTerminal' createVehicle _position; deleteVehicle _object;";
        };
};
