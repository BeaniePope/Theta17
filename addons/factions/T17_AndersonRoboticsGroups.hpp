class T17_AR_Spacer
{
    name = "[T17] Anderson Robotics";

    class T17_AR_Personnel
    {
        name = "Personnel";
        dlc = "T17";

        class T17_AR_ScienceTeam
        {
            name = "Science Team - 2";
            side = 0;
            faction = "T17_AR_Faction";
            rarityGroup = 0.3;
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\aricon_ca.paa";

            class Unit0
            {
                side = 0;
                vehicle = "T17_AR_Technician";
                rank = "CORPORAL";
                position[] = {0,0,0};
            };

            class Unit1
            {
                side = 0;
                vehicle = "T17_AR_Scientist";
                rank = "PRIVATE";
                position[] = {5,-5,0};
            };
        };
    };

    class T17_AR_Combat
    {
        name = "Security Forces";
        dlc = "T17";

        class T17_AR_Fireteam
        {
            name = "Fireteam - 4";
            side = 0;
            faction = "T17_AR_Faction";
            rarityGroup = 0.3;
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\aricon_ca.paa";

            class Unit0
            {
                side = 0;
                vehicle = "T17_AR_Rifleman";
                rank = "CORPORAL";
                position[] = {0,0,0};
            };

            class Unit1
            {
                side = 0;
                vehicle = "T17_AR_Rifleman_2";
                rank = "PRIVATE";
                position[] = {5,-5,0};
            };

            class Unit2
            {
                side = 0;
                vehicle = "T17_AR_Marksman";
                rank = "PRIVATE";
                position[] = {-5,-5,0};
            };

            class Unit3
            {
                side = 0;
                vehicle = "T17_AR_Rifleman";
                rank = "PRIVATE";
                position[] = {10,-5,0};
            };
        };

        class T17_AR_Squad
        {
            name = "Squad - 8";
            side = 0;
            faction = "T17_AR_Faction";
            rarityGroup = 0.3;
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\aricon_ca.paa";

            class Unit0 
            { 
                side = 0; 
                vehicle = "T17_AR_Rifleman"; 
                rank = "SERGEANT"; 
                position[] = {0,0,0}; 
            };
            class Unit1 
            { 
                side = 0; 
                vehicle = "T17_AR_Rifleman_2"; 
                rank = "CORPORAL"; 
                position[] = {5,-5,0}; 
            };
            class Unit2 
            { 
                side = 0; 
                vehicle = "T17_AR_Rifleman"; 
                rank = "PRIVATE"; 
                position[] = {-5,-5,0}; 
            };
            class Unit3 
            { 
                side = 0; 
                vehicle = "T17_AR_Marksman"; 
                rank = "PRIVATE"; 
                position[] = {10,-5,0}; 
            };
            class Unit4 
            { 
                side = 0; 
                vehicle = "T17_AR_AntiTank"; 
                rank = "PRIVATE"; 
                position[] = {-10,-5,0}; 
            };
            class Unit5 
            { 
                side = 0; 
                vehicle = "T17_AR_Rifleman"; 
                rank = "PRIVATE"; 
                position[] = {15,-5,0}; 
            };
            class Unit6 
            { 
                side = 0; 
                vehicle = "T17_AR_Rifleman_2"; 
                rank = "PRIVATE"; 
                position[] = {-15,-5,0}; 
            };
            class Unit7 
            { 
                side = 0; 
                vehicle = "T17_AR_AntiAir"; 
                rank = "PRIVATE"; 
                position[] = {20,-5,0};     
            };
        };

        class T17_AR_Weapons
        {
            name = "Weapons Team - 4";
            side = 0;
            faction = "T17_AR_Faction";
            rarityGroup = 0.3;
            dlc = "T17";
            icon = "\z\t17\addons\main\textures\icons\aricon_ca.paa";

            class Unit0 
            { 
                side = 0; 
                vehicle = "T17_AR_AntiTank"; 
                rank = "CORPORAL"; 
                position[] = {0,0,0}; 
            };
            class Unit1 
            { 
                side = 0; 
                vehicle = "T17_AR_AntiAir"; 
                rank = "PRIVATE"; 
                position[] = {5,-5,0}; 
            };
            class Unit2 
            { 
                side = 0; 
                vehicle = "T17_AR_Marksman"; 
                rank = "PRIVATE"; 
                position[] = {-5,-5,0}; 
            };
            class Unit3 
            { 
                side = 0; 
                vehicle = "T17_AR_Rifleman"; 
                rank = "PRIVATE"; 
                position[] = {10,-5,0}; 
            };
        };
    };
};
