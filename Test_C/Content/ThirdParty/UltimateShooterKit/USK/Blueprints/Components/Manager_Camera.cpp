class UManager_Camera_C : public UActorComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Camera.Manager_Camera_C:ExecuteUbergraph_Manager_Camera'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_CameraDefaults DefaultCamera = {
        "CameraPerspective_25_2167C07A4FC12C05444E2781325EBC22": Enum_CameraPerspective::NewEnumerator1,
        "Shoulder_21_7500599E428D817FECA91084295F9440": Enum_CameraShoulder::NewEnumerator0,
        "FirstPersonCameraSettings_22_9180F9104D36EC2FF2DC548F26C33081": {
            "PivotOffset_2_78EE35BE49BDC864669055A57D46D239": FVector(-10, 0, -30),
            "CameraOffset_4_133B9FA4407EE4426DD2DB93863F1C40": FVector(10, 0, 30),
            "FieldOfView_7_2622F21940D94470FC08F4B78FE12D14": 110
        },
        "ThirdPersonCameraSettings_8_36C495AF4543BB958B00989A9BC087AC": {
            "PivotOffset_2_72790E924019802BAA433CA0E54E88BE": FVector(-15, 0, -10),
            "CameraOffset_4_561FED784746342673B7FAB74BBFED16": FVector(0, 0, 0),
            "DesiredCameraPosition_6_E53AD9C64B3D7B33E4E443BCA119D33C": FVector(300, 50, 0),
            "FieldOfView_9_3FCE5A084C06FED19BE3E1A9CC18AEDB": 90,
            "CameraLagSettings_12_F5A9BCA84BE2D2A0E5876AA71B2FA2AB": {
                "LagSpeeds_2_EEE6865C43368F824FDDB5899C4FADB4": FVector(4, 4, 1),
                "OffsetClampMin_6_E558AFF54C7C2B7CF11387A663691B63": FVector(50, 0, 75),
                "OffsetClampMax_8_B2D9F1A14A2F62C2C1DDA28928E78C60": FVector(200, 350, 75)
            }
        },
        "ThirdPersonAimCameraSettings_16_4C1F389E408D12523C82FFA7DD8DF338": {
            "PivotOffset_2_72790E924019802BAA433CA0E54E88BE": FVector(0, 0, 0),
            "CameraOffset_4_561FED784746342673B7FAB74BBFED16": FVector(0, 0, 0),
            "DesiredCameraPosition_6_E53AD9C64B3D7B33E4E443BCA119D33C": FVector(125, 45, -5),
            "FieldOfView_9_3FCE5A084C06FED19BE3E1A9CC18AEDB": 70,
            "CameraLagSettings_12_F5A9BCA84BE2D2A0E5876AA71B2FA2AB": {
                "LagSpeeds_2_EEE6865C43368F824FDDB5899C4FADB4": FVector(20, 0, 5),
                "OffsetClampMin_6_E558AFF54C7C2B7CF11387A663691B63": FVector(5, 0, 30),
                "OffsetClampMax_8_B2D9F1A14A2F62C2C1DDA28928E78C60": FVector(5, 0, 30)
            }
        },
        "TransitionIn_26_05A9A7674E63D98D70E243BB12D4A8D2": "CurveFloat'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Data/Curves/Curve_CameraTransitionIn.Curve_CameraTransitionIn'",
        "TransitionOut_27_502085C54D0B7D0413B01196DA10E266": "CurveFloat'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Data/Curves/Curve_CameraTransitionOut.Curve_CameraTransitionOut'"
    };
    struct FRotator TargetCameraRotation = FRotator(0, 0, 0);
    struct FVector TargetCameraLocation = FVector(0, 0, 0);
    struct FTransform SmoothPivotOffset = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector PivotLocation = FVector(0, 0, 0);
    struct FVector DefaultCameraOffset = FVector(0, 0, 0);
    struct FVector DesiredCameraPosition = FVector(0, 0, 0);
    struct FVector DefaultPivotOffset = FVector(0, 0, 0);
    struct FVector CameraLerpTarget = FVector(0, 0, 0);
    struct FStruct_CameraDefaults CurrentCameraSettings = {
        "CameraPerspective_25_2167C07A4FC12C05444E2781325EBC22": Enum_CameraPerspective::NewEnumerator1,
        "Shoulder_21_7500599E428D817FECA91084295F9440": Enum_CameraShoulder::NewEnumerator0,
        "FirstPersonCameraSettings_22_9180F9104D36EC2FF2DC548F26C33081": {
            "PivotOffset_2_78EE35BE49BDC864669055A57D46D239": FVector(-10, 0, -10),
            "CameraOffset_4_133B9FA4407EE4426DD2DB93863F1C40": FVector(10, 0, 10),
            "FieldOfView_7_2622F21940D94470FC08F4B78FE12D14": 100
        },
        "ThirdPersonCameraSettings_8_36C495AF4543BB958B00989A9BC087AC": {
            "PivotOffset_2_72790E924019802BAA433CA0E54E88BE": FVector(0, 0, 0),
            "CameraOffset_4_561FED784746342673B7FAB74BBFED16": FVector(0, 0, 0),
            "DesiredCameraPosition_6_E53AD9C64B3D7B33E4E443BCA119D33C": FVector(250, 70, 10),
            "FieldOfView_9_3FCE5A084C06FED19BE3E1A9CC18AEDB": 90,
            "CameraLagSettings_12_F5A9BCA84BE2D2A0E5876AA71B2FA2AB": {
                "LagSpeeds_2_EEE6865C43368F824FDDB5899C4FADB4": FVector(3, 3, 3),
                "OffsetClampMin_6_E558AFF54C7C2B7CF11387A663691B63": FVector(30, 100, 50),
                "OffsetClampMax_8_B2D9F1A14A2F62C2C1DDA28928E78C60": FVector(125, 0, 50)
            }
        },
        "ThirdPersonAimCameraSettings_16_4C1F389E408D12523C82FFA7DD8DF338": {
            "PivotOffset_2_72790E924019802BAA433CA0E54E88BE": FVector(0, 0, 0),
            "CameraOffset_4_561FED784746342673B7FAB74BBFED16": FVector(0, 0, 0),
            "DesiredCameraPosition_6_E53AD9C64B3D7B33E4E443BCA119D33C": FVector(150, 60, 5),
            "FieldOfView_9_3FCE5A084C06FED19BE3E1A9CC18AEDB": 70,
            "CameraLagSettings_12_F5A9BCA84BE2D2A0E5876AA71B2FA2AB": {
                "LagSpeeds_2_EEE6865C43368F824FDDB5899C4FADB4": FVector(10, 15, 5),
                "OffsetClampMin_6_E558AFF54C7C2B7CF11387A663691B63": FVector(20, 10, 50),
                "OffsetClampMax_8_B2D9F1A14A2F62C2C1DDA28928E78C60": FVector(20, 10, 50)
            }
        },
        "TransitionIn_26_05A9A7674E63D98D70E243BB12D4A8D2": "CurveFloat'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Data/Curves/Curve_CameraTransitionIn.Curve_CameraTransitionIn'",
        "TransitionOut_27_502085C54D0B7D0413B01196DA10E266": "CurveFloat'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Data/Curves/Curve_CameraTransitionOut.Curve_CameraTransitionOut'"
    };
    struct FTimerHandle CameraPositionTimerHandle = {
        "Handle": 0
    };
    struct FVector PivotTarget = FVector(0, 0, 0);
    struct FVector PivotCameraTarget = FVector(0, 0, 0);
     On_Perspective_Changed = ;
    bool CameraActionsEnabled = true;
    class APlayerCameraManager* CameraManager;
    class USkeletalMeshComponent* PawnMesh;
    double TargetCameraFOV;
    double FOVLerpTarget;
    double TP_To_FP_Alpha;
    double ShoulderAlpha;
    double AimAlpha;
    bool IsAimDownsights?;
    Enum_CameraPerspective CameraPerspective;
    Enum_LocomotionType TPPRotationMode;
    class UCurveFloat* Curve_CameraIn;
    class UCurveFloat* Curve_CameraOut;
    bool IsFirstPerson?;
    bool IsAiming?;
    bool PerspectiveChangeInProgress;
    class UPostProcessComponent* PostProcessComponent;
    bool CustomizationMode;

};