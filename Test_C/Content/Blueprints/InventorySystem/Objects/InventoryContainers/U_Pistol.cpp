class UU_Pistol_C : public UInventoryDefaultContainerSettings
{
public:
    FName ContainerName = FName("Pistol");
    class UInventoryEquipToContainerSettings* ContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/InventoryContainers/U_Pistol.Default__U_Pistol_C:InventoryEquipToContainerSettings_0'";
    struct FGameplayTag EquipmentSlot = {
        "TagName": FName("Inventory.Equipment Slots.Pistol")
    };
};