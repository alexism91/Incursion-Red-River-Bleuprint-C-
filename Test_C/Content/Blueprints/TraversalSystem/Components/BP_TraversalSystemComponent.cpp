class UBP_TraversalSystemComponent_C : public UIRRTraversalSystemComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/TraversalSystem/Components/BP_TraversalSystemComponent.BP_TraversalSystemComponent_C:ExecuteUbergraph_BP_TraversalSystemComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector Cached Velocity = FVector(0, 0, 0);
    enum ETraceTypeQuery Trace Channel = ETraceTypeQuery::TraceTypeQuery2;
    bool bAutoCheck = false;
    float WallTraceAngleThreshold = 60;
    TArray<class UIRRTraversalActionDataAsset*> TraversalActions = {
        "IRRTraversalActionDataAsset'Test_C/Content/Blueprints/TraversalSystem/Data/DA_Mantle_Low.DA_Mantle_Low'",
        "IRRTraversalActionDataAsset'Test_C/Content/Blueprints/TraversalSystem/Data/DA_Mantle_High.DA_Mantle_High'",
        "IRRTraversalActionDataAsset'Test_C/Content/Blueprints/TraversalSystem/Data/DA_Vault_Default.DA_Vault_Default'"
    };
    enum WallTraceChannel = ETraceTypeQuery::TraceTypeQuery2;

};