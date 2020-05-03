class CfgAmmo {
    class BulletBase;
    class GrenadeHand;
    class ffaa_127x99_he: BulletBase {
        ACE_caliber=12.954;
        ACE_bulletLength=58.674;
        ACE_bulletMass=41.9256;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[]={0.67};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={900};
        ACE_barrelLengths[]={736.6};
    };
    class ffaa_127x99_ap: BulletBase {
        ACE_caliber=12.954;
        ACE_bulletLength=58.674;
        ACE_bulletMass=41.9904;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[]={0.67};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={900};
        ACE_barrelLengths[]={736.6};
    };
    class ffaa_B_9x19_Ball: BulletBase
	{
		ACE_caliber = 9.017;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.165};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {340,370,400};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
    class ffaa_granada_m_alhambra: GrenadeHand {
        ace_frag_metal=296;
        ace_frag_charge=180;
        ace_frag_gurney_c=3500;
        ace_frag_gurney_k="1/2";
    };
};
