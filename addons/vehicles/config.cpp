class CfgPatches
{
	class UNGOC_Vehicles
	{
		units[]=
		{
			"B_UNGOC_RHIB",
			"B_UNGOC_RHIB_M2",
			"B_UNGOC_RHIB_Mk19",
			"B_UNGOC_VTOL_01_Vehicle",
			"B_UNGOC_VTOL_01_Infantry",
			"B_UNGOC_VTOL_01_Armed",
			"B_UNGOC_VTOL_02_Vehicle",
			"B_UNGOC_VTOL_02_Infantry",
			"B_UNGOC_VTOL_03_unarmed",
			"B_UNGOC_Black_Wasp",
			"B_UNGOC_Black_Wasp_Stealth",
			"B_UNGOC_RAH_66",
			"B_UNGOC_RAH_66_Pylons",
			"B_UNGOC_Merlin_HC3",
			"B_UNGOC_Merlin_HC3_Armed",
			"B_UNGOC_Merlin_HC3_Medical",
			"B_UNGOC_M270_DPICM",
			"B_UNGOC_M270_HE",
			"B_UNGOC_M1A2C",
			"B_UNGOC_M1A2C_TUSK",
			"B_UNGOC_M1A2C_TUSK_II",
			"B_UNGOC_Badger_IFV",
			"B_UNGOC_Badger_MGS_UP",
			"B_UNGOC_Badger_MGS",
			"B_UNGOC_Badger_APC",
			"B_UNGOC_Badger_Shorad",
			"B_UNGOC_HEMTT_Fuel",
			"B_UNGOC_HEMTT_Box",
			"B_UNGOC_HEMTT_Cargo",
			"B_UNGOC_HEMTT_Medical",
			"B_UNGOC_HEMTT_Ammo",
			"B_UNGOC_HEMTT_Flatbed",
			"B_UNGOC_HEMTT_Repair",
			"B_UNGOC_HEMTT_Mover",
			"B_UNGOC_HEMTT_Transport",
			"B_UNGOC_HEMTT_Transport_Covered",
			"B_UNGOC_LSV_unarmed",
			"B_UNGOC_LSV_AT",
			"B_UNGOC_LSV_armed",
			"B_UNGOC_SUV",
			"B_UNGOC_Offroad",
			"B_UNGOC_Offroad_comms",
			"B_UNGOC_Offroad_hardtop",
			"B_UNGOC_Van_Cargo",
			"B_UNGOC_Van_Transport"
		};
		weapons[]={};
		version="1.0.0";
		author="scorboutiko";
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};

class CfgVehicles
{
	class I_C_Boat_Transport_02_F;
	class B_UNGOC_RHIB: I_C_Boat_Transport_02_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="RHIB";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_RHIB.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Boats\UNGOC_Boat_Transport_02_exterior.paa",
			"\z\t17\addons\Vehicles\Boats\UNGOC_Boat_Transport_02_interior.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Boats\UNGOC_Boat_Transport_02_exterior.paa",
					"\z\t17\addons\Vehicles\Boats\UNGOC_Boat_Transport_02_interior.paa"
				};
			};
		};
	};
	class CUP_B_RHIB_USMC;
	class B_UNGOC_RHIB_M2: CUP_B_RHIB_USMC
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="RHIB (M2)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_RHIB_M2.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Boats\UNGOC_RHIB.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Boats\UNGOC_RHIB.paa"
				};
			};
		};
	};
	class CUP_B_RHIB2Turret_USMC;
	class B_UNGOC_RHIB_Mk19: CUP_B_RHIB2Turret_USMC
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="RHIB (Mk19)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_RHIB_Mk19.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Boats\UNGOC_RHIB.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Boats\UNGOC_RHIB.paa"
				};
			};
		};
	};
	class B_T_VTOL_01_vehicle_F;
	class B_UNGOC_VTOL_01_Vehicle: B_T_VTOL_01_vehicle_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="V-44 X Blackfish (Vehicle Transport)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_VTOL_01_Vehicle.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT01.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT02.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT03.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT04.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_Signs.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT01.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT02.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT03.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT04.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_Signs.paa"
				};
			};
		};
	};
	class B_T_VTOL_01_infantry_F;
	class B_UNGOC_VTOL_01_Infantry: B_T_VTOL_01_infantry_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="V-44 X Blackfish (Infantry Transport)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_VTOL_01_Infantry.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT01.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT02.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT03.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT04.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_Signs.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT01.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT02.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT03.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT04.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_Signs.paa"
				};
			};
		};
	};
	class B_T_VTOL_01_armed_F;
	class B_UNGOC_VTOL_01_Armed: B_T_VTOL_01_armed_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="V-44 X Blackfish (Armed)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_VTOL_01_Armed.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT01.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT02.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT03.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT04_2.paa",
			"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_Signs.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT01.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT02.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT03.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_EXT04_2.paa",
					"\z\t17\addons\Vehicles\VTOL_01\UNGOC_VTOL_01_Signs.paa"
				};
			};
		};
	};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class B_UNGOC_VTOL_02_Vehicle: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="Y-32 Xi'an (Vehicle Transport)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_VTOL_02_Vehicle.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT01.paa",
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT02.paa",
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_R.paa",
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_L.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT01.paa",
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT02.paa",
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_R.paa",
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_L.paa"
				};
			};
		};
	};
	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class B_UNGOC_VTOL_02_Infantry: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="Y-32 Xi'an (Infantry Transport)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_VTOL_02_Infantry.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT01.paa",
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT02.paa",
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_R.paa",
			"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_L.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT01.paa",
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT02.paa",
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_R.paa",
					"\z\t17\addons\Vehicles\VTOL_02\UNGOC_VTOL_02_EXT03_L.paa"
				};
			};
		};
	};
	class B_VTOL_03_unarmed_QAV;
	class B_UNGOC_VTOL_03_unarmed: B_VTOL_03_unarmed_QAV
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="MV-35 Phantom";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_VTOL_03_unarmed.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\MV-35\UNGOC_MV35hull1.paa",
			"\z\t17\addons\Vehicles\MV-35\UNGOC_MV35hull2.paa",
			"\z\t17\addons\Vehicles\MV-35\UNGOC_MV35hull3.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\MV-35\UNGOC_MV35hull1.paa",
					"\z\t17\addons\Vehicles\MV-35\UNGOC_MV35hull2.paa",
					"\z\t17\addons\Vehicles\MV-35\UNGOC_MV35hull3.paa"
				};
			};
		};
	};
	class B_Plane_Fighter_01_F;
	class B_UNGOC_Black_Wasp: B_Plane_Fighter_01_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="F/A-181 Black Wasp II";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Black_Wasp.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_01.paa",
			"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_02.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_01.paa",
					"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_02.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
				};
			};
		};
	};
	class B_Plane_Fighter_01_Stealth_F;
	class B_UNGOC_Black_Wasp_Stealth: B_Plane_Fighter_01_Stealth_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="F/A-181 Black Wasp II (Stealth)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Black_Wasp_Stealth.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_01.paa",
			"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_02.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_01.paa",
					"\z\t17\addons\Vehicles\Black_Wasp\UNGOC_Fighter_01_fuselage_02.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
					"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
				};
			};
		};
	};
	class B_Heli_Attack_01_dynamicLoadout_F;
	class B_UNGOC_RAH_66: B_Heli_Attack_01_dynamicLoadout_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="RAH-66 Comanche";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_RAH_66.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\RAH-66\UNGOC_Heli_Attack_01.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\RAH-66\UNGOC_Heli_Attack_01.paa"
				};
			};
		};
	};
	class B_Heli_Attack_01_pylons_dynamicLoadout_F;
	class B_UNGOC_RAH_66_Pylons: B_Heli_Attack_01_pylons_dynamicLoadout_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="RAH-66 Comanche (Pylons)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_RAH_66_Pylons.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\RAH-66\UNGOC_Heli_Attack_01.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\RAH-66\UNGOC_Heli_Attack_01.paa"
				};
			};
		};
	};
	class CUP_B_Merlin_HC3_GB;
	class B_UNGOC_Merlin_HC3: CUP_B_Merlin_HC3_GB
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="Merlin HC3";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Merlin_HC3.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_1.paa",
			"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_2"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_1.paa",
					"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_2"
				};
			};
		};
	};
	class CUP_B_Merlin_HC3_Armed_GB;
	class B_UNGOC_Merlin_HC3_Armed: CUP_B_Merlin_HC3_Armed_GB
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="Merlin HC3 (Armed)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Merlin_HC3_Armed.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_1.paa",
			"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_2"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_1.paa",
					"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_2"
				};
			};
		};
	};
	class CUP_C_Merlin_HC3_CIV_Rescue;
	class B_UNGOC_Merlin_HC3_Medical: CUP_C_Merlin_HC3_CIV_Rescue
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Pilot";
		displayName="Merlin HC3 (Medical)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Merlin_HC3_Medical.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_1_med.paa",
			"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_2_med"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_1_med.paa",
					"\z\t17\addons\Vehicles\Merlin\UNGOC_merlinhc3_2_med"
				};
			};
		};
	};
	class CUP_B_M270_DPICM_USA;
	class B_UNGOC_M270_DPICM: CUP_B_M270_DPICM_USA
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="M270 (DPICM)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_M270_DPICM.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\M270\UNGOC_mlrs_hull.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\M270\UNGOC_mlrs_hull.paa"
				};
			};
		};
	};
	class CUP_B_M270_HE_USA;
	class B_UNGOC_M270_HE: CUP_B_M270_HE_USA
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="M270 (HE)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_M270_HE.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\M270\UNGOC_mlrs_hull.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\M270\UNGOC_mlrs_hull.paa"
				};
			};
		};
	};
	class CUP_B_M1A2C_NATO;
	class B_UNGOC_M1A2C: CUP_B_M1A2C_NATO
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="M1A2SEPv3";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_M1A2C.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Hull.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A2parts.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Turret.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Wheels.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_TUSKKit.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A1Parts.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_CType.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Hull.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A2parts.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Turret.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Wheels.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_TUSKKit.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A1Parts.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_CType.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
		};
		animationList[]=
		{
			"hide_loader_shield",
			1,
			"switch_a1_a2",
			1,
			"hide_bustle_rack_ext",
			0,
			"hide_cip_panel_bustle",
			1,
			"hide_cip_panel_rear",
			1,
			"hide_front_ti_panels",
			1
		};
	};
	class CUP_B_M1A2C_TUSK_NATO;
	class B_UNGOC_M1A2C_TUSK: CUP_B_M1A2C_TUSK_NATO
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="M1A2SEPv3 (TUSK)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_M1A2C_TUSK.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Hull.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A2parts.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Turret.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Wheels.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_TUSKKit.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A1Parts.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_CType.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Hull.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A2parts.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Turret.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Wheels.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_TUSKKit.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A1Parts.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_CType.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
		};
		animationList[]=
		{
			"hide_loader_shield",
			1,
			"switch_a1_a2",
			1,
			"hide_bustle_rack_ext",
			0,
			"hide_cip_panel_bustle",
			1,
			"hide_cip_panel_rear",
			1,
			"hide_front_ti_panels",
			1
		};
	};
	class CUP_B_M1A2C_TUSK_II_NATO;
	class B_UNGOC_M1A2C_TUSK_II: CUP_B_M1A2C_TUSK_II_NATO
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="M1A2SEPv3 (TUSK II)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_M1A2C_TUSK_II.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Hull.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A2parts.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Turret.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_Wheels.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_TUSKKit.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A1Parts.paa",
			"\z\t17\addons\Vehicles\M1A2C\UNGOC_CType.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Hull.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A2parts.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Turret.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_Wheels.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_TUSKKit.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_M1A1Parts.paa",
					"\z\t17\addons\Vehicles\M1A2C\UNGOC_CType.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
		};
		animationList[]=
		{
			"hide_loader_shield",
			1,
			"switch_a1_a2",
			1,
			"hide_bustle_rack_ext",
			0,
			"hide_cip_panel_bustle",
			1,
			"hide_cip_panel_rear",
			1,
			"hide_front_ti_panels",
			1
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class B_UNGOC_Badger_IFV: B_APC_Wheeled_01_cannon_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Badger (IFV)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Badger_IFV.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_Cage.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_Cage.paa"
				};
			};
		};
	};
	class VVE_APC_Wheeled_01_mgs_up_QAV;
	class B_UNGOC_Badger_MGS_UP: VVE_APC_Wheeled_01_mgs_up_QAV
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Badger (MGS-UP)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Badger_MGS_UP.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_eos_r400.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_eos_r400.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
		};
	};
	class VVE_APC_Wheeled_01_mgs_QAV;
	class B_UNGOC_Badger_MGS: VVE_APC_Wheeled_01_mgs_QAV
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Badger (MGS)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Badger_MGS.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
		};
	};
	class VVE_APC_Wheeled_01_apc_QAV;
	class B_UNGOC_Badger_APC: VVE_APC_Wheeled_01_apc_QAV
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Badger (APC)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Badger_APC.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_apc.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_eos_r400.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_tubem.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_apc.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_eos_r400.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_tubem.paa"
				};
			};
		};
	};
	class VVE_APC_Wheeled_01_shorad_QAV;
	class B_UNGOC_Badger_Shorad: VVE_APC_Wheeled_01_shorad_QAV
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Badger (Shorad)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Badger_Shorad.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_apc.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_shorad.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_tows.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_mgs_adds.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_apc.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"\z\t17\addons\Vehicles\Badger\UNGOC_APC_Wheeled_01_shorad.paa"
				};
			};
		};
	};
	class B_Truck_01_fuel_F;
	class B_UNGOC_HEMTT_Fuel: B_Truck_01_fuel_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Fuel)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Fuel.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_fuel.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_fuel.paa"
				};
			};
		};
	};
	class B_Truck_01_box_F;
	class B_UNGOC_HEMTT_Box: B_Truck_01_box_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Box)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Box.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_container.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_container.paa"
				};
			};
		};
	};
	class B_Truck_01_cargo_F;
	class B_UNGOC_HEMTT_Cargo: B_Truck_01_cargo_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Cargo)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Cargo.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo_2.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo_2.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo_2.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo_2.paa"
				};
			};
		};
	};
	class B_Truck_01_medical_F;
	class B_UNGOC_HEMTT_Medical: B_Truck_01_medical_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Medical)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Medical.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01_2.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cover_2.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01_2.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cover_2.paa"
				};
			};
		};
	};
	class B_Truck_01_ammo_F;
	class B_UNGOC_HEMTT_Ammo: B_Truck_01_ammo_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Ammo)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Ammo.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo.paa"
				};
			};
		};
	};
	class B_Truck_01_flatbed_F;
	class B_UNGOC_HEMTT_Flatbed: B_Truck_01_flatbed_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Flatbed)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Flatbed.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo_2.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo_2.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo_2.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo_2.paa"
				};
			};
		};
	};
	class B_Truck_01_Repair_F;
	class B_UNGOC_HEMTT_Repair: B_Truck_01_Repair_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Repair)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Repair.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo.paa",
			"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ammo.paa",
					"\a3\structures_f\data\metal\containers\containers_02_set_co.paa"
				};
			};
		};
	};
	class B_Truck_01_mover_F;
	class B_UNGOC_HEMTT_Mover: B_Truck_01_mover_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Mover.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_mprimer.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_mprimer.paa"
				};
			};
		};
	};
	class B_Truck_01_transport_F;
	class B_UNGOC_HEMTT_Transport: B_Truck_01_transport_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Transport)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Transport.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo.paa"
				};
			};
		};
	};
	class B_Truck_01_covered_F;
	class B_UNGOC_HEMTT_Transport_Covered: B_Truck_01_covered_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="HEMTT (Transport Covered)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_HEMTT_Transport_Covered.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo.paa",
			"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cover.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_01.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_ext_02.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cargo.paa",
					"\z\t17\addons\Vehicles\HEMTT\UNGOC_Truck_01_cover.paa"
				};
			};
		};
	};
	class B_LSV_01_unarmed_F;
	class B_UNGOC_LSV_unarmed: B_LSV_01_unarmed_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="DAGOR (Unarmed)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_LSV_unarmed.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_01.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_02.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_03.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_adds.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_01.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_02.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_03.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_adds.paa"
				};
			};
		};
	};
	class B_LSV_01_AT_F;
	class B_UNGOC_LSV_AT: B_LSV_01_AT_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="DAGOR (AT)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_LSV_AT.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_01.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_02.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_03.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_adds.paa",
			"\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
			"\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_01.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_02.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_03.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_adds.paa",
					"\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
					"\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
				};
			};
		};
	};
	class B_LSV_01_armed_F;
	class B_UNGOC_LSV_armed: B_LSV_01_armed_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="DAGOR (HMG)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_LSV_armed.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_01.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_02.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_03.paa",
			"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_adds.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_01.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_02.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_03.paa",
					"\z\t17\addons\Vehicles\LSV\UNGOC_LSV_adds.paa"
				};
			};
		};
	};
	class CUP_I_SUV_UNO;
	class B_UNGOC_SUV: CUP_I_SUV_UNO
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="SUV";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_SUV.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\SUV\UNGOC_suv_body.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\SUV\UNGOC_suv_body.paa"
				};
			};
		};
	};
	class C_Offroad_01_F;
	class B_UNGOC_Offroad: C_Offroad_01_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Off-Road";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Offroad.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_cover.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		animationList[]=
		{
			"HideBumper1",
			1,
			"HideBumper2",
			0,
			"HideConstruction",
			0,
			"HideDoor3",
			0
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_cover.paa"
				};
			};
		};
	};
	class C_Offroad_01_comms_F;
	class B_UNGOC_Offroad_comms: C_Offroad_01_comms_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Off-Road (Antenna)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Offroad_comms.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_cover.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_cover.paa"
				};
			};
		};
	};
	class C_Offroad_01_covered_F;
	class B_UNGOC_Offroad_hardtop: C_Offroad_01_covered_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Off-Road (Hardtop)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Offroad_hardtop.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
			"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_cover.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_ext.paa",
					"\z\t17\addons\Vehicles\Offroad\UNGOC_offroad_01_cover.paa"
				};
			};
		};
	};
	class C_Van_02_vehicle_F;
	class B_UNGOC_Van_Cargo: C_Van_02_vehicle_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Van (Cargo)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Van_Cargo.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa",
			"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
			"a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
			"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa",
					"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
					"a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
					"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa"
				};
			};
		};
		animationList[]=
		{
			"spare_tyre_hide",
			0,
			"spare_tyre_holder_hide",
			0,
			"ladder_hide",
			0,
			"side_protective_frame_hide",
			0,
			"front_protective_frame_hide",
			0
		};
	};
	class C_Van_02_transport_F;
	class B_UNGOC_Van_Transport: C_Van_02_transport_F
	{
		author="scorboutiko";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="T17_GOC_Faction";
		crew="T17_GOC_Crew";
		displayName="Van (Transport)";
		editorPreview="\UNGOC_Data\preview\B_UNGOC_Van_Transport.JPG";
		hiddenSelectionsTextures[]=
		{
			"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa",
			"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
			"a3\soft_f_orange\van_02\data\van_glass_dirty_CA.paa",
			"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa"
		};
		textureList[]=
		{
			"UNGOC",
			1
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TextureSources
		{
			class UNGOC
			{
				displayName="UNGOC";
				textures[]=
				{
					"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa",
					"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
					"a3\soft_f_orange\van_02\data\van_glass_dirty_CA.paa",
					"\z\t17\addons\Vehicles\Van\UNGOC_van_body.paa"
				};
			};
		};
		animationList[]=
		{
			"spare_tyre_hide",
			0,
			"spare_tyre_holder_hide",
			0,
			"ladder_hide",
			0,
			"side_protective_frame_hide",
			0,
			"front_protective_frame_hide",
			0
		};
	};
};
