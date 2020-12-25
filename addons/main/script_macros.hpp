
#define BASECLASS_ACC_CARRY_HANDLE(nombreclase,nombrebase,kollimator_class) \
    class nombreclase : nombrebase { \
        author="$STR_A3_Bohemia_Interactive"; \
        scope = 2; \
        class ItemInfo: InventoryOpticsItem_Base_F { \
            class OpticsModes { \
                class kollimator_class ; \
            }; \
        }; \
    }; \
	class ffaa_##nombreclase##_g36: nombreclase { \
		author = "$STR_FFAA_AUTOR_FFAAMOD"; \
		scope = 1;\
	\
		class CBA_ScriptedOptic: FFAA_G36CarryHandleScriptedOptic_base {};\
		weaponInfoType = "RscWeaponZeroing";\
	\
		class ItemInfo : ItemInfo { \
			modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";\
	\
			class OpticsModes: OpticsModes {\
				class Scope: FFAA_G36CarryHandleScope_base {};\
				class kollimator_class : kollimator_class { opticsID = 2; };\
			};\
		};\
	};
    
#define ACC_CARRY_HANDLE(nombreclase,nombrebase,kollimator_class) \
	class ffaa_##nombreclase##_g36: nombrebase { \
		author = "$STR_FFAA_AUTOR_FFAAMOD"; \
		scope = 1;\
	\
		class CBA_ScriptedOptic: FFAA_G36CarryHandleScriptedOptic_base {};\
		weaponInfoType = "RscWeaponZeroing";\
	\
		class ItemInfo : ItemInfo { \
			modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";\
	\
			class OpticsModes: OpticsModes {\
				class Scope: FFAA_G36CarryHandleScope_base {};\
				class kollimator_class : kollimator_class { opticsID = 2; };\
			};\
		};\
	};