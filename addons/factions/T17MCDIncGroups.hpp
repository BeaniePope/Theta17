class T17_MCD_Spacer
{
    name = "[T17] ]Marshal, Carter & Dark Inc.";
    class T17_MCD_PrivateSecurity
    {
        name = "Private Security";
        dlc = "T17";
        class T17_MCD_PrivateSecurity
        {
            name = "Private Security - 2";
            side = 0; 
            faction = "T17_MCD_Faction"; 
            rarityGroup = 0.3; 
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\mcdicon_ca.paa";
            class Unit0
            {
                side = 0;
                vehicle = "T17_MCD_PrivateSecurity";
                rank = "CORPORAL";
                position[] = {0,0,0};
            };
            class Unit1
            {
                side = 0;
                vehicle = "T17_MCD_PrivateSecurity";
                rank = "PRIVATE";
                position[] = {5,-5,0};
            };
        };

        class T17_MCD_LightCombat
        {
            name = "Armed Private Security - 4";
            side = 0; 
            faction = "T17_MCD_Faction"; 
            rarityGroup = 0.3; 
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\mcdicon_ca.paa";
            class Unit0
            {
                side = 0;
                vehicle = "T17_MCD_PrivateSecurity_LightCombat";
                rank = "SERGEANT";
                position[] = {0,0,0};
            };
            class Unit1
            {
                side = 0;
                vehicle = "T17_MCD_PrivateSecurity_LightCombat";
                rank = "CORPORAL";
                position[] = {5,-5,0};
            };
            class Unit2
            {
                side = 0;
                vehicle = "T17_MCD_PrivateSecurity_LightCombatRifleman";
                rank = "PRIVATE";
                position[] = {-5,-5,0};
            };
            class Unit3
            {
                side = 0;
                vehicle = "T17_MCD_PrivateSecurity_LightCombatRifleman";
                rank = "PRIVATE";
                position[] = {10,-5,0};
            };
        };
    };
    class T17_MCD_TRO
    {
        name = "Tactical Response Teams";
        dlc = "T17";

        class T17_MCD_TRO_Fireteam
        {
            name = "TRO - 4";
            side = 0; 
            faction = "T17_MCD_Faction"; 
            rarityGroup = 0.3; 
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\mcdicon_ca.paa";
            class Unit0
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "CORPORAL";
                position[] = {0,0,0};
            };
            class Unit1
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {5,-5,0};
            };
            class Unit2
            {
                side = 0;
                vehicle = "T17_MCD_TRO_RTO";
                rank = "PRIVATE";
                position[] = {-5,-5,0};
            };
            class Unit3
            {
                side = 0;
                vehicle = "T17_MCD_TRO_DMR";
                rank = "PRIVATE";
                position[] = {10,-5,0};
            };
        };

        class T17_MCD_TRO_Squad
        {
            name = "TRO - 6";
            side = 0; 
            faction = "T17_MCD_Faction"; 
            rarityGroup = 0.3; 
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\mcdicon_ca.paa";
            class Unit0
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "SERGEANT";
                position[] = {0,0,0};
            };
            class Unit1
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "CORPORAL";
                position[] = {5,-5,0};
            };
            class Unit2
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {-5,-5,0};
            };
            class Unit3
            {
                side = 0;
                vehicle = "T17_MCD_TRO_MG";
                rank = "PRIVATE";
                position[] = {10,-5,0};
            };
            class Unit4
            {
                side = 0;
                vehicle = "T17_MCD_TRO_DMR";
                rank = "PRIVATE";
                position[] = {-10,-5,0};
            };
            class Unit5
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {15,-5,0};
            };
            class Unit6
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {-15,-5,0};
            };
        };

        class T17_MCD_TRO_Weapons
        {
            name = "TRO - Weapons - 6";
            side = 0; 
            faction = "T17_MCD_Faction"; 
            rarityGroup = 0.3; 
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\mcdicon_ca.paa";
            class Unit0
            {
                side = 0;
                vehicle = "T17_MCD_TRO_RTO";
                rank = "SERGEANT";
                position[] = {0,0,0};
            };
            class Unit1
            {
                side = 0;
                vehicle = "T17_MCD_TRO_MG";
                rank = "PRIVATE";
                position[] = {5,-5,0};
            };
            class Unit2
            {
                side = 0;
                vehicle = "T17_MCD_TRO_MG";
                rank = "PRIVATE";
                position[] = {-5,-5,0};
            };
            class Unit3
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {10,-5,0};
            };
            class Unit4
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {-10,-5,0};
            };
            class Unit5
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {15,-5,0};
            };
            class Unit6
            {
                side = 0;
                vehicle = "T17_MCD_TRO_Rifleman";
                rank = "PRIVATE";
                position[] = {-15,-5,0};
            };
        };
    };
};

