#define COMPONENT main
#define COMPONENT_BEAUTIFIED FFAA MOD Compatibility addon

#include "\z\ffaa_comp_ace\addons\main\script_mod.hpp"

#include "\z\ace\addons\main\script_macros.hpp"

#define CARRY_HANDLE(classname,kollimator_class) \
	class classname##_g36: classname { \
		author = "$STR_FFAA_AUTOR_FFAAMOD"; \
		scope = 1;\
	\
		class CBA_ScriptedOptic: FFAA_G36CarryHandleScriptedOptic_base {};\
		weaponInfoType = "RscWeaponZeroing";\
	\
		class ItemInfo: ItemInfo {\
			modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";\
	\
			class OpticsModes: OpticsModes {\
				class Scope: FFAA_G36CarryHandleScope_base {};\
				class ##kollimator_class## : ##kollimator_class## {};\
			};\
		};\
	};
