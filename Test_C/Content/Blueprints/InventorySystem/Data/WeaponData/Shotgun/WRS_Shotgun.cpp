class UWRS_Shotgun_C : public UWeaponRecoilSettings
{
public:
    struct FWeaponRecoilVector RecoilLocation = {
        "RecoilVectorCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/Shotgun/VC_WEP_Location_Recoil_Shotgun.VC_WEP_Location_Recoil_Shotgun'",
        "ProgressionSettings": {
            "Acceleration": 15,
            "Deceleration": 15,
            "AimingMultiplier": 0.4
        }
    };
    struct FWeaponRecoilVector RecoilRotation = {
        "RecoilVectorCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/Shotgun/VC_WEP_Rotation_Recoil_Shotgun.VC_WEP_Rotation_Recoil_Shotgun'",
        "ProgressionSettings": {
            "Acceleration": 15,
            "Deceleration": 15
        }
    };
    struct FWeaponRecoilNoise RecoilNoise = {
        "LocationTarget": FVector(2, 0,5, 2),
        "LocationProgressionSettings": {
            "Deceleration": 7,
            "AimingMultiplier": 0.1
        },
        "RotationTarget": FRotator(0,5, 2, 2),
        "RotationProgressionSettings": {
            "Acceleration": 4,
            "Deceleration": 6
        }
    };
    struct FWeaponRecoilCamera RecoilCamera = {
        "RecoilCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/Shotgun/VC_WEP_Camera_Recoil_Shotgun.VC_WEP_Camera_Recoil_Shotgun'",
        "ProgressionSettings": {
            "Acceleration": 20,
            "Deceleration": 20
        },
        "CompensationSettings": {
            "Delay": 0,
            "Speed": 0
        },
        "BigCameraShake": "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/Shotgun/CS_Shotgun.CS_Shotgun_C'",
        "SmallCameraShake": "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/Shotgun/CS_Shotgun.CS_Shotgun_C'"
    };
};