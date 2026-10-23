class CUP_BOX_ACR_Wps_F;
class T17_Scholar_Arsenal: CUP_BOX_ACR_Wps_F
{
    displayName = "[Theta - 17] Scholar Arsenal";
    author = "80th Mod Team";
    ace_dragging_canDrag = 1;
    ace_dragging_dragPosition[] = {0, 1.5, 0};
    ace_dragging_dragDirection = 0;
    ace_dragging_ignoreWeight = 1;

    ace_dragging_canCarry = 1;
    ace_dragging_carryPosition[] = {0, 1.5, 1};
    ace_dragging_carryDirection = 90;
    ace_dragging_ignoreWeightCarry = 1;

    ace_cargo_size = 1;
    ace_cargo_canLoad = 1;
    ace_cargo_noRename = 1;
    ace_cargo_blockUnloadCarry = 1;
    editorCategory="T17_Props";
    editorSubcategory="T17_Arsenals";
    maximumLoad=10000;
    class EventHandlers
    {
        PostInit = "params ['_entity']; [_entity, 'Scholar'] call T17_fnc_initArsenal";
    };
};
class T17_Cleaners_Arsenal: T17_Scholar_Arsenal
{
    displayName = "[Theta - 17] Cleaners Arsenal";
    class EventHandlers
    {
        PostInit = "params ['_entity']; [_entity, 'Cleaners'] call T17_fnc_initArsenal";
    };
};
class T17_Overseer_Arsenal: T17_Scholar_Arsenal
{
    displayName = "[Theta - 17] Overseer Arsenal";
    class EventHandlers
    {
        PostInit = "params ['_entity']; [_entity, 'Overseer'] call T17_fnc_initArsenal";
    };
};

class T17_Raven_Arsenal: T17_Cleaners_Arsenal
{
    displayName = "[Theta - 17] Raven Arsenal";
    class EventHandlers
    {
        PostInit = "params ['_entity']; [_entity, 'Raven'] call T17_fnc_initArsenal";
    };
};
