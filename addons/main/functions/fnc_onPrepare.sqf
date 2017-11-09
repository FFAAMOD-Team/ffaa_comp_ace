/*
 * Author: Micky
 * Function for closing doors and retracting the hook for all ffaa helos.
 *
 * Arguments:
 * 0: Helicopter <OBJECT>
 *
 * Return Value:
 * Amount of time to wait before deploying ropes <NUMBER>
 *
 * Example:
 * [_vehicle] call ffaa_comp_ace_main_fnc_onPrepare
 *
 * Public: No
 */

#include "script_component.hpp"
params ["_vehicle"];
private ["_fries", "_waitTime"];

_waitTime = 2;

_vehicle animateSource ["ani_Rampa", 1];
_vehicle animateDoor ["PuertaIzquierda", 1];
_vehicle animateDoor ["PuertaDerecha", 1];

_vehicle setVariable [QGVAR(doorsLocked), true, true];

_fries = _vehicle getVariable [QGVAR(FRIES), objNull];
if !(isNull _fries) then {
    [{
        _this animate ["extendHookRight", 1];
        _this animate ["extendHookLeft", 1];
    }, _fries, 2] call EFUNC(common,waitAndExecute);
    _waitTime = 4;
};

_waitTime
