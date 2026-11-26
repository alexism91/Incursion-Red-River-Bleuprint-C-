class UU_Handguard_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Handguard");
    FText SlotName = FText("Handguard");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Handguard.T_Handguard'";
    float FOVOffset = 2;
    struct FVector2D CameraLocationOffset = FVector2D(18, 2);
    struct FRotator CameraRotationOffset = FRotator(-5, 30, 0);
};