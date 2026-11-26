class UU_PistolGrip_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_PistolGrip");
    FText SlotName = FText("Pistol Grip");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_PistolGrip.T_PistolGrip'";
    struct FVector2D AttachmentLocationOffset = FVector2D(0, 20);
    struct FVector2D CameraLocationOffset = FVector2D(5, -2);
    struct FRotator CameraRotationOffset = FRotator(0, -20, 0);
};