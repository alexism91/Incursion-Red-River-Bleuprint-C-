class UU_GasTube_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_GasTube");
    FText SlotName = FText("Gas Block");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Gastube.T_Gastube'";
    struct FRotator CameraRotationOffset = FRotator(5, 20, 0);
};