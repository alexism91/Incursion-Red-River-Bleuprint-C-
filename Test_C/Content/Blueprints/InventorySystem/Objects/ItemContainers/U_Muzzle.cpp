class UU_Muzzle_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Muzzle");
    FText SlotName = FText("Muzzle");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Muzzle.T_Muzzle'";
    float FOVOffset = 1;
    struct FVector2D CameraLocationOffset = FVector2D(16, 6);
    struct FRotator CameraRotationOffset = FRotator(-10, 30, 0);
    float AttachmentSpawnChance = 0.4;
    bool bNestedVitalParts = false;
};