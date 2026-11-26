class UU_Mag_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Mag");
    FText SlotName = FText("Mag");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_MagIcon.T_MagIcon'";
    float FOVOffset = 2;
    struct FVector2D AttachmentLocationOffset = FVector2D(0, 200);
    struct FVector2D CameraLocationOffset = FVector2D(12, -8);
    struct FRotator CameraRotationOffset = FRotator(10, 30, 0);
};