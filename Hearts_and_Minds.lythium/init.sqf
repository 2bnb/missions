{
    _x addEventHandler ["CuratorObjectPlaced", { _this remoteExec ["Requiem_fnc_object_queue_insert", 2]; }];
    _x addEventHandler ["CuratorObjectEdited", { _this remoteExec ["Requiem_fnc_object_queue_update", 2]; }];
    _x addEventHandler ["CuratorMarkerPlaced", { _this remoteExec ["Requiem_fnc_marker_queue_insert", 2]; }];
    _x addEventHandler ["CuratorMarkerEdited", { _this remoteExec ["Requiem_fnc_marker_queue_update", 2]; }];
    } forEach AllCurators;

[] remoteExec ["Requiem_fnc_mrp", 2];
[] remoteExec ["Requiem_fnc_initmarkers", 2];



enableSaving [false,false];

if (hasInterface) then {btc_intro_done = [] spawn btc_fnc_intro;};

call compile preprocessFile "core\def\mission.sqf";
call compile preprocessFile "define_mod.sqf";

if (isServer) then {
    call compile preprocessFile "core\init_server.sqf";
};

call compile preprocessFile "core\init_common.sqf";

if (!isDedicated && hasInterface) then {
    call compile preprocessFile "core\init_player.sqf";
};

if (!isDedicated && !hasInterface) then {
    call compile preprocessFile "core\init_headless.sqf";
};

[] execVM "Gulag.sqf";
[]execVM "eos\OpenMe.sqf";
