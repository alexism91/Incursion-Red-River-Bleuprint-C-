class UU_GearBox_C : public UInventoryStorageContainerSettings
{
public:
    FName StorageContainerName = FName("Gear Box");
    TArray<class UInventoryStorageSpatialContainer*> StorageTierContainers = {
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_GearBox.Default__U_GearBox_C:InventoryStorageSpatialContainer_0'",
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_GearBox.Default__U_GearBox_C:InventoryStorageSpatialContainer_1'",
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_GearBox.Default__U_GearBox_C:InventoryStorageSpatialContainer_2'"
    };
    int32 DefaultTier = -1;
    TArray<class UInventorySupportedItems*> SupportedItems = {
        "InventorySupportedItems'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_GearBox.Default__U_GearBox_C:InventorySupportedItems_0'"
    };
};