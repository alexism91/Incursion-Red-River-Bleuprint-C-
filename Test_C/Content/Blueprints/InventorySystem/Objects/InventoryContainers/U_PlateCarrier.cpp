class UU_PlateCarrier_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Plate Carrier");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_PlateCarrier.Default__U_PlateCarrier_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Plate Carrier")
    };
};