#include "script_component.hpp"
#define _ARMA_
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgGlasses.hpp"
#include "Extended_Eventhandlers.hpp"
#include "CfgCarryHandleTypes.hpp"


class CfgPatches {
    // No se usa MACRO para mantener la retrocompatibilidad
    // class ADDON  : ace_ffaa_comp_ace {};
    class ace_ffaa_comp_ace {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[]={"ACE_ffaa_armas_c100_used","ACE_ffaa_armas_c90_used","ACE_ffaa_armas_c100_ready","ACE_ffaa_armas_c100_vosel_ready","ACE_ffaa_armas_c100_used"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]={
			"cba_disposable",
			"ace_rearm",
			"ace_refuel", 
			"ace_repair",
			"ace_common",
			"ace_goggles",
			"ffaa_armas",
			"ffaa_et_pegaso",
			"ffaa_et_pizarro",
			"ffaa_et_leopardo",
			"ffaa_ar_lcm",
			"ffaa_ar_zodiac",
			"rapel_abi",
			"ffaa_et_ch47",
			"ffaa_et_cougar",
			"ffaa_estatico",
			"ffaa_et_tigre",
			"ffaa_et_anibal",
			"ffaa_et_vamtac",
			"ffaa_et_lince",
			"ffaa_et_toa",
			"ffaa_et_searcher",
			"ffaa_ea_reaper",
			"ffaa_ea_hercules",
			"ffaa_nh90",
			"ffaa_equipamiento_uniforms",
			"ffaa_equipamiento_headgear",
			"ffaa_ar_pilotos",
			"ffaa_ea_pilotos",
			"ffaa_et_famet"
		};
        author="$STR_FFAA_AUTOR_FFAAMOD";
        authors[] = {"Mickyleitor"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CBA_DisposableLaunchers {
    ACE_ffaa_armas_c90_ready[] = {"ffaa_armas_c90","ACE_ffaa_armas_c90_used"};
    ACE_ffaa_armas_c100_ready[] = {"ffaa_armas_c100","ACE_ffaa_armas_c100_used"};
	ACE_ffaa_armas_c100_vosel_ready[] = {"ffaa_armas_c100_vosel","ACE_ffaa_armas_c100_used"};
};