
/* ----------------------------------------------------------------------------
Function: btc_fnc_city_cleanUp

Description:
    Delete all ground weapon holder (in range of 150 m), dead bodies (in range of 500 m) and empty group.

Parameters:
    _playableUnits - Players connected. [Array]

Returns:

Examples:
    (begin example)
        [] call btc_fnc_city_cleanUp;
    (end)

Author:
    Giallustio

---------------------------------------------------------------------------- */

params [
    ["_playableUnits", playableUnits, [[]]]
];

btc_groundWeaponHolder = btc_groundWeaponHolder - [objNull];
private _toRemove = ((btc_groundWeaponHolder + (entities "WeaponHolderSimulated")) select {!(_x getVariable ["no_cache", false])}) select {
    private _obj = _x;

    _playableUnits inAreaArray [getPosWorld _obj, 150, 150] isEqualTo []
};

_toRemove append (allDead select {
    private _dead = _x;

    (_playableUnits inAreaArray [getPosWorld _dead, 500, 500]) isEqualTo [] && !(_dead getVariable ["btc_dont_delete", false])
});

_toRemove append (allGroups select {
    units _x select {alive _x} isEqualTo [] &&
    !(
        _x in btc_patrol_active ||
        _x in btc_civ_veh_active
    )
});

_toRemove call CBA_fnc_deleteEntity;
