class CfgPatches 
{
    class T17_DER114
    {
        author = "Queen";
		name = "T17_DER114";
		url = "";
        addonRootClass= "T17_Weapons";
		requiredAddons[] = 
        {
            "T17_Main"
        };
		requiredVersion = 2.22;
		units[] = {};
		weapons[] = 
        {
            "T17_AR_Rifle"
        }; // Even if you don't have anything to put in them, arma 3 requires all of these attributes to be in the cfgpatches.
    };
};

class CfgWeapons
{
    class arifle_MSBS65_black_F;
	class T17_AR_Rifle: arifle_MSBS65_black_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"\z\t17\addons\weapons\DirectEnergyRifle\textures\AR_MSBS_01.rvmat", "\z\t17\addons\weapons\DirectEnergyRifle\textures\AR_MSBS_02.rvmat"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\weapons\DirectEnergyRifle\textures\T17_AR_MSBS_01_CO.paa", "\z\t17\addons\weapons\DirectEnergyRifle\textures\T17_AR_MSBS_02_CO.paa"};
		displayName = "Anderson Robotics Type 115 ER";
		BaseWeapon = "T17_AR_Rifle";
		reloadTime = .5;
		// picture = "\SSV_Common\SSV_logo_co.paa";
		// icon = "\SSV_Common\SSV_logo_co.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
};


class CfgSoundShaders
{
	class SQF_Soundshader_Arquebus_Close
	{
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
		//samples[] = {{"\z\sqf\addons\arquebus\sounds\ArquebusClose1.wss",1}, {"\z\sqf\addons\arquebus\sounds\ArquebusClose2.wss",1}, {"\z\sqf\addons\arquebus\sounds\ArquebusClose3.wss",1}};
	};
	class SQF_Soundshader_Arquebus_Mid
	{
		volume = 0.5;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
		range = 2000;
		//samples[] = {{"\z\sqf\addons\arquebus\sounds\ArquebusMid1.wss",1}, {"\z\sqf\addons\arquebus\sounds\ArquebusMid2.wss",1}, {"\z\sqf\addons\arquebus\sounds\ArquebusMid3.wss",1}};
	};
	class SQF_Soundshader_Arquebus_Far
	{
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
        //samples[] = {{"\z\sqf\addons\arquebus\sounds\ArquebusFar1.wss",1}, {"\z\sqf\addons\arquebus\sounds\ArquebusFar2.wss",1}, {"\z\sqf\addons\arquebus\sounds\ArquebusFar3.wss",1}};
	};
};

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class SQF_Soundset_Arquebus_Shot: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SQF_Soundshader_Arquebus_Close","SQF_Soundshader_Arquebus_Mid","SQF_Soundshader_Arquebus_Far"};
		volumeFactor = 2.0;
	};
};

class CfgMagazineWells
{
    class SQF_Arquebus_58Ball_MagWell
    {
        BI_Magazines[] = {"SQF_1rnd_58Ball_Mag", "SQF_1rnd_58ShotShell_Mag"};
    };
};

class CfgMagazines
{
    class CA_Magazine;
    class SQF_1rnd_58Ball_Mag: CA_Magazine
    {
        author = "Scout";
        dlc = "";
        displayName = ".58 Arquebus Ball";
        count = 1;
        value = 1;
        scope = 2;
        //model = "\SQFArquebus\models\LeadBall.p3d";
        //picture = "\SQFArquebus\textures\LeadBall_ca.paa";
        descriptionShort = ".58 Caliber Lead Ball";
        mass = 0.25;
        ammo = "SQF_58Ball";
        typicalSpeed = 200;
        type = 256;
        selectionFireAnim = "zasleh";
        nameSound = "magazine";
        maxLeadSpeed = 30;
        weaponpoolavailable = 1;
        tracersEvery = 1;
        deleteIfEmpty = 0;
    };
    class SQF_1rnd_58Shotshell_Mag: SQF_1rnd_58Ball_Mag
    {
        displayName = ".58 Arquebus Shotshell";
        descriptionShort = ".58 Caliber Shotshell";
        ammo = "SQF_58Shotshell_Submunition";
    };
};

class CfgAmmo
{
    class BulletBase;
    class T17_EnergyBolt: BulletBase
    {
        airLock = 1;
        dlc = "";
        hit = 16;
        indirectHit = 2.5;
        indirectHitRange = 0.01;
        cost = 0.01;
        typicalSpeed = 200;
        airFriction = -0.003734;
        waterFriction = -0.007468;
        caliber = 12.7;
        //model = "\SQFArquebus\models\LeadBall.p3d";
		cartridge = "";
        tracerScale = 1;
        tracerStartTime = 0;
        deflectionSlowDown = 0.3;
        tracerEndTime = 15;
        audibleFire = 50;
        timeToLive = 15;
        deflecting = 30;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        aiAmmoUsageFlags = 64 + 128;
    };
};
