	class T17_AR_Uniform_Item: Uniform_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[T17] AR Android Uniform";
		//picture = "\a3\Characters_F_AoW\Uniforms\data\ui\icon_U_C_FormalSuit_01_black_F_ca.paa";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		modelSides[] = {0,1,2,3,4,5,6,7};
		DLC = "T17";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T17_AR_Uniform";
			containerClass = "Supply200";
			mass = 30;
		};
	};
	class T17_AR_Scientist_Uniform_Item: Uniform_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[T17] AR Scientist Uniform";
		picture = "\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_Uniform_Scientist_01_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		modelSides[] = {0,1,2,3,4,5,6,7};
		DLC = "T17";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T17_AR_Scientist_Uniform";
			containerClass = "Supply200";
			mass = 30;
		};
	};
