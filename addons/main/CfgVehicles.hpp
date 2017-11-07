#define MACRO_REARM_TRUCK_ACTIONS \
        class ACE_Actions: ACE_Actions { \
            class ACE_MainActions: ACE_MainActions { \
                class EGVAR(rearm,TakeAmmo) { \
                    displayName = ECSTRING(rearm,TakeAmmo); \
                    distance = 7; \
                    condition = QUOTE(_this call EFUNC(rearm,canTakeAmmo)); \
                    insertChildren = QUOTE(_target call EFUNC(rearm,addRearmActions)); \
                    exceptions[] = {"isNotInside"}; \
                    showDisabled = 0; \
                    priority = 2; \
                    icon = QPATHTOEF(rearm,ui\icon_rearm_interact.paa); \
                }; \
                class EGVAR(rearm,StoreAmmo) { \
                    displayName = ECSTRING(rearm,StoreAmmo); \
                    distance = 7; \
                    condition = QUOTE(_this call EFUNC(rearm,canStoreAmmo)); \
                    statement = QUOTE(_this call EFUNC(rearm,storeAmmo)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(rearm,ui\icon_rearm_interact.paa); \
                }; \
            }; \
        };

#define MACRO_REFUEL_ACTIONS \
    class ACE_Actions: ACE_Actions { \
        class ACE_MainActions: ACE_MainActions { \
            class EGVAR(refuel,Refuel) { \
                displayName = ECSTRING(refuel,Refuel); \
                distance = 7; \
                condition = "true"; \
                statement = ""; \
                showDisabled = 0; \
                priority = 2; \
                icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                class EGVAR(refuel,TakeNozzle) { \
                    displayName = ECSTRING(refuel,TakeNozzle); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canTakeNozzle)); \
                    statement = QUOTE([ARR_3(_player,_target,objNull)] call EFUNC(refuel,TakeNozzle)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,CheckFuelCounter) { \
                    displayName = ECSTRING(refuel,CheckFuelCounter); \
                    condition = "true"; \
                    statement = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,readFuelCounter)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,CheckFuel) { \
                    displayName = ECSTRING(refuel,CheckFuel); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canCheckFuel)); \
                    statement = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,checkFuel)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,Connect) { \
                    displayName = ECSTRING(refuel,Connect); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canConnectNozzle)); \
                    statement = QUOTE([ARR_2(_player,_target)] call DEFUNC(refuel,connectNozzle)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
                class EGVAR(refuel,Return) { \
                    displayName = ECSTRING(refuel,Return); \
                    condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canReturnNozzle)); \
                    statement = QUOTE([ARR_2(_player,_target)] call DEFUNC(refuel,returnNozzle)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
                }; \
            }; \
        }; \
	};
	

#define MACRO_REARM_REFUEL_TRUCK_ACTIONS \
        class ACE_Actions: ACE_Actions { \
            class ACE_MainActions: ACE_MainActions { \
                class EGVAR(rearm,TakeAmmo) { \
                    displayName = ECSTRING(rearm,TakeAmmo); \
                    distance = 7; \
                    condition = QUOTE(_this call EFUNC(rearm,canTakeAmmo)); \
                    insertChildren = QUOTE(_target call EFUNC(rearm,addRearmActions)); \
                    exceptions[] = {"isNotInside"}; \
                    showDisabled = 0; \
                    priority = 2; \
                    icon = QPATHTOEF(rearm,ui\icon_rearm_interact.paa); \
                }; \
                class EGVAR(rearm,StoreAmmo) { \
                    displayName = ECSTRING(rearm,StoreAmmo); \
                    distance = 7; \
                    condition = QUOTE(_this call EFUNC(rearm,canStoreAmmo)); \
                    statement = QUOTE(_this call EFUNC(rearm,storeAmmo)); \
                    exceptions[] = {"isNotInside"}; \
                    icon = QPATHTOEF(rearm,ui\icon_rearm_interact.paa); \
                }; \
				class EGVAR(refuel,Refuel) { \
					displayName = ECSTRING(refuel,Refuel); \
					distance = 7; \
					condition = "true"; \
					statement = ""; \
					showDisabled = 0; \
					priority = 2; \
					icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
					class EGVAR(refuel,TakeNozzle) { \
						displayName = ECSTRING(refuel,TakeNozzle); \
						condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canTakeNozzle)); \
						statement = QUOTE([ARR_3(_player,_target,objNull)] call EFUNC(refuel,TakeNozzle)); \
						exceptions[] = {"isNotInside"}; \
						icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
					}; \
					class EGVAR(refuel,CheckFuelCounter) { \
						displayName = ECSTRING(refuel,CheckFuelCounter); \
						condition = "true"; \
						statement = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,readFuelCounter)); \
						exceptions[] = {"isNotInside"}; \
						icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
					}; \
					class EGVAR(refuel,CheckFuel) { \
						displayName = ECSTRING(refuel,CheckFuel); \
						condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canCheckFuel)); \
						statement = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,checkFuel)); \
						exceptions[] = {"isNotInside"}; \
						icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
					}; \
					class EGVAR(refuel,Connect) { \
						displayName = ECSTRING(refuel,Connect); \
						condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canConnectNozzle)); \
						statement = QUOTE([ARR_2(_player,_target)] call DEFUNC(refuel,connectNozzle)); \
						exceptions[] = {"isNotInside"}; \
						icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
					}; \
					class EGVAR(refuel,Return) { \
						displayName = ECSTRING(refuel,Return); \
						condition = QUOTE([ARR_2(_player,_target)] call EFUNC(refuel,canReturnNozzle)); \
						statement = QUOTE([ARR_2(_player,_target)] call DEFUNC(refuel,returnNozzle)); \
						exceptions[] = {"isNotInside"}; \
						icon = QPATHTOEF(refuel,ui\icon_refuel_interact.paa); \
					}; \
				}; \
            }; \
        };

