class ABP_ItemUsage_C : public AActor
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemUsage/BP_ItemUsage.BP_ItemUsage_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemUsage/BP_ItemUsage.BP_ItemUsage_C:ExecuteUbergraph_BP_ItemUsage'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag ItemTag = {
        "TagName": FName("None")
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    float NetUpdateFrequency = 2;
    float MinNetUpdateFrequency = 1;
    float NetPriority = 0.5;
    class UBP_IRRMarkerComponent_Mission_C* BP_IRRMarkerComponent_Mission;
    class UWidgetComponent* Marker;
    class USceneComponent* Scene;
    class UBP_InteractionTarget_C* BP_InteractionTarget;

};