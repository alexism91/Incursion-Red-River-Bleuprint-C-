class UU_Foregrip_C : public UInventoryEquipToContainerSettings
{
public:
    FText SlotName = FText("Grip");
    class UTexture2D* SlotImage = "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/Attachments/T_GripIcon.T_GripIcon'";
    struct FVector2D AttachmentLocationOffset = FVector2D(0, 100);
    struct FVector2D CameraLocationOffset = FVector2D(6, -2);
    struct FRotator CameraRotationOffset = FRotator(15, 30, 0);
    float AttachmentSpawnChance = 0.8;
    bool bNestedVitalParts = false;
};