private _cfgWeapons = configFile >> "CfgWeapons";
private _cfgVehicles = configFile >> "CfgVehicles";
T17_ScholarEquipmentArr = []; 
T17_CleanersEquipmentArr = []; 
T17_OverseerEquipmentArr = [];
T17_RavenEquipmentArr = [];  
T17_UniversalEquipmentArr = [];
{
    if (getNumber (_x >> "t17_scholar") isEqualTo 1) then {
        T17_ScholarEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_cleaners") isEqualTo 1) then {
        T17_CleanersEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_overseer") isEqualTo 1) then 
    {
        T17_OverseerEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_raven") isEqualTo 1) then 
    {
        T17_RavenEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_universal") isEqualTo 1) then 
    {
        T17_UniversalEquipmentArr pushBackUnique (configName _x);
    };
} forEach ("true" configClasses _cfgWeapons); 

{
    if (getNumber (_x >> "t17_scholar") isEqualTo 1) then {
        T17_ScholarEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_cleaners") isEqualTo 1) then {
        T17_CleanersEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_overseer") isEqualTo 1) then 
    {
        T17_OverseerEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_raven") isEqualTo 1) then 
    {
        T17_RavenEquipmentArr pushBackUnique (configName _x);
    };
    if (getNumber(_x >> "t17_universal") isEqualTo 1) then 
    {
        T17_UniversalEquipmentArr pushBackUnique (configName _x);
    };
} forEach ("true" configClasses _cfgWeapons); 
