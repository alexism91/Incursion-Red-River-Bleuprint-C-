class ABP_LootContainer_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_LootContainer.BP_LootContainer_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_LootContainer.BP_LootContainer_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_LootContainer.BP_LootContainer_C:ExecuteUbergraph_BP_LootContainer'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAkAudioEvent* Opening Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/Player/Player_Footsteps/Player_Open_Chest.Player_Open_Chest'";
    float SpawnChance = 0.7;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bNetLoadOnClient = false;
    bool bReplicates = true;
    enum NetDormancy = ENetDormancy::DORM_DormantAll;
    class UDecalComponent* Decal;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UWidgetComponent* Marker;
    class UStaticMeshComponent* Cube;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class USceneComponent* DefaultSceneRoot;

};