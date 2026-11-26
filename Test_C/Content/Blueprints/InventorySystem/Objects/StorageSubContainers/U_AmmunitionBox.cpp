class UU_AmmunitionBox_C : public UInventoryStorageContainerSettings
{
public:
    FName StorageContainerName = FName("Ammunition Box");
    TArray<class UInventoryStorageSpatialContainer*> StorageTierContainers = {
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_AmmunitionBox.Default__U_AmmunitionBox_C:InventoryStorageSpatialContainer_0'",
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_AmmunitionBox.Default__U_AmmunitionBox_C:InventoryStorageSpatialContainer_1'",
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_AmmunitionBox.Default__U_AmmunitionBox_C:InventoryStorageSpatialContainer_2'"
    };
    int32 DefaultTier = -1;
    TArray<class UUISI_Mags_C*> SupportedItems = {
        "UISI_Mags_C'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_AmmunitionBox.Default__U_AmmunitionBox_C:UISI_Mags_C_0'"
    };
};