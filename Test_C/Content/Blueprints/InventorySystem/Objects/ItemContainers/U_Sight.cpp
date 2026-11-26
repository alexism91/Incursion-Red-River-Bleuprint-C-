class UU_Sight_C : public UInventoryEquipToContainerSettings
{
public:
    FName AttachmentSocket = FName("Socket_Sight");
    FText SlotName = FText("Sight");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_Scope.T_Scope'";
    float FOVOffset = 2;
    struct FVector2D AttachmentLocationOffset = FVector2D(0, -50);
    struct FVector2D CameraLocationOffset = FVector2D(10, 0);
    struct FRotator CameraRotationOffset = FRotator(-10, -50, 0);
    float AttachmentSpawnChance = 0.7;
    bool bNestedVitalParts = false;
};