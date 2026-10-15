	//class CUP_V_RUS_6B45_1;
	//class CUP_Vest_RUS_Camo_Ratnik_Base;
    class T17_GOC_Vest: ItemCore
	{
		dlc = "T17";
		displayName = "Global Occult Coalition Vest";
		author = "Queen";
		scope = 2;
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_6b45_1_emr_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\main\textures\T17_UNGOC_Vest_co.paa",
			"\z\t17\addons\main\textures\T17_UNGOC_VestEquipment_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"z\t17\addons\main\textures\T17_UNGOC_Vest.rvmat",
			"z\t17\addons\main\textures\T17_UNGOC_VestEquipment.rvmat"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
			mass=70;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\z\t17\addons\main\textures\T17_UNGOC_Vest_co.paa",
				"\z\t17\addons\main\textures\T17_UNGOC_VestEquipment_co.paa"
			};
			hiddenSelectionsMaterials[]= 
			{
				"z\t17\addons\main\textures\T17_UNGOC_Vest.rvmat",
				"z\t17\addons\main\textures\T17_UNGOC_VestEquipment.rvmat"
			};
			armor=20;
			passThrough=0.5;
			containerClass="Supply140";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
