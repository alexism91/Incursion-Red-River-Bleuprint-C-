class UWRS_SniperRifle_C : public UWeaponRecoilSettings
{
public:
    struct FWeaponRecoilVector RecoilLocation = {
        "RecoilVectorCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/SniperRifle/VC_WEP_Location_Recoil_SniperRifle.VC_WEP_Location_Recoil_SniperRifle'",
        "ProgressionSettings": {
            "Acceleration": 12,
            "Deceleration": 15,
            "AimingMultiplier": 0.4
        }
    };
    struct FWeaponRecoilVector RecoilRotation = {
        "RecoilVectorCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/SniperRifle/VC_WEP_Rotation_Recoil_SniperRifle.VC_WEP_Rotation_Recoil_SniperRifle'",
        "ProgressionSettings": {
            "Acceleration": 12,
            "Deceleration": 15
        }
    };
    struct FWeaponRecoilNoise RecoilNoise = {
        "LocationTarget": FVector(2, 0,5, 2),
        "LocationProgressionSettings": {
            "Deceleration": 7,
            "AimingMultiplier": 0.2
        },
        "RotationTarget": FRotator(0,5, 2, 2),
        "RotationProgressionSettings": {
            "Acceleration": 5,
            "Deceleration": 7
        }
    };
    struct FWeaponRecoilCamera RecoilCamera = {
        "RecoilCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/SniperRifle/VC_WEP_Camera_Recoil_SniperRifle.VC_WEP_Camera_Recoil_SniperRifle'",
        "ProgressionSettings": {
            "Acceleration": 20,
            "Deceleration": 20
        },
        "CompensationSettings": {
            "Speed": 0
        },
        "BigCameraShake": "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/SniperRifle/CS_SniperRifle.CS_SniperRifle_C'",
        "SmallCameraShake": "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/SniperRifle/CS_SniperRifle.CS_SniperRifle_C'"
    };
};