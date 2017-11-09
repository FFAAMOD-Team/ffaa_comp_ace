/*
 * Author: Micky
 * Function for opening doors and extending the hook for all ffaa helos.
 *
 * Arguments:
 * 0: Helicopter <OBJECT>
 *
 * Return Value:
 * Amount of time to wait before cutting ropes <NUMBER>
 *
 * Example:
 * [_vehicle] call ffaa_comp_ace_main_fnc_onCut
 *
 * Public: No
 */

#include "script_component.hpp"
params ["_vehicle"];

private _fries = _vehicle getVariable [QGVAR(FRIES), objNull];
if !(isNull _fries) then {
    _fries animate ["extendHookRight", 0];
    _fries animate ["extendHookLeft", 0];
    [{
		_vehicle animateSource ["ani_Rampa", 0];
		_vehicle animateDoor ["PuertaIzquierda", 0];
		_vehicle animateDoor ["PuertaDerecha", 0];
        _this setVariable [QGVAR(doorsLocked), false, true];
    }, _vehicle, 2] call EFUNC(common,waitAndExecute);

    4
} else {
	_vehicle animateSource ["ani_Rampa", 0];
	_vehicle animateDoor ["PuertaIzquierda", 0];
	_vehicle animateDoor ["PuertaDerecha", 0];
    _vehicle setVariable [QGVAR(doorsLocked), false, true];

    2
};
