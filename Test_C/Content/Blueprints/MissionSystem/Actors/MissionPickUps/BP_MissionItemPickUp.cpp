class ABP_MissionItemPickUp_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/MissionPickUps/BP_MissionItemPickUp.BP_MissionItemPickUp_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/MissionPickUps/BP_MissionItemPickUp.BP_MissionItemPickUp_C:ExecuteUbergraph_BP_MissionItemPickUp'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class UChildActorComponent* Item;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<ABP_StaticMasterPickup_C> ItemClass;

};