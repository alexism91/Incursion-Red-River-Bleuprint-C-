class UWRS_SMG_C : public UWeaponRecoilSettings
{
public:
    struct FWeaponRecoilVector RecoilLocation = {
        "RecoilVectorCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/SMG/VC_WEP_Location_Recoil_SMG.VC_WEP_Location_Recoil_SMG'",
        "ProgressionSettings": {
            "Acceleration": 9
        }
    };
    struct FWeaponRecoilVector RecoilRotation = {
        "RecoilVectorCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/Rifle/VC_WEP_Rotation_Recoil_Rifle.VC_WEP_Rotation_Recoil_Rifle'",
        "ProgressionSettings": {
            "Acceleration": 8,
            "Deceleration": 11
        }
    };
    struct FWeaponRecoilNoise RecoilNoise = {
        "LocationTarget": FVector(1, 0,5, 1),
        "LocationProgressionSettings": {
            "Acceleration": 5,
            "Deceleration": 7,
            "AimingMultiplier": 0.1
        },
        "RotationTarget": FRotator(0,5, 2, 1),
        "RotationProgressionSettings": {
            "Acceleration": 4,
            "Deceleration": 6
        }
    };
    struct FWeaponRecoilCamera RecoilCamera = {
        "RecoilCurve": "CurveVector'Test_C/Content/Blueprints/Curves/Handling/Rifle/VC_WEP_Camera_Recoil_Rifle.VC_WEP_Camera_Recoil_Rifle'",
        "ProgressionSettings": {
            "Acceleration": 12,
            "Deceleration": 20
        },
        "CompensationSettings": {
            "Factor": "CurveFloat'Test_C/Content/Blueprints/Curves/Handling/Rifle/FC_WEP_Camera_Recoil_Compensation_Rifle.FC_WEP_Camera_Recoil_Compensation_Rifle'"
        },
        "BigCameraShake": "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/SMG/CS_SMG.CS_SMG_C'",
        "SmallCameraShake": "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Data/WeaponData/SMG/CS_SMG.CS_SMG_C'"
    };
};