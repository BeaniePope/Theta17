class hlc_pistol_P229R_357Elite;
class hlc_smg_mp5k_PDW;
class hlc_rifle_CQBR;
class hlc_wp_SCARH_CQC_Blk;
class hlc_wp_SCARL_STD_300AAC_Blk;
class hlc_lmg_minimi;

class T17_MCD_P229: hlc_pistol_P229R_357Elite
{
    scope = 1;
    baseWeapon = "T17_MCD_P229";

    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "muzzle_snds_acp";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "hlc_acc_DBALPL_FL";
        };
    };
};


class T17_MCD_MP5K: hlc_smg_mp5k_PDW
{
    scope = 1;
    baseWeapon = "T17_MCD_MP5K";

    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "hlc_muzzle_Agendasix";
        };
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_mrds";
        };
    };
};

class T17_MCD_CQBR: hlc_rifle_CQBR
{
    scope = 1;
    baseWeapon = "T17_MCD_CQBR";

    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "hlc_muzzle_556NATO_M42000";
        };
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_Holosight_blk_F";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "hlc_grip_PMVFG_Black";
        };
    };
};

class T17_MCD_SCARH: hlc_wp_SCARH_CQC_Blk
{
    scope = 1;
    baseWeapon = "T17_MCD_SCARH";

    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "hlc_muzzle_300blk_KAC";
        };
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_MRCO";
        };
    };
};


class T17_MCD_SCARL: hlc_wp_SCARL_STD_300AAC_Blk
{
    scope = 1;
    baseWeapon = "T17_MCD_SCARL";

    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "hlc_muzzle_FSC30";
        };
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "hlc_optic_VOMZ3d";
        };
    };
};

class T17_MCD_MINIMI: hlc_lmg_minimi
{
    scope = 1;
    baseWeapon = "T17_MCD_MINIMI";
};

