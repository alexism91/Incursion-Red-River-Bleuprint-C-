class ABP_SBBTV_ProceduralSplineVolume_C : public ABP_SBBTV_SplineVolume_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Tools/SBBTV/Blueprints/Procedural/BP_SBBTV_ProceduralSplineVolume.BP_SBBTV_ProceduralSplineVolume_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Tools/SBBTV/Blueprints/Procedural/BP_SBBTV_ProceduralSplineVolume.BP_SBBTV_ProceduralSplineVolume_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Tools/SBBTV/Blueprints/Procedural/BP_SBBTV_ProceduralSplineVolume.BP_SBBTV_ProceduralSplineVolume_C:ExecuteUbergraph_BP_SBBTV_ProceduralSplineVolume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FSplinePoint> ProceduralSplinePoints;
    bool UseProceduralSplinePoints;

};