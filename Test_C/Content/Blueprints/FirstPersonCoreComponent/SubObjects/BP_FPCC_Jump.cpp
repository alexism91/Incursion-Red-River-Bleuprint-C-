class UBP_FPCC_Jump_C : public UFirstPersonJump
{
public:
    float JumpGate = 1;
    struct FGameplayTag JumpGateTag = {
        "TagName": FName("Input.Block.Jump")
    };
    float Intensity = 1.25;
    class UBlueprintGeneratedClass* LandCameraShake = "BlueprintGeneratedClass'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/TestPlayer/AC_HeadBob.AC_HeadBob_C'";
    class UCurveVector* TLineViewmodelLocationJump = "CurveVector'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/Animation/VC_LPSP_FP_PCH_Jump_Location.VC_LPSP_FP_PCH_Jump_Location'";
    class UCurveVector* TLineViewmodelRotationJump = "CurveVector'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/Animation/VC_LPSP_FP_PCH_Jump_Rotation.VC_LPSP_FP_PCH_Jump_Rotation'";
    class UCurveVector* TLineViewmodelLocationFall = "CurveVector'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/Animation/VC_LPSP_FP_PCH_Fall_Location.VC_LPSP_FP_PCH_Fall_Location'";
    class UCurveVector* TLineViewmodelRotationFall = "CurveVector'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/Animation/VC_LPSP_FP_PCH_Fall_Rotation.VC_LPSP_FP_PCH_Fall_Rotation'";
    class UCurveVector* TLineViewmodelLocationLanding = "CurveVector'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/Animation/VC_LPSP_FP_PCH_Land_Location.VC_LPSP_FP_PCH_Land_Location'";
    class UCurveVector* TLineViewmodelRotationLanding = "CurveVector'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/Animation/VC_LPSP_FP_PCH_Land_Rotation.VC_LPSP_FP_PCH_Land_Rotation'";
    struct FSpringInterpVector SpringSettings = {
        "Stiffness": 1,
        "CriticalDampingFactor": 0.6,
        "Mass": 0.02
    };
};