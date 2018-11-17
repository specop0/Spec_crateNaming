class Extended_PreInit_EventHandlers {
    class My_pre_init_event {
        init = "call Spec_crateNaming_fnc_XEH_preInit";
    };
};

class Extended_Init_EventHandlers {
    class StaticWeapon {
        class Spec_crateNaming {
            init = "_this call Spec_crateNaming_fnc_initObject";
        };
    };
    class ThingX {
        class Spec_crateNaming {
            init = "_this call Spec_crateNaming_fnc_initObject";
        };
    };
    class Land_PortableLight_single_F {
        class Spec_crateNaming {
            init = "_this call Spec_crateNaming_fnc_initObject";
        };
    };
};
