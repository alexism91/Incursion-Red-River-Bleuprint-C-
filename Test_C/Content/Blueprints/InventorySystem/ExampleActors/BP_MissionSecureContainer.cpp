class ABP_MissionSecureContainer_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_MissionSecureContainer.BP_MissionSecureContainer_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_MissionSecureContainer.BP_MissionSecureContainer_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_MissionSecureContainer.BP_MissionSecureContainer_C:ExecuteUbergraph_BP_MissionSecureContainer'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UWidgetComponent* Marker;
    class UStaticMeshComponent* Cube;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class USceneComponent* DefaultSceneRoot;

};