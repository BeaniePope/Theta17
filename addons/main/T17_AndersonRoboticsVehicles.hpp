	// Units
    class B_Soldier_F; // This is the base BI soldier. It provides the basic template so that game knows its dealing with a human soldier.
    class T17_Unit: B_Soldier_F // All of your classnames should have "T17" appended to them. No classnames should be the same. Try to keep them descriptive so it's easy to distinguish when there's a ton of them.
    {
        author = "Queen";  // you (or me, in this instance!)
        displayName = "Operator (Rifleman)"; // The name displayed in the list.
		scope = 2; // Scope should equal 2, 1 is editor only, 0 is it will never show up ingame unless called via script.
		identityTypes[] = 
		{
			"LanguageENG_F",
			"Head_NATO",
			"NoGlasses"
		}; // You can define different faces, voices and facewear here. it will choose a random one from the list for each.
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d"; // the model path for the uniform you want to use is defined here
		uniformClass = "T17_CombatShirt_Item";  // the actual classname for the uniform item that is connected to this here
		side = 2;  // Side is Blufor = 1, Opfor = 0, Indfor = 2, Empty = 8, Civilian = 3 
		editorCategory = "T17_Theta17";  // this is the top level category in the faction list
		editorSubCategory = "T17_MobileTaskForce"; // this is the smaller category
		backpack = ""; // backpack class name here
		hiddenSelections[] = 
        {
            "camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = 
        {
            "\z\t17\addons\main\textures\T17CombatShirt_CO.paa", // I know this path looks weird, it's how hemtt does it. You can extrapolate how to do it yourself, ask if you need help <3
            "\z\t17\addons\main\textures\T17Insignia.paa"
        };
		/*
			HiddenSelections and HiddenSelectionsTextures exist in order to provide a way for you
			to retexture assets. If you aren't retexturing anything, you MUST remove them.
		*/
		weapons[]= // Weapons are defined here. Throw is for grenades, Put is for explosives. remove if you dont want them to use either or.
		{
			"hlc_wp_C7",
			"Throw",
			"Put"
		};
		respawnWeapons[]=  // This defines what weapons they respawn with. Generally, these should be kept the same. Same as above.
		{
			"hlc_wp_C7",
			"Throw",
			"Put"
		}; 
		magazines[]= // Magazines and all other throwables are here. 
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			MAG_5("hlc_30rnd_556x45_EPR")

		};
		respawnMagazines[]= // Ones accessible on respawn.
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			MAG_5("hlc_30rnd_556x45_EPR")
		};
		linkedItems[]= // Additional items given to the units. 
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
    };

	class C_Uniform_FormalSuit_01_base_F;
	class T17_MCD_Suit_Uniform: C_Uniform_FormalSuit_01_base_F
	{
		author = "Queen";
		uniformClass = "T17_MCD_Suit_Item";
		model = "\a3\Characters_F_AoW\Uniforms\FormalSuit_01_F";
		scope = 1;
		side = 0;
		hiddenSelectionsTextures[] = 
		{
			"\z\t17\addons\main\textures\MCD_Suit_CO.paa"
		};
	};

	class SSV_Unit_Android_Military;
	class T17_AR_Uniform: SSV_Unit_Android_Military
	{
		author = "Queen";
		uniformClass = "T17_AR_Uniform_Item";
		scope = 1;
		side = 0;
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\z\t17\addons\main\textures\AR_Uniform_CO.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\z\t17\addons\main\textures\AR_Uniform.rvmat"
		};
	};
	class C_Uniform_Scientist_01_base_F;
	class T17_AR_Scientist_Uniform: C_Uniform_Scientist_01_base_F
	{
		author = "Queen";
		uniformClass = "T17_AR_Scientist_Uniform_Item";
		model = "\a3\Characters_F\Civil\Scientist_01_F.p3d";
		scope = 1;
		side = 0;
		hiddenSelections[] = 
		{
			"id"
		};
		hiddenSelectionsTextures[] = 
		{
			"\z\t17\addons\main\textures\T17_AR_Scientist_ID.paa"
		};
	};
