class ABP_OperationInteractionPoint_Master_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Operation/BP_OperationInteractionPoint_Master.BP_OperationInteractionPoint_Master_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Operation/BP_OperationInteractionPoint_Master.BP_OperationInteractionPoint_Master_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Operation/BP_OperationInteractionPoint_Master.BP_OperationInteractionPoint_Master_C:ExecuteUbergraph_BP_OperationInteractionPoint_Master'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class UWidgetInteractionComponent* WidgetInteraction;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Scene;
    class UBP_IRRMarkerComponent_C* BP_MarkerComponent;
    class UBP_InteractionTarget_C* BP_InteractionTarget;

};