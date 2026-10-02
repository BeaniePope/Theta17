class arifle_AKM_F;
class launch_MRAWS_green_F;
class hlc_pistol_P226R;
class hlc_rifle_rpk74n;
class hlc_rifle_awmagnum;
class CUP_srifle_SVD;

class T17_SH_AKM: arifle_AKM_F
{
    scope = 1;
    baseWeapon = "T17_SH_AKM";
};

class T17_SH_MRAWS: launch_MRAWS_green_F
{
    scope = 1;
    baseWeapon = "T17_SH_MRAWS";
};

class T17_SH_P226: hlc_pistol_P226R
{
    scope = 1;
    baseWeapon = "T17_SH_P226";
};

class T17_SH_RPK74: hlc_rifle_rpk74n
{
    scope = 1;
    baseWeapon = "T17_SH_RPK74";
};

class T17_SH_AWM: hlc_rifle_awmagnum
{
    scope = 1;
    baseWeapon = "T17_SH_AWM";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_DMS";
        };
    };
};

class T17_SH_SVD: CUP_srifle_SVD
{
    scope = 1;
    baseWeapon = "T17_SH_SVD";

    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "CUP_optic_PSO_1_1";
        };
    };
};
