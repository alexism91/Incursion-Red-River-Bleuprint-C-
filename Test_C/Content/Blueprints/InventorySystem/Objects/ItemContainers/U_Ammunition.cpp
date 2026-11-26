class UU_Ammunition_C : public UInventoryEquipToContainerSettings
{
public:
    int32 MaxEquippedCount = 30;
    FText SlotName = FText("Chamber");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Ammunition/T_Bullets.T_Bullets'";
};