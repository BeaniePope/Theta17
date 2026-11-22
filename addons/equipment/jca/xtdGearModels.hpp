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
                    "Base",
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
                class Base {label="Base";};
                class Light {label="Lite";};
                class Heavy {label="GL Rig";};
                class Combat {label="Combat Rig";};
                class Command {label="Command Rig";};
                class Compact {label="Compact Vest";};
                class CQB {label="CQB Rig";};
                class Crew {label="Crew Vest";};
                class Holster {label="Holster";};
                class Recon {label="Recon Rig";};
                class Tactical {label="Tactical Rig";};
                class Security {label="Security Rig";};
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
                values[] = {"Base", "Ear", "Chops", "Headset"};
                class Base {label="Base";};
                class Ear {label="Ear Protectors";};
                class Chops {label="Chops";};
                class Headset {label="Headset";};
            };
            class role 
            {
                label = "Role";
                values[] = {"Base", "SL", "Medic"};
                class Base {label="Black";};
                class SL {label="Squad Lead";};
                class Medic {label="Medic";};
            };
            class custom
            {
                label = "Custom";
                values[] = {"Base", "Puppy", "Queen"};
                class Base {label="Base";};
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
                values[] = {"Base", "Headset"};
                class Base {label="Black";};
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
                values[] = {"Base", "Headset"};
                class Base {label="Black";};
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
