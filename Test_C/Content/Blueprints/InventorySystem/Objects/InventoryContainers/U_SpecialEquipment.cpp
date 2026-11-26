class UU_SpecialEquipment_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Binoculars");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_SpecialEquipment.Default__U_SpecialEquipment_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Special Equipment")
    };
};