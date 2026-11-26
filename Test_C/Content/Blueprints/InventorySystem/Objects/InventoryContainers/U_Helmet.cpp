class UU_Helmet_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Helmet");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Helmet.Default__U_Helmet_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Helmet")
    };
};