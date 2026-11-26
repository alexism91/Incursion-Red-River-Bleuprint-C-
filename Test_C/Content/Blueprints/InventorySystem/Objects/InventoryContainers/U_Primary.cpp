class UU_Primary_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Primary");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Primary.Default__U_Primary_C:InventoryEquipToContainerSettings_1'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Primary")
    };
};