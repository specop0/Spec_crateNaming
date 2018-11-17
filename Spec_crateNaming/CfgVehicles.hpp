class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ace_attributes {
                class Attributes {
                    class ace_cargo_displayName {
                        displayName = "Crate Name";
                        tooltip = "Configures the default display name of the crate in ACE cargo. If empty, the classname is used.";
                        property = "ace_cargo_displayName";
                        control = "Edit";

                        expression = "_this setVariable ['%s',_value,true];";
                        defaultValue = "typeOf _this";

                        unique = 0;
                        validate = "none";
                        condition = "1-objectBrain";
                        typeName = "STRING";
                    };
                };
            };
        };
    };
};

