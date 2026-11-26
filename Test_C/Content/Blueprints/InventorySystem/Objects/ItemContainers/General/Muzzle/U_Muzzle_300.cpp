class UU_Muzzle_300_C : public UU_Muzzle_C
{
public:
    struct FVector2D AttachmentPosition = FVector2D(-1, 0);
    TArray<class UUISI_Muzzle_300BLK_C*> SupportedItems = {
        "UISI_Muzzle_762x51_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Muzzle/U_Muzzle_300.Default__U_Muzzle_300_C:UISI_Muzzle_762_C_0'",
        "UISI_Muzzle_300BLK_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Muzzle/U_Muzzle_300.Default__U_Muzzle_300_C:UISI_Muzzle_300BLK_C_0'"
    };
};