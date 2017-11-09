#define EQUIP_FRIES_ATTRIBUTE class Attributes { \
    class EGVAR(fastroping,equipFRIES) { \
        property = QEGVAR(fastroping,equipFRIES); \
        control = "Checkbox"; \
        displayName = ECSTRING(fastroping,Eden_equipFRIES); \
        tooltip = ECSTRING(fastroping,Eden_equipFRIES_Tooltip); \
        expression = QUOTE([_this] call EFUNC(fastroping,equipFRIES)); \
        typeName = "BOOL"; \
        condition = "objectVehicle"; \
        defaultValue = false; \
    }; \
}

class CfgVehicles {
	// General base classes
	class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };
    class Car_F: Car {};
    class Truck_F: Car_F {};
    class Truck_03_base_F: Truck_F {};
    class Tank: LandVehicle {
        class NewTurret;
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret;
        };
    };
    class Air;
    class Helicopter: Air {
        class Turrets {
            class MainTurret;
        };
    };
    class Helicopter_Base_F: Helicopter {
        class Eventhandlers;
    };
	class Helicopter_Base_H: Helicopter_Base_F {
        class Eventhandlers;
    };
	class Plane_Base_F;
	class UAV;
	// Specific base classes
	class UAV_02_base_F;
	class Boat_Armed_01_base_F;
	class Boat_Transport_02_base_F;
	class MRAP_01_base_F;
	class B_Soldier_base_F;	
	// Boats
	class ffaa_ar_lcm: Boat_Armed_01_base_F {
		EGVAR(refuel,fuelCapacity) = 4880;
	};
	class ffaa_ar_zodiac_hurricane: Boat_Armed_01_base_F {
		EGVAR(refuel,fuelCapacity) = 200;
	};	
	class ffaa_ar_supercat : Boat_Transport_02_base_F {
		EGVAR(refuel,fuelCapacity) = 200;
	};	
	// Air
	class ffaa_et_ch47_base : Helicopter_Base_H {
		EGVAR(fastroping,enabled) = 1;
        EGVAR(fastroping,ropeOrigins)[] = {"p_rapel1", "p_rapel2","p_rapel3","p_rapel4"};
        EGVAR(fastroping,onCut) = QFUNC(onCut);
        EGVAR(fastroping,onPrepare) = QFUNC(onPrepare);
		EGVAR(refuel,fuelCapacity) = 3914;
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
		EGVAR(refuel,fuelCapacity) = 1360;
		class TransportMagazines
		{
			class _xx_ffaa_cuerda
			{
				magazine = "ffaa_cuerda";
				count = 0;
			};
		};
    };
	class ffaa_famet_tigre_base: Helicopter_Base_F {
		EGVAR(refuel,fuelCapacity) = 1420;
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
    class ffaa_ea_hercules_base: Plane_Base_F {
        EGVAR(refuel,fuelCapacity) = 25704;
        EGVAR(cargo,space) = 4;
        EGVAR(cargo,hasCargo) = 1;
    };
	class ffaa_et_searcherIII: UAV {
		GVAR(fuelCapacity) = 50;
	};
	class ffaa_reaper_base: UAV_02_base_F {
		GVAR(fuelCapacity) = 270;
	};
	// Tanks
	class ffaa_et_pizarro: Tank_F {
		EGVAR(refuel,fuelCapacity) = 700;
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
		EGVAR(refuel,fuelCapacity) = 1160;
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
	class ffaa_et_toa : Tank_F {
		EGVAR(refuel,fuelCapacity) = 360;
	};
	// Trucks
	class ffaa_m250_base : Truck_03_base_F {
		EGVAR(refuel,fuelCapacity) = 600;
	};
	class ffaa_et_m250_base_blin : ffaa_m250_base {};
	class ffaa_et_m250_combustible_blin: ffaa_et_m250_base_blin {
        transportFuel = 0;
        EGVAR(refuel,hooks)[] = {{0.2,-3.55,0.5},{-0.2,-3.55,0.5}, {-1.2,0,0.3},{1.2,0,0.3}};
        EGVAR(refuel,fuelCargo) = 10000;
	};
	class ffaa_et_m250_municion_blin : ffaa_et_m250_base_blin {
        transportAmmo = 0;
        EGVAR(rearm,defaultSupply) = 1200;
	};
	class ffaa_et_m250_repara_municion_blin : ffaa_et_m250_base_blin {
        transportAmmo = 0;
        EGVAR(rearm,defaultSupply) = 500;
		transportRepair = 0;
        EGVAR(repair,canRepair) = 1;
	};
	class ffaa_et_pegaso_base : Truck_03_base_F {
		EGVAR(refuel,fuelCapacity) = 500;
	};
	class ffaa_et_pegaso_combustible: ffaa_et_pegaso_base {
        transportFuel = 0;
        EGVAR(refuel,hooks)[] = {{0.2,-2.5,0.3},{-0.2,-2.5,0.3}, {-1,0.2,0.18},{1,0.2,0.18}};
        EGVAR(refuel,fuelCargo) = 8000;
	};
	class ffaa_et_pegaso_municion: ffaa_et_pegaso_base {
        transportAmmo = 0;
        EGVAR(rearm,defaultSupply) = 1000;
	};
	class ffaa_et_pegaso_repara_municion: ffaa_et_pegaso_base {
        transportAmmo = 0;
        EGVAR(rearm,defaultSupply) = 400;
		transportRepair = 0;
        EGVAR(repair,canRepair) = 1;
	};
	// Cars
	class ffaa_et_anibal : Car_F {
		EGVAR(refuel,fuelCapacity) = 78;
	};
	class ffaa_et_rg31_base : MRAP_01_base_F {
		EGVAR(refuel,fuelCapacity) = 302;
	};
	class ffaa_et_vamtac_base : MRAP_01_base_F {
		EGVAR(refuel,fuelCapacity) = 95;
	};
	// Soldiers
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
