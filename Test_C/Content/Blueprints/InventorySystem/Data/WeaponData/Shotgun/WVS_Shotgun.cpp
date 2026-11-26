class UWVS_Shotgun_C : public UEquippableViewmodelSettings
{
public:
    struct FViewmodelLag StandingLag = {
        "Movement": {
            "Location": {
                "Horizontal": FVector(9, 1, -0,5),
                "Vertical": FVector(0, 4, 0)
            },
            "Rotation": {
                "Horizontal": FVector(0,5, -1, 8),
                "Vertical": FVector(1,2, 0, -0,5)
            }
        },
        "Look": {
            "Location": {
                "Horizontal": FVector(3, 2,5, -1),
                "Vertical": FVector(0, 0, 2)
            },
            "Rotation": {
                "Horizontal": FVector(-0,5, 0, -2,5),
                "Vertical": FVector(1, 0, 1)
            }
        },
        "SpringInterpolation": {
            "Stiffness": 1.1,
            "CriticalDampingFactor": 0.6,
            "Mass": 0.01
        }
    };
    struct FViewmodelLag AimingLag = {
        "Movement": {
            "Location": {
                "Horizontal": FVector(0,5, 0, 0),
                "Vertical": FVector(0, 0, 0,2)
            },
            "Rotation": {
                "Horizontal": FVector(0, 0,25, 2)
            }
        },
        "Look": {
            "Location": {
                "Horizontal": FVector(0,5, 0, 0),
                "Vertical": FVector(0, 0, 0,5)
            },
            "Rotation": {
                "Horizontal": FVector(0, 0,75, 0,3),
                "Vertical": FVector(0,75, 0, 0)
            }
        },
        "SpringInterpolation": {
            "Stiffness": 1,
            "CriticalDampingFactor": 0.7,
            "Mass": 0.01
        }
    };
    struct FViewmodelLookOffset LookOffset = {
        "LookOffsetMultiplierLocation": FVector(0, 0, 0,5),
        "LookOffsetSpringInterpolation": {
            "Stiffness": 0.8,
            "CriticalDampingFactor": 0.45,
            "Mass": 0.2
        }
    };
    struct FViewmodelFreeAim FreeAim = {
        "FreeAimLimits": FVector2D(1, 1),
        "FreeAimSpringInterpolation": {
            "Stiffness": 1,
            "CriticalDampingFactor": 0.5,
            "Mass": 0.1
        }
    };
};