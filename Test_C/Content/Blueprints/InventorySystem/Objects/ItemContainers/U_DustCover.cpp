class UU_DustCover_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_DustCover");
    FText SlotName = FText("Cover");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Barrel.T_Barrel'";
    float FOVOffset = 2;
    struct FVector2D CameraLocationOffset = FVector2D(16, 2);
    struct FRotator CameraRotationOffset = FRotator(-10, -30, 0);
};