class UU_DustCover_AK_C : public UU_DustCover_C
{
public:
    struct FVector2D AttachmentLocationOffset = FVector2D(0, -10);
    struct FRotator CameraRotationOffset = FRotator(-10, -20, 0);
    TArray<class UUISI_DustCover_AK_C*> SupportedItems = {
        "UISI_DustCover_AK_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/AK/U_DustCover_AK.Default__U_DustCover_AK_C:UISI_DustCover_AK_C_0'"
    };
};