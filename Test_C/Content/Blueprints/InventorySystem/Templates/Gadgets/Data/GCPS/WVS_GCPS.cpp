class UWVS_GCPS_C : public UEquippableViewmodelSettings
{
public:
    struct FViewmodelLag StandingLag = {
        "Movement": {
            "Location": {
                "Horizontal": FVector(2, 0, 0),
                "Vertical": FVector(0, -2, 0)
            },
            "Rotation": {
                "Horizontal": FVector(0,25, -1, 1),
                "Vertical": FVector(1,2, 0, -0,5)
            }
        },
        "Look": {
            "Location": {
                "Horizontal": FVector(1,5, 1, 0),
                "Vertical": FVector(0, 0, 1,5)
            },
            "Rotation": {
                "Horizontal": FVector(0,25, 1, 2),
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
            "CriticalDampingFactor": 0.6,
            "Mass": 0.01
        }
    };
    struct FViewmodelLookOffset LookOffset = {
        "LookOffsetMultiplierLocation": FVector(0, 0, 0),
        "LookOffsetMultiplierRotation": FVector(0, 0, 0),
        "LookOffsetSpringInterpolation": {
            "CriticalDampingFactor": 0.45,
            "Mass": 0.2,
            "TargetVelocityAmount": 0
        }
    };
    struct FViewmodelFreeAim FreeAim = {
        "FreeAimLimits": FVector2D(1, 1),
        "FreeAimInterpolationSpeed": 25,
        "FreeAimSpringInterpolation": {
            "Stiffness": 5,
            "CriticalDampingFactor": 0.5,
            "Mass": 0.001
        }
    };
};