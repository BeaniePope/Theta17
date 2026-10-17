#include "includes.hpp"
class CfgPatches 
{
    class T17_Equipment_Keycards
    {
        author = "Scout";
		name = "T17_Equipment_Keycards";
		url = "";
		requiredAddons[] = 
        {
            "RegalisSCP_CB_main"
        };
		requiredVersion = 0;
		units[] = 
        {
        };
		weapons[] = 
        {
            "SCP_CB_Things_Keycard_C1",
            "SCP_CB_Things_Keycard_C2",
            "SCP_CB_Things_Keycard_C3",
            "SCP_CB_Things_Keycard_C4",
            "SCP_CB_Things_Keycard_C5",
		};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
	class SCP_CB_Things_Keycard_C1: CBA_MiscItem
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        displayName = "Keycard (Level 1)";
        descriptionShort = "";
		model = "\z\t17\addons\equipment\keycards\models\keycard.p3d";
		picture = "\z\t17\addons\equipment\keycards\textures\keycardleveloneui_ca.paa";
		hiddenSelections[] = {"keycard"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\keycards\textures\keycardlevelone_co.paa"};
	    class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass    = 1;
		};
	};
	class SCP_CB_Things_Keycard_C2: SCP_CB_Things_Keycard_C1
	{
        displayName = "Keycard (Level 2)";
        descriptionShort = "";
		picture = "\z\t17\addons\equipment\keycards\textures\keycardleveltwoui_ca.paa";
		model = "\z\t17\addons\equipment\keycards\models\keycard.p3d";
		hiddenSelections[] = {"keycard"};
		hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\keycards\textures\keycardleveltwo_co.paa"};
	};
	class SCP_CB_Things_Keycard_C3: SCP_CB_Things_Keycard_C1
	{
        displayName = "Keycard (Level 3)";
        descriptionShort = "";
		picture = "\z\t17\addons\equipment\keycards\textures\keycardlevelthreeui_ca.paa";
		model = "\z\t17\addons\equipment\keycards\models\keycard.p3d";
		hiddenSelections[] = {"keycard"};
        hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\keycards\textures\keycardlevelthree_co.paa"};
	};
	class SCP_CB_Things_Keycard_C4: SCP_CB_Things_Keycard_C1
	{
        displayName = "Keycard (Level 4)";
        descriptionShort = "";
		picture = "\z\t17\addons\equipment\keycards\textures\keycardlevelfourui_ca.paa";
		model = "\z\t17\addons\equipment\keycards\models\keycard.p3d";
		hiddenSelections[] = {"keycard"};
        hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\keycards\textures\keycardlevelfour_co.paa"};
	};
	class SCP_CB_Things_Keycard_C5: SCP_CB_Things_Keycard_C1
	{
        displayName = "Keycard (Level 5)";
        descriptionShort = "";
		picture = "\z\t17\addons\equipment\keycards\textures\keycardlevelfiveui_ca.paa";
		model = "\z\t17\addons\equipment\keycards\models\keycard.p3d";
		hiddenSelections[] = {"keycard"};
        hiddenSelectionsTextures[] = {"\z\t17\addons\equipment\keycards\textures\keycardlevelfive_co.paa"};
	};
};

class CfgVehicles
{
    class Item_Base_F;
    class SCP_CB_Things_Item_Keycard_C1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Level 1)";
		author = "Scout";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
        icon = "iconObject_1x1";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyItem.p3d";
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C1
			{
				name = "SCP_CB_Things_Keycard_C1";
				count = 1;
			};
		};
	};
    class SCP_CB_Things_Item_Keycard_C2: SCP_CB_Things_Item_Keycard_C1
	{
		displayName = "Keycard (Level 2)";
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C2
			{
				name = "SCP_CB_Things_Keycard_C2";
				count = 1;
			};
		};
	};
    class SCP_CB_Things_Item_Keycard_C3: SCP_CB_Things_Item_Keycard_C1
	{
		displayName = "Keycard (Level 3)";
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C3
			{
				name = "SCP_CB_Things_Keycard_C3";
				count = 1;
			};
		};
	};
    class SCP_CB_Things_Item_Keycard_C4: SCP_CB_Things_Item_Keycard_C1
	{
		displayName = "Keycard (Level 4)";
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C4
			{
				name = "SCP_CB_Things_Keycard_C4";
				count = 1;
			};
		};
	};
    class SCP_CB_Things_Item_Keycard_C5: SCP_CB_Things_Item_Keycard_C1
	{
		displayName = "Keycard (Level 5)";
		class TransportItems
		{
			class SCP_CB_Things_Keycard_C5
			{
				name = "SCP_CB_Things_Keycard_C5";
				count = 1;
			};
		};
	};
};
