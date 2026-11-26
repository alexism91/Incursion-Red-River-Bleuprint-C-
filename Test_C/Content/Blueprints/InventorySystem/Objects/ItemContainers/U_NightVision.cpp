class UU_NightVision_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_");
    FText SlotName = FText("Night Vision");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_LightAttachment.T_LightAttachment'";
};