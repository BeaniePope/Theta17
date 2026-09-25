class East // East is Opfor, West is Blufor - Independent is Independent, Civilian is Civilian.
{ 
    name = "$STR_A3_CfgGroups_East0"; // base arma stringtable assocation. used for language localization. just replace east with west and so on.
    side = 0; 

    class T17_Zeus_Spacer 
    {
        name = "[Theta - 17] Chaos Insurgency"; // Spacer for the groups so that they aren't weirdly formatted
        /*
            From here down, this is old unedited config i wrote for a star wars unit. 
            You can use the script I sent you and replace these as needed, or remake them 1 by 1. 
            Make sure to replace all the classnames and the "dlc" tag with ours. If you leave even one erroneous tag, the config will break in game
            Queen is a chud
        */
        class T17_ChaosInsurgency_Groups 
        { 
            dlc = "AWR"; 
            name = "Infantry"; 
            class 80_RA_Sentry 
            { 
                name = "[80th] Sentry"; 
                side = 0; 
                faction = "AWR_Rebel_FactionClass"; 
                rarityGroup = 0.3; 
                dlc = "AWR"; 
                class Unit0 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {0,0,0}; 
                }; 
                class Unit1 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {5,-5,0}; 
                }; 
            }; 
            class 80_RA_RifleSquad 
            { 
                name = "[80th] Rifle Squad"; 
                side = 0; 
                faction = "AWR_Rebel_FactionClass"; 
                rarityGroup = 0.3; 
                dlc = "AWR"; 
                class Unit0 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_SquadLeader"; 
                    rank = "SERGEANT"; 
                    position[] = {0,0,0}; 
                }; 
                class Unit1 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {5,-5,0}; 
                }; 
                class Unit2 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_RTO"; 
                    rank = "PRIVATE"; 
                    position[] = {-5,-5,0}; 
                }; 
                class Unit3 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {10,-5,0}; 
                }; 
                class Unit4 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_AT"; 
                    rank = "PRIVATE"; 
                    position[] = {-10,-5,0}; 
                }; 
                class Unit5 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {15,-5,0}; 
                }; 
                class Unit6 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {-15,-5,0}; 
                }; 
                class Unit7 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_MG"; 
                    rank = "PRIVATE"; 
                    position[] = {20,-5,0}; 
                }; 
                class Unit8 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {-20,-5,0}; 
                }; 
                class Unit9 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Medic"; 
                    rank = "PRIVATE"; 
                    position[] = {-25,-5,0}; 
                }; 
            }; 
            class 80_RA_Fireteam 
            { 
                name = "[80th] Fireteam"; 
                side = 0; 
                faction = "AWR_Rebel_FactionClass"; 
                rarityGroup = 0.3; 
                dlc = "AWR"; 
                class Unit0 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {0,0,0}; 
                }; 
                class Unit1 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {5,-5,0}; 
                }; 
                class Unit2 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {-5,-5,0}; 
                }; 
                class Unit3 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Medic"; 
                    rank = "PRIVATE"; 
                    position[] = {10,-5,0}; 
                }; 
            }; 
            class 80_RA_MachineGunTeam 
            { 
                name = "[80th] Machine Gun Team"; 
                side = 0; 
                faction = "AWR_Rebel_FactionClass"; 
                rarityGroup = 0.3; 
                dlc = "AWR"; 
                class Unit0 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {0,0,0}; 
                }; 
                class Unit1 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_MG"; 
                    rank = "PRIVATE"; 
                    position[] = {5,-5,0}; 
                }; 
                class Unit2 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "PRIVATE"; 
                    position[] = {-5,-5,0}; 
                }; 
            };
            class 80_RA_AntiTank 
            { 
                name = "[80th] Anti-Tank Team"; 
                side = 0; 
                faction = "AWR_Rebel_FactionClass"; 
                rarityGroup = 0.3; 
                dlc = "AWR"; 
                class Unit0 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {0,0,0}; 
                }; 
                class Unit1 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_AT"; 
                    rank = "PRIVATE"; 
                    position[] = {5,-5,0}; 
                }; 
            }; 
            class 80_RA_Sniper 
            { 
                name = "[80th] Sniper Team"; 
                side = 0; 
                faction = "AWR_Rebel_FactionClass"; 
                rarityGroup = 0.3; 
                dlc = "AWR"; 
                class Unit0 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Sniper"; 
                    rank = "SERGEANT"; 
                    position[] = {0,0,0}; 
                }; 
                class Unit1 
                { 
                    side = 0; 
                    vehicle = "AWR_Rebel_Rifleman"; 
                    rank = "CORPORAL"; 
                    position[] = {5,-5,0}; 
                }; 
            }; 
        };
    }; 
};
