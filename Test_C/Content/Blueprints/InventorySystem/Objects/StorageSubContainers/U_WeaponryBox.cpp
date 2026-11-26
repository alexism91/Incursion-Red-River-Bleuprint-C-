class UU_WeaponryBox_C : public UInventoryStorageContainerSettings
{
public:
    FName StorageContainerName = FName("Weaponry Box");
    TArray<class UInventoryStorageSpatialContainer*> StorageTierContainers = {
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_WeaponryBox.Default__U_WeaponryBox_C:InventoryStorageSpatialContainer_0'",
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_WeaponryBox.Default__U_WeaponryBox_C:InventoryStorageSpatialContainer_1'"
    };
    int32 DefaultTier = -1;
    TArray<class UInventorySupportedItems*> SupportedItems = {
        "InventorySupportedItems'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_WeaponryBox.Default__U_WeaponryBox_C:InventorySupportedItems_0'"
    };
};