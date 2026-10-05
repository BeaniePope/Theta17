class CUP_arifle_G3A3_ris;
class hlc_rifle_PSG1A1_RIS;
class CUP_arifle_HK417_12;
class hlc_lmg_MG3_optic;
class CUP_srifle_m110_kac_black;
class hlc_smg_mp5a2;
class hlc_smg_mp5a3_tac;
class CUP_smg_MP7;
class CUP_launch_Mk153Mod0;
class CUP_launch_FIM92Stinger_Loaded;

class T17_GOC_G3A3: CUP_arifle_G3A3_ris
{
    scope = 1;
    baseWeapon = "T17_GOC_G3A3";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_Elcan_SpecterDR_black";
        };
    };
};

class T17_GOC_PSG1A1: hlc_rifle_PSG1A1_RIS
{
    scope = 1;
    baseWeapon = "T17_GOC_PSG1A1";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
};

class T17_GOC_HK417: CUP_arifle_HK417_12
{
    scope = 1;
    baseWeapon = "T17_GOC_HK417";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_Elcan_SpecterDR_black";
        };
    };
};

class T17_GOC_MG3: hlc_lmg_MG3_optic
{
    scope = 1;
    baseWeapon = "T17_GOC_MG3";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_Elcan_SpecterDR_black";
        };
    };
};

class T17_GOC_M110: CUP_srifle_m110_kac_black
{
    scope = 1;
    baseWeapon = "T17_GOC_M110";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_Elcan_SpecterDR_black";
        };
    };
};

class T17_GOC_P226: hlc_pistol_P226R
{
    scope = 1;
    baseWeapon = "T17_GOC_P226";
};

class T17_GOC_MP5A2: hlc_smg_mp5a2
{
    scope = 1;
    baseWeapon = "T17_GOC_MP5A2";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_Yorris";
        };
    };
};

class T17_GOC_MP5A3: hlc_smg_mp5a3_tac
{
    scope = 1;
    baseWeapon = "T17_GOC_MP5A3";
};

class T17_GOC_MP7: CUP_smg_MP7
{
    scope = 1;
    baseWeapon = "T17_GOC_MP7";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_AC11704_Black";
        };
    };
};

class T17_GOC_Mk153: CUP_launch_Mk153Mod0
{
    scope = 1;
    baseWeapon = "T17_GOC_Mk153";
};

class T17_GOC_Stinger: CUP_launch_FIM92Stinger_Loaded
{
    scope = 1;
    baseWeapon = "T17_GOC_Stinger";
};
