class CfgMagazines {
    class CA_Magazine;
    class ffaa_556x45_ameli: CA_Magazine {
        ACE_isBelt=1;
    };
    class ffaa_762x51_mg3: CA_Magazine {
        ACE_isBelt=1;
    };
    class ffaa_556x45_mg4: CA_Magazine {
        ACE_isBelt=1;
    };
    class ffaa_mag_c90;
    class ffaa_mag_c100;
	class ACE_PreloadedMissileDummy_C90_FFAA: ffaa_mag_c90 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        displayName = "$STR_ACE_DISPOSABLE_PRELOADEDMISSILEDUMMY";
        picture = "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa";
        weaponPoolAvailable = 0;
        mass = 0;
    };
	class ACE_FiredMissileDummy_C90_FFAA: ACE_PreloadedMissileDummy_C90_FFAA {
		count = 0;
	};
	class ACE_PreloadedMissileDummy_C100_FFAA: ffaa_mag_c100 {
        author="$STR_FFAA_AUTOR_FFAAMOD";
        scope = 1;
        scopeArsenal = 1;
        displayName = "$STR_ACE_DISPOSABLE_PRELOADEDMISSILEDUMMY";
        picture = "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa";
        weaponPoolAvailable = 0;
        mass = 0;
    };
	class ACE_FiredMissileDummy_C100_FFAA: ACE_PreloadedMissileDummy_C100_FFAA {
		count = 0;
	};
};
