class UU_Belt_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Belt");
    class UInventorySpatialContainerSettings* ContainerSettings = "InventorySpatialContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Belt.Default__U_Belt_C:InventorySpatialContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Belt")
    };
};