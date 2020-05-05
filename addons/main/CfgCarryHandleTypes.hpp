class CBA_CarryHandleTypes {
    class FFAA_G36_CarryHandle {
		ffaa_optic_lv = "ffaa_optic_lv_g36";
		ffaa_optic_enasa = "ffaa_optic_enasa_g36";
		ffaa_optic_holografico = "ffaa_optic_holografico_g36";
		ffaa_optic_Mk4_v1 = "ffaa_optic_Mk4_v1_g36";
		ffaa_optic_Mk4_v2 = "ffaa_optic_Mk4_v2_g36";
		ffaa_optic_5x25x56 = "ffaa_optic_5x25x56_g36";
		ffaa_optic_3x12x50 = "ffaa_optic_3x12x50_g36";
    };
};
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
		ffaa_optic_lv_g36 = 1;
		ffaa_optic_enasa_g36 = 1;
		ffaa_optic_Mk4_v1_g36 = 1;
		ffaa_optic_Mk4_v2_g36 = 1;
		ffaa_optic_5x25x56_g36 = 1;
		ffaa_optic_3x12x50_g36 = 1;

	};
};

// shared optic mode of the carry handle optic
class FFAA_G36CarryHandleScope_base {	
	opticsID = 2;
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
    reticleTextureSize = 1;

    bodyTexture = "\ffaa_armas\Reticles\data\scope_view4_ca.paa";
    bodyTextureNight = "\ffaa_armas\Reticles\data\scope_view4_ca.paa";
    bodyTextureSize = 1.95;
}; 