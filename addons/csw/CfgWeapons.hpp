class CfgWeapons {
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };


    // Tripods:
    class GVAR(m3CarryTripod): Launcher_Base_F {
        class ADDON {
            type = "mount";
            deployTime = 4;
            pickupTime = 4;
            deploy = QGVAR(m3Tripod);
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 440;
        };
        displayName = CSTRING(TripodFolded_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\Tripod_Icon.paa);
    };
    class GVAR(m3CarryTripodLow): GVAR(m3CarryTripod) {
        class ADDON: ADDON {
            deploy = QGVAR(m3TripodLow);
        };
        displayName = CSTRING(TripodLowFolded_displayName);
    };
    class GVAR(carryMortarBaseplate): Launcher_Base_F {
        class ADDON {
            type = "mount";
            deployTime = 4;
            pickupTime = 4;
            deploy = QGVAR(mortarBaseplate);
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 440; // todo
        };
        displayName = CSTRING(mortarBaseplate_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\Tripod_Icon.paa); // todo
    };


    // Weapons:
    class GVAR(staticATCarry): Launcher_Base_F {
        class ADDON {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                GVAR(m3Tripod) = "B_static_AT_F";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 320; // 9M113 Konkurs Weight
        };
        displayName = CSTRING(StaticATBag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticAT_Icon.paa);
    };

    class GVAR(staticAACarry): GVAR(staticATCarry) {
        class ADDON {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                GVAR(m3Tripod) = "B_static_AA_F";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 320;
        };
        displayName = CSTRING(StaticAABag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticAT_Icon.paa);
    };

    class GVAR(staticHMGCarry): Launcher_Base_F {
        class ADDON {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                GVAR(m3Tripod) = "B_HMG_01_high_F";
                GVAR(m3TripodLow) = "B_HMG_01_F";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 840;
        };
        displayName = CSTRING(StaticHMGBag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticHGMG_Icon.paa);
    };

    class GVAR(staticGMGCarry): Launcher_Base_F {
        class ADDON {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                GVAR(m3Tripod) = "B_GMG_01_high_F";
                GVAR(m3TripodLow) = "B_GMG_01_F";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 780;
        };
        displayName = CSTRING(StaticGMGBag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticHGMG_Icon.paa);
    };


    class GVAR(staticMortarCarry): Launcher_Base_F {
        class ADDON {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                GVAR(mortarBaseplate) = "B_Mortar_01_F";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 910; // M252 Mortar Weight
        };
        displayName = CSTRING(StaticMortarBag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticHGMG_Icon.paa);
    };


    /*
    class GVAR(staticAutoHMGCarry): Launcher_Base_F {
        class ADDON {
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo {
                GVAR(m3Tripod) = GVAR(staticAutoHMGWeapon);
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 840;
        };

        displayName = CSTRING(StaticAutoHMGBag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticHGMG_Icon.paa);
    };


    class GVAR(staticAutoGMGCarry): Launcher_Base_F {
        class GVAR(options) {
            assembleTo = QGVAR(staticAutoGMGWeapon);
            baseTripod = QGVAR(m3Tripod);
            type = "weapon";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 780;
        };

        displayName = CSTRING(StaticAutoGMGBag_displayName);
        author = ECSTRING(common,ACETeam);
        scope = 2;
        model = QPATHTOF(data\ACE_CSW_WeaponBag.p3d);
        modes[] = {};
        picture = QPATHTOF(UI\StaticHGMG_Icon.paa);
    };

 */
};
