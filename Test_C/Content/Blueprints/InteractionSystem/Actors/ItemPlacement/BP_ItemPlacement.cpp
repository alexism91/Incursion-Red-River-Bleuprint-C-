class ABP_ItemPlacement_C : public AActor
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement.BP_ItemPlacement_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement.BP_ItemPlacement_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement.BP_ItemPlacement_C:ExecuteUbergraph_BP_ItemPlacement'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag ItemTag = {
        "TagName": FName("None")
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class UStaticMeshComponent* Cube;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UWidgetComponent* Marker;
    class UAkAudioEvent* PlacingEvent;
    class UAkAudioEvent* PlacedEvent;

};