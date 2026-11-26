class APC_MenuController_C : public AIRRPlayerController
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/PC_MenuController.PC_MenuController_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/PC_MenuController.PC_MenuController_C:ExecuteUbergraph_PC_MenuController'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_VideoSave VideoSettings = {
        "MotionBlur_1_53A47823444B5F8C89C0E09232B28731": false,
        "Fullscreen_37_203FFF0E4CF4599D524C9CA892A7F59A": EWindowMode::Fullscreen,
        "Resolution_24_14BBD2C940DB5E2403C6B7876D027365": FName("1920x1080"),
        "VisualFideiltyQuality_66_3B7A09014FE06C18AEEB6896C8551340": 2,
        "AntiAliasingMethod_39_FE6AE93F4AB3C0A0EB92B0B4B3A5934F": Enum_AntiAliasingMethod::NewEnumerator2,
        "ScreenPercentage_25_3567E19246AA2DAF15EA37914D7055AA": 100,
        "UpscalingQuality_63_688676CD4760E57C1837F59FA687279C": 3,
        "RayReconstruction_77_4A5595B6483D793BA6028DAB0E5BB387": false,
        "MaxFPS_28_AD87DDEA4788A81104C1F787D03CFFD4": FName("60"),
        "Vsync_29_A5422A974A3090110B28CE82DAF96555": true,
        "FOV_36_1D0A14DD4DD611117F8E65A1C56AD2C9": 90,
        "GlobalIlluminationMethod_45_5E956F8F46424DEE74D27DAA805293B7": FName("DEFAULT"),
        "FrameGeneration_80_B3D20A0F4D3807851A4C2BBEB76B97BB": FName("OFF"),
        "NvidiaReflex_82_55DC47584D0EAEB9BCD24396AC1B35E8": FName("OFF"),
        "LumenScalability_57_7B280D2447D0D397CD4BAA8D60986ECE": FName("LOW"),
        "ColorVisionDeficiency_93_41F1AFD14EEBA203691F459D4082519A": FName("Standard"),
        "ColorVisionDeficiencyStrength_96_518ADDAB4BF9DF60C21E78854ED02E2C": 1,
        "Saturation_83_67136840405594AFBFBF90B5AD8BFF50": 1,
        "Gamma_4_C9EAC68848EB5D7D2B051595C3B0332C": 1,
        "Contrast_89_31918EAD4035E0602EADA481FC0A3C54": 1,
        "Sharpness_75_422306454C065875CDF61A8F3E6A36C8": 1
    };
    FName CameraTag = FName("CameraMenu");
    class UIRRPlayerDangerComponent* DangerComponent = "IRRPlayerDangerComponent'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/PC_MenuController.Default__PC_MenuController_C:DangerComponent'";
    class UIRRGroundHoldComponent* GroundHoldComponent = "IRRGroundHoldComponent'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/PC_MenuController.Default__PC_MenuController_C:GroundHoldComponent'";
    bool bAutoManageActiveCameraTarget = false;
    bool bShowMouseCursor = true;
    class USceneComponent* TransformComponent = "SceneComponent'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/PC_MenuController.Default__PC_MenuController_C:TransformComponent0'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/PC_MenuController.Default__PC_MenuController_C:TransformComponent0'";
    class UWB_EmailLog_C* QuestLog;

};