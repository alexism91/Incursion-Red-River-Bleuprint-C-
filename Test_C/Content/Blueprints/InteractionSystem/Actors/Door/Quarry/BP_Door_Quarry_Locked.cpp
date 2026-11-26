class ABP_Door_Quarry_Locked_C : public ABP_Door_Master_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Quarry_Locked.BP_Door_Quarry_Locked_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Quarry_Locked.BP_Door_Quarry_Locked_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Quarry_Locked.BP_Door_Quarry_Locked_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Door/Quarry/BP_Door_Quarry_Locked.BP_Door_Quarry_Locked_C:ExecuteUbergraph_BP_Door_Quarry_Locked'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor DoorColor = FLinearColor(0,07451, 0,137255, 0,101961, 1);
    bool DoorInverted? = true;
    double OpeningSpeed = 1.2;
    struct FGameplayTag KeyTag = {
        "TagName": FName("Inventory.Items.Keys.Quarry.General Key")
    };
    bool bAlwaysRelevant = true;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UBP_InteractionTarget_Open_C* BP_Open;
    class UBP_InteractionTarget_Peek_C* BP_Peek;
    class UStaticMeshComponent* sm_DoorJamb_01_01;
    class UBP_InteractionTarget_C* BP_Unlock;

};