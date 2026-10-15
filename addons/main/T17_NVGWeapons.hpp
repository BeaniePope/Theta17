	class NVGoggles;
	class T17_ScrambleGoggles_NVG: NVGoggles
	{

		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "SCRAMBLE Goggles";
        model = "\z\t17\addons\main\models\scramblegoggles.p3d";
		ace_nightvision_generation = 4;
		ace_nightvision_bluRadius = 0.35;
		modelOptics = "\z\t17\addons\main\models\panoramic.p3d";
		nameSound = "nvgoggles";
		descriptionShort = "White Phosphor";
		ace_nightvision_const_maxBrightness = 6;
		ace_nightvision_const_minBrightness = -6;
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\z\t17\addons\main\models\scramblegoggles.p3d";
			modelOff = "\z\t17\addons\main\models\scramblegoggles.p3d";
			mass = 1;
		};
		thermalMode[] = {0};
		visionMode[] = {"Normal","NVG"};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
	};
	class T17_BallisticMask_NVG: T17_ScrambleGoggles_NVG
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "Ballistic Mask";
    	model = "\z\t17\addons\main\models\ballisticmask.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\z\t17\addons\main\models\ballisticmask.p3d";
			modelOff = "\z\t17\addons\main\models\ballisticmask.p3d";
			mass = 1;
		};
	};
	class T17_BallisticMaskScrambleGoggles_NVG: T17_ScrambleGoggles_NVG
	{
		author = "Scout";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "Ballistic Mask & SCRAMBLE Goggles";
    	model = "\z\t17\addons\main\models\ballisticmaskscramblegoggles.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\z\t17\addons\main\models\ballisticmaskscramblegoggles.p3d";
			modelOff = "\z\t17\addons\main\models\ballisticmaskscramblegoggles.p3d";
			mass = 1;
		};
	};
