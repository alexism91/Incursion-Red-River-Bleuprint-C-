class ABP_Door_Electric_C : public ABP_Door_Master_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Electric.BP_Door_Electric_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Electric.BP_Door_Electric_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Electric.BP_Door_Electric_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Electric.BP_Door_Electric_C:ExecuteUbergraph_BP_Door_Electric'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor DoorColor = FLinearColor(0,07451, 0,137255, 0,101961, 1);
    bool DoorInverted? = true;
    enum OpeningDirection = E_InteractionDirection::Back;
    double OpeningSpeed = 1.2;
    struct FGameplayTag KeyTag = {
        "TagName": FName("Inventory.Items.Keys.Quarry.General Key")
    };
    bool bAlwaysRelevant = true;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UBP_IRRMessageComponent_C* BP_IRRMessageComponent;
    class UStaticMeshComponent* StaticMesh;
    class UBP_InteractionTarget_Open_C* BP_Open;
    class UBP_InteractionTarget_Peek_C* BP_Peek;
    class UBP_InteractionTarget_C* BP_Unlock;

};