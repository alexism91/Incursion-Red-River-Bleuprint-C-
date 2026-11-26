class ABP_PC_Interact_C : public ABP_HideoutUnit_Master_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_PC_Interact.BP_PC_Interact_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_PC_Interact.BP_PC_Interact_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_PC_Interact.BP_PC_Interact_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/BP_PC_Interact.BP_PC_Interact_C:ExecuteUbergraph_BP_PC_Interact'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bReplicates = true;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    TArray<FName> Tags = {
        FName("Vendor")
    };
    class UChildActorComponent* Tutorial;
    class UWidgetComponent* Marker_Terminal;
    class UBP_InventoryComponent_C* BP_InventoryComponent;
    class URectLightComponent* RectLight;
    class UBP_VendorComponent_C* BP_VendorComponent;
    class UBP_IRRJobBoardManager_C* BP_IRRJobBoardManager;
    class UBP_IRRInboxComponent_C* BP_IRRInboxManager;
    class UStaticMeshComponent* StaticMesh;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UBP_InteractionTarget_C* BP_InteractionTarget;

};