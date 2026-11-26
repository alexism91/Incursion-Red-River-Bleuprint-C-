class UU_Stock_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Stock");
    struct FVector2D AttachmentPosition = FVector2D(1, 0);
    FText SlotName = FText("Stock");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Stock.T_Stock'";
    struct FRotator CameraRotationOffset = FRotator(-10, -20, 0);
};