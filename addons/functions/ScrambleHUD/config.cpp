class CfgPatches
{
	class T17_ScrambleHUD
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Characters_F",
			"cba_main",
			"A3_Ui_F",
			"A3_Data_F",
			"A3_Functions_F",
			"A3_UiFonts_F"
		};
		requiredVersion = 2.22;
	};
};

class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class T17_ScrambleHUD
			{
				main_addon="T17_Main";
				class Dependencies
				{
					CBA[]=
					{
						"cba_main",
						{3,5,0},
						"true"
					};
				};
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class HOV_blackCarapace_settings_init
	{
		init="execVM '\z\T17\addons\functions\SCRAMBLEHUD\scripts\settings.sqf';";
	};
	class HOV_blackCarapace_functions_init
	{
		init="execVM '\z\T17\addons\functions\SCRAMBLEHUD\scripts\functions.sqf';";
	};
};
class Extended_PostInit_EventHandlers
{
	class HOV_blackCarapace_script_init
	{
		init="execVM '\z\T17\addons\functions\SCRAMBLEHUD\scripts\init.sqf';";
	};
};
class RscTitles
{
	class RscProgress
	{
		type=8;
		style=0;
		shadow=2;
		colorFrame[]={0,0,0,1};
		colorBar[]=
		{
			"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
			"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
			"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
			"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
		};
		texture="\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
		w=0.25;
		h=0.029999999;
	};
	class RscStructuredText
	{
		deletable=0;
		fade=0;
		access=0;
		type=13;
		idc=-1;
		style=0;
		colorText[]={1,1,1,1};
		class Attributes
		{
			font="RobotoCondensed";
			color="#ffffff";
			colorLink="#D09B43";
			align="left";
			shadow=1;
		};
		x=0;
		y=0;
		h=0.035;
		w=0.1;
		text="";
		size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		shadow=1;
	};
	class RscPicture
	{
		access=0;
		idc=-1;
		type=0;
		style=48;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,1};
		font="PuristaLight";
		sizeEx=1;
		lineSpacing=0;
		text="";
		fixedWidth=0;
		shadow=0;
	};
	class HOV_HUD_RscPicture
	{
		idc=-1;
		type=0;
		style=48;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,0.89999998};
		font="PuristaLight";
		sizeEx=0;
		lineSpacing=0;
		text="";
		fixedWidth=0;
		shadow=0;
		x=0;
		y=0;
		w=0.2;
		h=0.15000001;
	};
	class Default
	{
		idd=-1;
		fadein=0;
		fadeout=0;
		duration=0;
	};
	class RscControlsGroup
	{
		deletable=0;
		fade=0;
		class VScrollbar
		{
			color[]={0,0,0,0};
			width=0.021;
			autoScrollEnabled=0;
		};
		class HScrollbar
		{
			color[]={0,0,0,0};
			height=0.028000001;
		};
		class Controls
		{
		};
		type=15;
		idc=-1;
		x=0;
		y=0;
		w=1;
		h=1;
		shadow=0;
		style=16;
	};
	class RscText
	{
		deletable=0;
		fade=0;
		access=0;
		type=0;
		idc=-1;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,1};
		text="";
		fixedWidth=0;
		x=0;
		y=0;
		h=0.037;
		w=0.30000001;
		style=2;
		shadow=0;
		colorShadow[]={0,0,0,0};
		font="RobotoCondensed";
		SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		linespacing=1;
		tooltipColorText[]={1,1,1,1};
		tooltipColorBox[]={1,1,1,1};
		tooltipColorShade[]={0,0,0,0.64999998};
	};
	class HOV_OVERLAY_BASE
	{
		idd=2077004;
		fadeIn=0;
		fadeOut=0;
		duration=9.9999998e+010;
		x="safeZoneX";
		y="safeZoneY";
		w="safeZoneW";
		h="safeZoneH";
		onLoad="uiNamespace setVariable ['HOV_OVERLAY_BASE',_this select 0]";
	};
	class HOV_INDICATOR_BASE
	{
		idd=2077005;
		fadeIn=0;
		fadeOut=0;
		duration=9.9999998e+010;
		x="safeZoneX";
		y="safeZoneY";
		w="safeZoneW";
		h="safeZoneH";
		onLoad="uiNamespace setVariable ['HOV_INDICATOR_BASE',_this select 0]";
	};
	class HOV_HUD_BOOTUP
	{
		idd=9999;
		name="HOV_gui";
		onLoad="uiNamespace setVariable ['HOV_HUD_BOOTUP', _this select 0];";
		unload="uiNamespace setVariable ['HOV_HUD_BOOTUP', nil];";
		movingEnable=1;
		fadein=0;
		fadeout=0;
		duration=100000;
		class Controls
		{
			class HOV_BOOTUP_CONTROLGROUP: RscControlsGroup
			{
				idc=110863;
				x="0.0101562 * safezoneW + safezoneX";
				y="0.049 * safezoneH + safezoneY";
				w="0.599062 * safezoneW";
				h="1.374 * safezoneH";
				class Controls
				{
					class HOV_BOOTUP_TEXTFIELD: RscStructuredText
					{
						idc=10863;
						text="";
						x="-5.40912e-007 * safezoneW";
						y="0 * safezoneH";
						w="1 * safezoneW";
						h="3 * safezoneH";
						colorText[]={0,0,0,1};
						style=2;
						colorBackground[]={0,0,0,0};
						shadow=0;
						size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
						class Attributes
						{
							font="RobotoCondensed";
							color="#000000";
							colorLink="#D09B43";
							align="left";
							valign="bottom";
							shadow=0;
							shadowColor="#ffffff";
						};
					};
				};
			};
		};
	};
	
};

class CfgSounds
{
	class hov_typing_1
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\typing_1.ogg",
			0.30000001,
			1
		};
		titles[]={};
	};
	class hov_threat_detector
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\threat_detector.ogg",
			0.30000001,
			1
		};
		titles[]={};
	};
	class hov_glitch
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\hud_glitch.ogg",
			0.5,
			1
		};
		titles[]={};
	};
	class hov_glitch_short
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\hud_glitch_short_2.ogg",
			0.5,
			1
		};
		titles[]={};
	};
	class HOV_Alarm_01
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\HOV_Alarm_01.ogg",
			1,
			1
		};
		titles[]={};
	};
	class HOV_Alarm_02
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\HOV_Alarm_02.ogg",
			1,
			1
		};
		titles[]={};
	};
	class HOV_Alarm_03
	{
		sound[]=
		{
			"\z\T17\addons\functions\SCRAMBLEHUD\sounds\HOV_Alarm_03.ogg",
			1,
			1
		};
		titles[]={};
	};
};
