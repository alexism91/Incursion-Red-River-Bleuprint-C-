class UU_Secondary_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Secondary");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Secondary.Default__U_Secondary_C:InventoryEquipToContainerSettings_1'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Secondary")
    };
};