class UBP_FPCC_NightVision_C : public UFirstPersonCoreSubObject
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/FirstPersonCoreComponent/SubObjects/BP_FPCC_NightVision.BP_FPCC_NightVision_C:ExecuteUbergraph_BP_FPCC_NightVision'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FRotator CameraRot = FRotator(0, 0, 0);
    double InterpCamRatesToZeroSpeed = 4;
    double InterpCamRatesToTargetSpeed = 4;
    double MinMaxYaw = 45;
    double MinMaxPitch = 45;
    class UCameraComponent* FirstPersonCamera;
    double PitchRate;
    double YawRate;
    double PitchParallaxOffset;
    double YawParallaxOffset;

};