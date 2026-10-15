class CfgGlasses
{
	class G_Balaclava_blk;
	class T17_GlassesRound: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "Glasses (Round)";
		scope = 2;
        model = "\z\t17\addons\main\models\glasses.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {"frame", "lens"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\main\textures\frame_co.paa", "\z\t17\addons\main\textures\lens_ca.paa"};
	};
	class T17_ScrambleGoggles: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "SCRAMBLE Goggles";
		scope = 2;
        model = "\z\t17\addons\main\models\scramblegoggles.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {"goggles"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\main\textures\scramblegoggles_co.paa"};
	};
	class T17_BallisticMask: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "Ballistic Mask";
		scope = 2;
        model = "\z\t17\addons\main\models\ballisticmask.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {"mask"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\main\textures\ballisticmask_co.paa"};
	};
	class T17_BallisticMaskScrambleGoggles: G_Balaclava_blk
	{
		dlc = "T17";
		author = "Scout";
		displayName = "Ballistic Mask & SCRAMBLE Goggles";
		scope = 2;
        model = "\z\t17\addons\main\models\ballisticmaskscramblegoggles.p3d";
		identityTypes[] = {};
		hiddenSelections[] = {"mask","goggles"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\main\textures\ballisticmask_co.paa","\z\t17\addons\main\textures\scramblegoggles_co.paa"};
	};
};
