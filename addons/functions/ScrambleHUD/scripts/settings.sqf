//CBA General Settings FOR Black Carapace
//T17_SCRAMBLENVG = ["T17_ScrambleGoggles_NVG", "T17_BallisticMaskScrambleGoggles_NVG"];
//T17_SCRAMBLEGOGGLES = ["T17_ScrambleGoggles", "T17_BallisticMaskScrambleGoggles"];
T17_SCRAMBLENVG = [];
T17_SCRAMBLEGOGGLES = [];
////////////////////
//General Settings//
////////////////////


[
    "HOV_START_ON_INIT",
    "CHECKBOX",
    "Start Scripts on Mission Init",
    ["[FOD] Black Carapace - General","I. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_START_ON_INIT_HUD",
    "CHECKBOX",
    "Activate HUD on Mission Init/Respawn",
    ["[FOD] Black Carapace - General","I. General Settings"],
    false,
    0,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_ALLOW_AUSPEX",
    "CHECKBOX",
    "[ALLOW] Auspex for players",
    ["[FOD] Black Carapace - General","I. General Settings"],
    True,
    True,
    {}
] call CBA_fnc_addSetting;


[
    "HOV_SHOW_HUD_OVERLAY",
    "CHECKBOX",
    ["Show Hud Overlay","If this is turned off the HUD wont be displayed."],
    ["[FOD] Black Carapace - General","I. General Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_SYSTEM_MESSAGES",
    "CHECKBOX",
    ["Display System Messages","Allows the HUD to display system messages."],
    ["[FOD] Black Carapace - General","I. General Settings"],
    True,
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_AUSPEX_INTERVAL",
    "SLIDER",
    "Auspex increase/decrease value",
    ["[FOD] Black Carapace - General","I. General Settings"],
    [1,1000,100,0],
    true,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_AUSPEX_BLACKLIST",
    "EDITBOX",
    "Auspex increase/decrease value",
    ["[FOD] Black Carapace - General","I. General Settings"],
    "B_Soldier_VR_F,O_Soldier_VR_F,I_Soldier_VR_F,C_Soldier_VR_F,HeadlessClient_F,ace_spectator_virtual,VirtualSpectator_F,VirtualCurator_F,B_VirtualCurator_F,C_VirtualCurator_F,O_VirtualCurator_F,I_VirtualCurator_F",
    true,
    {
        HOV_AUSPEX_BLACKLIST = HOV_AUSPEX_BLACKLIST splitString ","
    }
] call CBA_fnc_addSetting;

[
    "HOV_DEBUG_MODE",
    "CHECKBOX",
    ["Debug Mode","The debug mode will output various information to the Systchat & RPT file for troubleshooting purposes."],
    ["[FOD] Black Carapace - General","I. General Settings"],
    False,
    nil,
    {}
] call CBA_fnc_addSetting;

////////////////
//HUD Settings//
////////////////


[
    "HOV_HUD_ALPHA",
    "Slider",
    "Helmet Overlay Transparency",
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    [0,1,1,2],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_HUD_COLOR_NVG",
    "COLOR",
    "Helmet Overlay Tint/Transparency in NV",
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    [0.6,0.8,0.6,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_HUD_COLOR_THERMAL",
    "COLOR",
    "Helmet Overlay Tint/Transparency in Thermal",
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    [1,1,1,1],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_INTERIOR_OVERLAY_COLOR",
    "COLOR",
    "Interior Overlay Tint/Transparency",
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    [1.000, 0.710, 0.260, 0.900],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_HUD_HUMAN_SIZE",
    "SLIDER",
    "HUD Human Icon Size",
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    [0.01,10.00,0.30,3],
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_BOOTUP_OVERWRITE_TEXT",
    "CHECKBOX",
    ["Overwrite BootUp Text","The variable you need to define is called HOV_bootText"],
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    False,
    True,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_BOOTUP_INDICATOR_LINE",
    "EDITBOX",
    ["Bootup Indicators Line","Defines the line when the indicators show up. NEEDS TO BE A NUMBER!"],
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    "28",
    True,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_BOOTUP_AUSPEX_LINE",
    "EDITBOX",
    ["Bootup Auspex Line","Defines the line when the auspex system starts. NEEDS TO BE A NUMBER!"],
    ["[FOD] Black Carapace - General","II. HUD Settings"],
    "49",
    True,
    {}
] call CBA_fnc_addSetting;

//////////////
// Textures //
//////////////


[
    "HOV_HUD_INTERIOR_OVERLAY",
    "EDITBOX",
    "Interior Overlay Texture",
    ["[FOD] Black Carapace - General","III. HUD Textures"],
    "\z\T17\addons\functions\SCRAMBLEHUD\textures\T17_interiorOverlay.paa",
    nil,
    {}
] call CBA_fnc_addSetting;

[
    "HOV_HUD_VISOR_EFFECT",
    "EDITBOX",
    "Visor Effect Texture",
    ["[FOD] Black Carapace - General","III. HUD Textures"],
    "\z\T17\addons\functions\SCRAMBLEHUD\textures\HOV_visorEffect.paa",
    nil,
    {}
] call CBA_fnc_addSetting;
