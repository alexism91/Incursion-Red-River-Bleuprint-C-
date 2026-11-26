class UU_Muzzle_556_C : public UU_Muzzle_C
{
public:
    struct FVector2D AttachmentPosition = FVector2D(-0,5, 0);
    float AttachmentSpawnChance = 0.8;
    bool bForceAttachment = true;
    TArray<class UUISI_Muzzle_556_C*> SupportedItems = {
        "UISI_Muzzle_556_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Muzzle/U_Muzzle_556.Default__U_Muzzle_556_C:UISI_Muzzle_556_C_0'"
    };
};