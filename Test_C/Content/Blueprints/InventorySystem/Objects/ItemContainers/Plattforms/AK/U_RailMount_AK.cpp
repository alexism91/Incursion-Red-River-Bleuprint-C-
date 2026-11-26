class UU_RailMount_AK_C : public UU_DustCover_C
{
public:
    FName AttachmentSocket = FName("Socket_RailMount");
    struct FVector2D AttachmentLocationOffset = FVector2D(0, -20);
    float AttachmentSpawnChance = 0.35;
    bool bNestedVitalParts = false;
    TArray<class UInventorySupportedItems*> SupportedItems = {
        "InventorySupportedItems'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/AK/U_RailMount_AK.Default__U_RailMount_AK_C:InventorySupportedItems_0'"
    };
};