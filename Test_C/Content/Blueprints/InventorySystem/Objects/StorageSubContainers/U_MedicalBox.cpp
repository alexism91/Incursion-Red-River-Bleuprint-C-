class UU_MedicalBox_C : public UInventoryStorageContainerSettings
{
public:
    FName StorageContainerName = FName("Medical Box");
    TArray<class UInventoryStorageSpatialContainer*> StorageTierContainers = {
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_MedicalBox.Default__U_MedicalBox_C:InventoryStorageSpatialContainer_0'",
        "InventoryStorageSpatialContainer'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_MedicalBox.Default__U_MedicalBox_C:InventoryStorageSpatialContainer_1'"
    };
    int32 DefaultTier = -1;
    TArray<class UUISI_Medicals_C*> SupportedItems = {
        "UISI_Medicals_C'Test_C/Content/Blueprints/InventorySystem/Objects/StorageSubContainers/U_MedicalBox.Default__U_MedicalBox_C:UISI_Medicals_C_0'"
    };
};