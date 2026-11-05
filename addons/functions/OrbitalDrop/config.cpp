class CfgPatches
{
	class T17_Orbital
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Modules_F",
			"zen_context_menu",
			"zen_attributes",
			"zen_custom_modules",
			"cba_main"
		};
		author="Queen";
		requiredVersion = 2.22;
	};
};
class CfgFunctions
{
	class T17_Orbital
	{
		class resupply
		{
			file="\z\t17\addons\functions\OrbitalDrop\functions";
			class initOrbitalDrop{};
		};
	};
};
