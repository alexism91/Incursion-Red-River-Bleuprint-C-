class ABP_Audio_River_Spline_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Audio/BP_Audio_River_Spline.BP_Audio_River_Spline_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Audio/BP_Audio_River_Spline.BP_Audio_River_Spline_C:ExecuteUbergraph_BP_Audio_River_Spline'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class USplineComponent* Spline;
    class UAdvancedAkComponent* AdvancedAkComponent;
    class USceneComponent* DefaultSceneRoot;
    TArray<struct FTransform> SplinePoints;

};