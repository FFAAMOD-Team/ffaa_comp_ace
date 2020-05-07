class asdg_OpticRail1913;
class ffaa_CowsSlot: asdg_OpticRail1913
{
	class compatibleItems;
};
// compatible items info of the weapons optic slot
class ffaa_CowsSlot_G36 : ffaa_CowsSlot
{
	class compatibleItems : compatibleItems
	{
		ffaa_optic_g36_holo = 1;
        ffaa_optic_Yorris_g36 = 1;
        ffaa_optic_Aco_g36 = 1;
        ffaa_optic_ACO_grn_g36 = 1;
        ffaa_optic_ACO_smg_g36 = 1;
        ffaa_optic_ACO_grn_smg_g36 = 1;
        ffaa_optic_Holosight_g36 = 1;
        ffaa_optic_Holosight_blk_F_g36 = 1;
        ffaa_optic_Holosight_khk_F_g36 = 1;
        ffaa_optic_Holosight_arid_F_g36 = 1;
        ffaa_optic_Holosight_lush_F_g36 = 1;
        ffaa_optic_Holosight_smg_g36 = 1;
        ffaa_optic_Holosight_smg_blk_F_g36 = 1;
        ffaa_optic_Holosight_smg_khk_F_g36 = 1;
	};
};

// shared optic mode of the carry handle optic
class FFAA_G36CarryHandleScope_base {	
	opticsID = 1;
	useModelOptics = 1;
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
	opticsZoomMin = 0.1380;
	opticsZoomMax = 0.1380;
	opticsZoomInit = 0.1380;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	memoryPointCamera = "opticView";
	visionMode[] = {"Normal"};
	opticsFlare = 1;
	opticsDisablePeripherialVision = 1;
	cameraDir = "";
	discreteDistance[] = {200, 400, 600, 800};
	discreteDistanceInitIndex = 0;
};
// shared scripted 2d reticle data
class FFAA_G36CarryHandleScriptedOptic_base {
    reticleTexture = "\ffaa_armas\Reticles\data\g36_cross.paa";
    reticleTextureSize = 0.8518;

    bodyTexture = "\ffaa_armas\Reticles\data\scope_view4_ca.paa";
    bodyTextureNight = "\ffaa_armas\Reticles\data\scope_view4_ca.paa";
    bodyTextureSize = 1.35;
};

class CfgWeapons {
    class Pistol_Base_F;
    class Rifle_Base_F;
    class UGL_F;
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class Launcher;
    class Launcher_Base_F : Launcher {
        class WeaponSlotsInfo;
    };
    // Opticas con Carry Handle (solo kollimator)
    BASECLASS_ACC_CARRY_HANDLE(optic_Yorris,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_ACO_grn,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_Aco,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_ACO_grn_smg,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_ACO_smg,ItemCore,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_Holosight,ItemCore,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_blk_F,optic_Holosight,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_khk_F,optic_Holosight,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_arid_F,optic_Holosight,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_lush_F,optic_Holosight,ACO)
    BASECLASS_ACC_CARRY_HANDLE(optic_Holosight_smg,ItemCore,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_smg_blk_F,optic_Holosight_smg,ACO)
    ACC_CARRY_HANDLE(optic_Holosight_smg_khk_F,optic_Holosight_smg,ACO)
    // Opticas FFAA
    class ffaa_optic_acog: ItemCore  {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_ARCO {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_susat: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
    };
    class ffaa_optic_g36_holo: ItemCore {
		scope = 1;
		author="$STR_FFAA_AUTOR_FFAAMOD";
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_ARCO {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_mg4_g36: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=1;
        ACE_ScopeAdjust_HorizontalIncrement=1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_ARCO {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_enasa: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_lv: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={200};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_3x12x50: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_Mk4_v1: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_optic_Mk4_v2: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
	class ffaa_optic_5x25x56: ItemCore {
        ACE_ScopeAdjust_Vertical[]={ -4, 30 };
        ACE_ScopeAdjust_Horizontal[]={ -6, 6 };
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ffaa_StepScope {
                    discreteDistance[]={100};
                    discreteDistanceInitIndex=0;
                };
            };
        };
    };
    class ffaa_acc_puntero_ir: ItemCore {
        ACE_laserpointer=1;
    };
    // Fusiles
    class ffaa_armas_hkg36e_normal: Rifle_Base_F {
        ACE_overheating_dispersion[]={0,0.001,0.003,0.005};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=177.8;
        ACE_barrelLength=480;
        
