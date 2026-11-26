class UU_Backpack_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Backpack");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Backpack.Default__U_Backpack_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Backpack")
    };
};