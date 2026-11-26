class UIA_OpenInventory_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_OpenInventory.IA_OpenInventory_C:ExecuteUbergraph_IA_OpenInventory'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Ability Tag = {
        "TagName": FName("Character.Abilities.Active.Inventory Open")
    };

};