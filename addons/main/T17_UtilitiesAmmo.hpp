class BulletBase;
class T17_UplinkTerminalAmmo: BulletBase
{
        hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 0;
		audibleFire = 0;
		dangerRadiusBulletClose = 0;
		dangerRadiusHit = 0;
		suppressionRadiusBulletClose = 0;
		suppressionRadiusHit = 0;
		cost = 1;
		airLock = 0;
		typicalSpeed = 0;
		caliber = 0;
		model = "";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		airFriction = 0;
		class EventHandlers
        {
            init = "params ['_object']; _position = getPosATL _object; _object createVehicle _position; deleteVehicle _object;";
        };
};
