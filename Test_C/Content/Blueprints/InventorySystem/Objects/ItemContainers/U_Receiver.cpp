class UU_Receiver_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Receiver");
    FText SlotName = FText("Receiver");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Barrel.T_Barrel'";
    struct FVector2D CameraLocationOffset = FVector2D(15, 2);
    struct FRotator CameraRotationOffset = FRotator(-10, 15, 0);
};