class DefaultEventhandlers;
class CfgVehicles {
	class Truck_F;
	class Truck_03_base_F : Truck_F	{
		class ACE_Actions;
	};
    class Tank;
    class Tank_F : Tank {
        class Eventhandlers;
        class Turrets {
            class MainTurret;
        };
    };
    class Air;
    class Helicopter : Air {
        class Turrets;
    };
    class Helicopter_Base_F : Helicopter {
        class Eventhandlers;
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class Eventhandlers;
    };
    // Clases a modificar
    class ffaa_et_ch47_base : Helicopter_Base_H {
		EGVAR(fastroping,enabled) = 1;
        EGVAR(fastroping,ropeOrigins)[] = {"p_rapel1", "p_rapel2","p_rapel3","p_rapel4"};
        EGVAR(fastroping,onCut) = QFUNC(onCut);
        EGVAR(fastroping,onPrepare) = QFUNC(onPrepare);
		class TransportMagazines
		{
			class _xx_ffaa_cuerda
			{
				magazine = "ffaa_cuerda";
				count = 0;
			};
		};
    };
    class ffaa_famet_cougar_base : Helicopter_Base_H {
		EGVAR(fastroping,enabled) = 1;
        EGVAR(fastroping,ropeOrigins)[] = {"p_rapel1", "p_rapel2","p_rapel3","p_rapel4"};
        EGVAR(fastroping,onCut) = QFUNC(onCut);
        EGVAR(fastroping,onPrepare) = QFUNC(onPrepare);
		class TransportMagazines
		{
			class _xx_ffaa_cuerda
			{
				magazine = "ffaa_cuerda";
				count = 0;
			};
		};
    };
    class ffaa_et_pizarro: Tank_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled=1;
                ACE_fcs_minDistance=100;
                ACE_fcs_maxDistance=2400;
                ACE_fcs_distanceInterval=5;
                discreteDistance[]={};
                discreteDistanceInitIndex=0;
            };
        };
    };

    class ffaa_et_leopardo_base: Tank_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled=1;
                ACE_fcs_minDistance=100;
                ACE_fcs_maxDistance=2400;
                ACE_fcs_distanceInterval=5;
                discreteDistance[]={};
                discreteDistanceInitIndex=0;
            };
        };
    };
    class ffaa_famet_tigre_base: Helicopter_Base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                ACE_fcs_enabled=1;
                ACE_fcs_minDistance=200;
                ACE_fcs_maxDistance=9990;
                ACE_fcs_distanceInterval=5;
                discreteDistance[]={};
                discreteDistanceInitIndex=0;
            };
        };
    };
	class ffaa_m250_base : Truck_03_base_F {};
	class ffaa_et_m250_base_blin : ffaa_m250_base {
		class ACE_Actions : ACE_Actions {
            class ACE_MainActions;
        };
	};
	class ffaa_et_m250_combustible_blin: ffaa_et_m250_base_blin {
		transportFuel = 0;
		MACRO_REFUEL_ACTIONS
		ace_refuel_fuelCargo = 8000;
	};
	class ffaa_et_m250_municion_blin : ffaa_et_m250_base_blin {
		transportAmmo = 0;
		MACRO_REARM_TRUCK_ACTIONS
	};
	class ffaa_et_m250_repara_municion_blin : ffaa_et_m250_base_blin {
		transportAmmo = 0;
		transportRepair = 0;
		MACRO_REARM_REFUEL_TRUCK_ACTIONS
	};
	class ffaa_et_pegaso_base : Truck_03_base_F {
		class ACE_Actions : ACE_Actions {
            class ACE_MainActions;
        };
	};
	class ffaa_et_pegaso_combustible: ffaa_et_pegaso_base {
		transportFuel = 0;
		MACRO_REFUEL_ACTIONS
		ace_refuel_fuelCargo = 5000;
	};
	class ffaa_et_pegaso_municion: ffaa_et_pegaso_base {
		transportAmmo = 0;
		MACRO_REARM_TRUCK_ACTIONS
	};
	class ffaa_et_pegaso_repara_municion: ffaa_et_pegaso_base {
		transportAmmo = 0;
		transportRepair = 0;
		MACRO_REARM_REFUEL_TRUCK_ACTIONS
	};
	class B_Soldier_base_F;		
	class ffaa_pilot_harri : B_Soldier_base_F {
		 ACE_GForceCoef = 0.55;
	};
	class ffaa_pilot_her : B_Soldier_base_F {
		 ACE_GForceCoef = 0.8;
	};
	class ffaa_pilot_her_des : B_Soldier_base_F {
		 ACE_GForceCoef = 0.8;
	};
};
