class UIA_UseGadget_C : public UItemAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemActions/IA_UseGadget.IA_UseGadget_C:ExecuteUbergraph_IA_UseGadget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* Ability = "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_EquipGadget.SGA_EquipGadget_C'";
    struct FGameplayTag Ability Tag = {
        "TagName": FName("Inventory.Equipment Slots.Gadget")
    };
    bool bForwardToPickupActor = false;

};