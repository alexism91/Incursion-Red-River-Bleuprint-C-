class UBP_InventoryComponent_C : public UInventoryComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Components/BP_InventoryComponent.BP_InventoryComponent_C:ExecuteUbergraph_BP_InventoryComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UInventoryEquipToContainerSettings* VendorContainerSettings = "InventoryEquipToContainerSettings'Test_C/Content/Blueprints/InventorySystem/Components/BP_InventoryComponent.Default__BP_InventoryComponent_C:Vendor Container Settings'";
    class UObject* RewardContainerSettings = nullptr;
    class UInventorySpatialContainerSettings* GunsmithContainerSettings = "InventorySpatialContainerSettings'Test_C/Content/Blueprints/InventorySystem/Components/BP_InventoryComponent.Default__BP_InventoryComponent_C:Loadout Container Settings'";
    struct FMainContainerArray RepMainContainers = {
        "OwnerComponent": "BP_InventoryComponent_C'Test_C/Content/Blueprints/InventorySystem/Components/BP_InventoryComponent.Default__BP_InventoryComponent_C'"
    };
    int FinalLootValue;

};