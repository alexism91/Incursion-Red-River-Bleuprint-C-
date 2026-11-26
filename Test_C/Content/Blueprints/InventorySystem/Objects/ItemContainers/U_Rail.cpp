class UU_Rail_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Sight");
    FText SlotName = FText("Rail");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Rail.T_Rail'";
    struct FVector2D CameraLocationOffset = FVector2D(6, 0);
    struct FRotator CameraRotationOffset = FRotator(0, 20, 0);
    float AttachmentSpawnChance = 0.25;
    bool bNestedVitalParts = false;
};