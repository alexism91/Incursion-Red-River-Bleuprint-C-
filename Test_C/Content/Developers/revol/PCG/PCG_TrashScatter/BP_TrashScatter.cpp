class ABP_TrashScatter_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Developers/revol/PCG/PCG_TrashScatter/BP_TrashScatter.BP_TrashScatter_C:SimpleConstructionScript_0'";
    double DumpsterTrashSeed = 25;
    double PileTrashSeed = 25;
    double TrashGroundScatterDensity = 35;
    double TrashGroundScatterExpansion = 250;
    double DumpsterPileTrashScatterDensity = 35;
    double DumpsterPileTrashScatterExpansion = 35;
    class UPCGComponent* PCG;
    class USplineComponent* Spline;
    class USceneComponent* DefaultSceneRoot;
    bool EnableDumpsterLarge;
    bool EnableDumpsterMedium;
    bool EnablePileTrash;
    bool AddDumpsterPileLitter;
    bool EnableTrashScatter;
};