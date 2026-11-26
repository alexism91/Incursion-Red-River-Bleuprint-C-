class UU_Rig_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Rig");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Rig.Default__U_Rig_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Rig")
    };
};