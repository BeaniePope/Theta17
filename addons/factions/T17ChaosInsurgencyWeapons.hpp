    class hlc_rifle_g36KTac;
    class hlc_pistol_P226R_40Combat;
    class T17_CI_G36KTac: hlc_rifle_g36KTac 
    {
        scope = 1;
        baseWeapon = "T17_CI_G36KTac";
        class LinkedItems 
        {
            class LinkedItemsMuzzle 
            { 
                slot = "MuzzleSlot";  
                item = "hlc_muzzle_556NATO_M42000"; 
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "hlc_acc_DBALPL_Side";
            };
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "hlc_optic_HensoldtZO_Lo";
            };
        };
    };
    class hlc_lmg_MG3KWS_b;
    class T17_CI_MG3KWS: hlc_lmg_MG3KWS_b
    {
        scope = 1;
        baseWeapon = "T17_CI_MG3KWS";
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "hlc_acc_DBALPL_side_FL";
            };
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "hlc_optic_HensoldtZO_Lo";
            };
        };
    };
    class hlc_rifle_awcovert_BL;
    class T17_CI_AWCovert: hlc_rifle_awcovert_BL
    {
        scope = 1;
        baseWeapon = "T17_CI_AWCovert";
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_LRPS";
            };
        };
    };
    class launch_MRAWS_green_F;
    class T17_CI_MRAWS: launch_MRAWS_green_F
    {
        scope = 1;
        baseWeapon = "T17_CI_MRAWS";
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "hlc_acc_DBALPL_side_FL";
            };
        };
    };
    class launch_B_Titan_tna_F;
    class T17_CI_TitanAA: launch_B_Titan_tna_F
    {
        scope = 1;
        baseWeapon = "T17_CI_TitanAA";
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "hlc_acc_DBALPL_side_FL";
            };
        };
    };
    class hlc_rifle_psg1A1;
    class T17_CI_PSG1A1: hlc_rifle_psg1A1
    {
        scope = 1;
        baseWeapon = "T17_CI_PSG1A1";
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "hlc_acc_AIM1D_Generic";
            };
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "hlc_optic_LeupoldM3A_G3";
            };
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "HLC_bipod_UTGShooters";
            };
        };
    };
    class T17_CI_P226R: hlc_pistol_P226R_40Combat  // Shared CI Pistol
    {
        scope = 1;
        baseWeapon = "T17_CI_P226R";
        class LinkedItems 
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "hlc_muzzle_Octane9";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "hlc_acc_DBALPL";
            };
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "HLC_Optic_Romeo1_RX";
            };
        };
    };
