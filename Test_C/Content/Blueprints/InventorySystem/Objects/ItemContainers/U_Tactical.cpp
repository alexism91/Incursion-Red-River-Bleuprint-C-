class UU_Tactical_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_");
    FText SlotName = FText("Tactical");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_LightAttachment.T_LightAttachment'";
    struct FVector2D CameraLocationOffset = FVector2D(6, 0);
    struct FRotator CameraRotationOffset = FRotator(-10, -20, 0);
    float AttachmentSpawnChance = 0.2;
    bool bNestedVitalParts = false;
};