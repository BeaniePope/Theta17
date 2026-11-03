class CfgPatches
{
	class T17_Modules
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
		author="Ce, Basipek and Phenosi (Stolen by Scout)";
		requiredVersion = 2.22;
	};
};
class CfgFunctions
{
	class T17_Orbital
	{
		class resupply
		{
			file="\z\t17\addons\functions\OrbitalDrop"
			class initOrbitalDrop{};
		};
	};
};
