class UU_Melee_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Melee");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Melee.Default__U_Melee_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Melee")
    };
};