        discreteDistance[]={200};
        discreteDistanceInitIndex=0;
        class ffaa_armas_ag36: UGL_F {
            magazines[] += {"ACE_HuntIR_M203"};
        };
		CBA_CarryHandleType = "FFAA_G36_CarryHandle";

        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        baseWeapon = "ffaa_armas_hkg36e_normal";

        class CBA_ScriptedOptic: FFAA_G36CarryHandleScriptedOptic_base {};
        weaponInfoType = "CBA_ScriptedOptic";

        modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";

        class OpticsModes {
			class Scope: FFAA_G36CarryHandleScope_base {};
		};
	};
    class ffaa_armas_hkg36k_normal: ffaa_armas_hkg36e_normal {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 2;
        baseWeapon = "ffaa_armas_hkg36k_normal";
        ACE_barrelTwist=177.8;
        ACE_barrelLength=318;
    };

	// Disable CBA_ScriptedOptic in the following classes
    BASECLASS_WEAPON_CARRY_HANDLE(ffaa_armas_hkag36e,ffaa_armas_hkg36e_normal)
    BASECLASS_WEAPON_CARRY_HANDLE(ffaa_armas_hkag36k,ffaa_armas_hkag36e)
    UNLOAD_WEAPON_CARRY_HANDLE(ffaa_armas_hkg36e_tir,ffaa_armas_hkg36e_normal)
    UNLOAD_WEAPON_CARRY_HANDLE(ffaa_armas_hkg36k_tir,ffaa_armas_hkg36k_normal)
    UNLOAD_WEAPON_CARRY_HANDLE(ffaa_armas_hkag36e_tir,ffaa_armas_hkag36e)
    UNLOAD_WEAPON_CARRY_HANDLE(ffaa_armas_hkag36k_tir,ffaa_armas_hkag36k)
    class ffaa_armas_cetme_l: Rifle_Base_F {
        ACE_barrelTwist=178;
        ACE_barrelLength=400;
    };
    class ffaa_armas_cetme_lc: ffaa_armas_cetme_l {
        ACE_barrelTwist=178;
        ACE_barrelLength=320;
    };
    class ffaa_armas_cetme_c: Rifle_Base_F {
        ACE_barrelTwist=178;
        ACE_barrelLength=450;
    };
    // Fusiles de precision
    class ffaa_armas_aw: Rifle_Base_F {
        ACE_barrelTwist=305;
        ACE_barrelLength=660;
        ACE_Overheating_Dispersion[]={0,-0.001,0.001,0.003};
        ACE_Overheating_SlowdownFactor[]={1,1,1,0.9};
        ACE_Overheating_JamChance[]={0,0.0003,0.0015,0.0075};
    };
    class ffaa_armas_m95: ffaa_armas_aw {
        ACE_overheating_dispersion[]={0,-0.001,0.001,0.003};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=381;
        ACE_barrelLength=736.7;
    };
    class ffaa_armas_aw50: ffaa_armas_m95 {
        ACE_barrelTwist=381;
        ACE_barrelLength=686;
        ACE_Overheating_Dispersion[]={0,-0.001,0.001,0.003};
        ACE_Overheating_SlowdownFactor[]={1,1,1,0.9};
        ACE_Overheating_JamChance[]={0,0.0003,0.0015,0.0075};
    };
    // Ametralladoras
    class ffaa_armas_mg4: Rifle_Base_F {
        ACE_overheating_allowSwapBarrel=1;
        ACE_overheating_dispersion[]={0,0.001,0.002,0.004};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=177.8;
        ACE_barrelLength=480;
    };
    class ffaa_armas_mg3: Rifle_Base_F {
        ACE_overheating_allowSwapBarrel=1;
        ACE_overheating_dispersion[]={0,-0.001,0.001,0.003};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=304.8;
        ACE_barrelLength=533;
    };
    class ffaa_armas_ameli: Rifle_Base_F {
        ACE_overheating_allowSwapBarrel=1;
        ACE_overheating_dispersion[]={0,0.001,0.001,0.003};
        ACE_overheating_slowdownFactor[]={1,1,1,0.9};
        ACE_overheating_jamChance[]={0,0.0003,0.0015,0.0075};
        ACE_barrelTwist=305;
        ACE_barrelLength=400;
    };
    // Lanzadores
    class ffaa_armas_c100: Launcher_Base_F {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "ffaa_armas_c100";
        magazines[]={"CBA_FakeLauncherMagazine"};
        reloadMagazineSound[] = {"",1,1};
        magazineReloadTime = 0.1;
        ACE_overpressure_angle=60;
        ACE_overpressure_range=6;
        ACE_overpressure_damage=0.8;
        ACE_overpressure_priority=1;
        class WeaponSlotsInfo {
            mass = 310; // launcher 100 (4,5 KG) , magazine 210 (9,5 KG)
        };
    };
    class ACE_ffaa_armas_c100_used : ffaa_armas_c100 {
        scope=1;
        scopeArsenal = 1;
        baseWeapon = "ACE_ffaa_armas_c100_used";
        author="$STR_FFAA_AUTOR_FFAAMOD";
        displayName="$STR_FFAA_C100_USED";
        descriptionShort="$STR_FFAA_C100_USED";
        weaponPoolAvailable=0;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
    class ACE_ffaa_armas_c100_ready: ffaa_armas_c100 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
		baseWeapon = "ffaa_armas_c100";
        magazines[] = {"ffaa_mag_c100"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
    class ffaa_armas_c90: Launcher_Base_F {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "ffaa_armas_c90";
        // magazineWell[] = {};
        magazines[] = {"CBA_FakeLauncherMagazine"};
        reloadMagazineSound[] = {"",1,1};
        magazineReloadTime = 0.1;
        ACE_overpressure_angle=30;
        ACE_overpressure_range=2;
        ACE_overpressure_damage=0.6;
        ACE_overpressure_priority=1;
        class WeaponSlotsInfo {
            mass = 150; // launcher 88 (3,9 KG), magazine 62 (2,8 KG)
        };
    };
    class ACE_ffaa_armas_c90_used : ffaa_armas_c90 {
        scope=1;
        scopeArsenal = 1;
        baseWeapon = "ACE_ffaa_armas_c90_used";
        author="$STR_FFAA_AUTOR_FFAAMOD";
        displayName="$STR_FFAA_C90_USED";
        descriptionShort="$STR_FFAA_C90_USED";
        weaponPoolAvailable=0;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
    class ACE_ffaa_armas_c90_ready: ffaa_armas_c90 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "ffaa_armas_c90";
        magazines[] = {"ffaa_mag_c90"};
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 88;
        };
    };
    // SUBFUSILES
    class ffaa_armas_hkmp510a3: Rifle_Base_F {
        ACE_barrelTwist=250;
        ACE_barrelLength=146;
    };
    class ffaa_armas_hkmp5a5: ffaa_armas_hkmp510a3 {
        ACE_barrelTwist=250;
        ACE_barrelLength=225;
    };
    class ffaa_armas_hkmp5pdw: ffaa_armas_hkmp5a5 {
        ACE_barrelTwist=250;
        ACE_barrelLength=148;
    };
    class ffaa_armas_ump: ffaa_armas_hkmp5a5 {
        ACE_barrelTwist=305;
        ACE_barrelLength=200;
    };
    class ffaa_armas_p90: Rifle_Base_F {
        ACE_barrelTwist=231;
        ACE_barrelLength=260;
    };
    // PISTOLAS
    class ffaa_armas_usp: Pistol_Base_F {
        ACE_barrelTwist=406.4;
        ACE_barrelLength=108;
    };
    class ffaa_armas_p226 : ffaa_armas_usp {
        ACE_barrelTwist=248.92;
        ACE_barrelLength=111.76;
    };
    class ffaa_armas_fnp9 : ffaa_armas_usp {
        ACE_barrelTwist=406.4;
        ACE_barrelLength=102;
    };
    // Escopeta
    class ffaa_armas_sdass : Rifle_Base_F {
        ACE_barrelTwist=0;
        ACE_barrelLength=510;
    };
    // Uniformes
    class Uniform_Base;
    class H_HelmetB;
    class HelmetBase;
    class ffaa_pilot_harri_uniforme_item : Uniform_Base {
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.80;
    };
    class ffaa_pilot_her_uniforme_item : Uniform_Base {
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.75;
    };
    // Uniforme piloto hercules desertico heredado del boscoso
    class ffaa_famet_uniforme_item_b : Uniform_Base {
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.75;
    };
    class ffaa_famet_uniforme_item_d : Uniform_Base {
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.75;
    };
    // Cascos
    class ffaa_casco_hercules_piloto : HelmetBase {
        ace_hearing_protection=0.5;
        ace_hearing_lowerVolume=0.75;
    };
    class ffaa_moe_casco_01_1_d : H_HelmetB {
        ace_hearing_protection=0.40;
        ace_hearing_lowerVolume=0.50;
    };
    class ffaa_moe_casco_01_1_b;
    class ffaa_moe_casco_02_1_d : ffaa_moe_casco_01_1_b {
        ace_hearing_protection=0.7;
        ace_hearing_lowerVolume=0.75;
    };
    class ffaa_casco_famet_tigre : H_HelmetB {
        ace_hearing_protection=0.95;
        ace_hearing_lowerVolume=0.80;
    };
};
