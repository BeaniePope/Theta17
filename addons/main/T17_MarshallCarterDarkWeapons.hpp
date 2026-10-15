	class T17_MCD_Suit_Item: Uniform_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[T17] Marshall, Carter & Dark Uniform";
		picture = "\a3\Characters_F_AoW\Uniforms\data\ui\icon_U_C_FormalSuit_01_black_F_ca.paa";
		model = "\a3\Characters_F_AoW\Uniforms\Suitpacks\suitpack_FormalSuit_01_F.p3d";
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Uniforms\Suitpacks\data\suitpack_FormalSuit_01_black_CO.paa"};
		DLC = "T17";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T17_MCD_Suit_Uniform";
			containerClass = "Supply20";
			mass = 30;
		};
	};
