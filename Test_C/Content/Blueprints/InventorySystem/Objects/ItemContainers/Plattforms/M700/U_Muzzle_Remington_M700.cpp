class UU_Muzzle_Remington_M700_C : public UU_Muzzle_C
{
public:
    struct FVector2D AttachmentPosition = FVector2D(-2, 0);
    float AttachmentSpawnChance = 0.8;
    bool bForceAttachment = true;
    TArray<class UInventorySupportedItems*> SupportedItems = {
        "InventorySupportedItems'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/M700/U_Muzzle_Remington_M700.Default__U_Muzzle_Remington_M700_C:InventorySupportedItems_0'"
    };
};