class xtdGearModels 
{
    class CfgWeapons 
    {
        class T17_CarrierRigKBT_01 
        {
            label = "Foundation Carrier Rig";
            author = "Scout";
            options[] = {"variant", "squad", "custom"};

            class variant
            {
                label = "Rig Variant";
                values[] = 
                {
                    "Standard",
                    "Light",
                    "Heavy",
                    "Combat",
                    "Command",
                    "Compact",
                    "CQB",
                    "Crew",
                    "Holster",
                    "Recon",
                    "Tactical",
                    "Security"
                };
                class Standard {label="Standard";};
                class Light {label="Light";};
                class Heavy {label="Heavy";};
                class Combat {label="Combat";};
                class Command {label="Command";};
                class Compact {label="Compact";};
                class CQB {label="CQB";};
                class Crew {label="Crew";};
                class Holster {label="Holster";};
                class Recon {label="Recon";};
                class Tactical {label="Tactical";};
                class Security {label="Security";};
            };

            class squad 
            {
                label = "Squad";
                values[] = 
                {
                    "Universal",
                    "Cleaners",
                    "Overseer",
                    "Scholar",
                    "Raven"
                };
                class Universal {label="Black";};
                class Cleaners {label="Cleaners";};
                class Overseer {label="Overseer";};
                class Scholar {label="Scholar";};
                class Raven {label="Raven";};
            };
            class custom 
            {
                label = "Custom";
                values[] = {"None", "Lieb", "Kiwi"};
                class None { label = "Standard"; };
                class Lieb { label = "Lieb"; };
                class Kiwi { label = "Kiwi"; };
            };
        };

        class T17_HelmetHBK 
        {
            label = "Foundation Helmet";
            author = "Scout";
            options[] = {"variant", "role", "custom"};
            class variant
            {
                label = "Attachment";
                values[] = {"Standard", "Ear", "Chops", "Headset"};
                class Standard {label="Standard";};
                class Ear {label="Ear Protectors";};
                class Chops {label="Chops";};
                class Headset {label="Headset";};
            };
            class role 
            {
                label = "Role";
                values[] = {"Standard", "SL", "Medic"};
                class Standard {label="Black";};
                class SL {label="Squad Lead";};
                class Medic {label="Medic";};
            };
            class custom
            {
                label = "Custom";
                values[] = {"Standard", "Puppy", "Queen"};
                class Standard {label="Standard";};
                class Puppy {label="Puppy";};
                class Queen {label="Queen";};
            };
        };

        class T17_Helmet_Heli_01 
        {
            label = "Foundation Heli Helmet";
            author = "Scout";
            options[] = {"role", "visor", "custom"};
            class role 
            {
                label = "Role";
                values[] = {"Pilot", "Crew"};
                class Pilot {label="Pilot";};
                class Crew {label="Crew";};
            };
            class visor 
            {
                label = "Visor";
                values[] = {"Down", "Raised"};
                class Down {label="Down";};
                class Raised {label="Raised";};
            };
            class custom
            {
                label = "Custom";
                values [] = {"Standard", "Nyx"};
                class Standard {label="Standard";};
                class Nyx {label="Nyx";};
            };
        };
        class T17_Beret_01 
        {
            label = "Foundation Beret";
            author = "Scout";
            options[] = {"variant"};
            class variant 
            {
                label = "Variant";
                values[] = {"Standard", "Headset"};
                class Standard {label="Black";};
                class Headset {label="Black, Headset";};
            };
        };
        class T17_Boonie_01 
        {
            label = "Foundation Boonie";
            author = "Scout";
            options[] = {"variant"};
            class variant 
            {
                label = "Variant";
                values[] = {"Standard", "Headset"};
                class Standard {label="Black";};
                class Headset {label="Black, Headset";};
            };
        };
    };
    class CfgGlasses 
    {
        class T17_APR_04 
        {
            label = "Foundation MSA";
            author = "Scout";
            options[] = {"lens"};
            class lens 
            {
                label = "Lens";
                values[] = {"Clear", "Tinted", "Scout"};
                class Clear {label="Clear";};
                class Tinted {label="Tinted";};
                class Scout {label="Scout";};
            };
        };
        class T17_APR_03 
        {
            label = "Foundation M50";
            author = "Scout";
            options[] = {"lens"};
            class lens 
            {
                label = "Lens";
                values[] = {"Clear", "Tinted"};
                class Clear {label="Clear";};
                class Tinted {label="Tinted";};
            };
        };
    };
};
