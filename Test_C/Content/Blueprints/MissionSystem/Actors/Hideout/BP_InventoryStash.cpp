class ABP_InventoryStash_C : public ABP_HideoutUnit_Master_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_InventoryStash.BP_InventoryStash_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_InventoryStash.BP_InventoryStash_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_InventoryStash.BP_InventoryStash_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_InventoryStash.BP_InventoryStash_C:ExecuteUbergraph_BP_InventoryStash'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAnimMontage* Montage to Play = "AnimMontage'Test_C/Content/ThirdParty/FPS_Assault_Pack/Animations/Rifle/A_Arms_Rifle_Grenade_Montage.A_Arms_Rifle_Grenade_Montage'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bReplicates = true;
    TArray<FName> Tags = {
        FName("Stash")
    };
    class UChildActorComponent* ChildActor;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UWidgetComponent* Marker;
    class UStaticMeshComponent* Mesh;
    class UBP_InventoryComponent_C* BP_InventoryComponent;

};