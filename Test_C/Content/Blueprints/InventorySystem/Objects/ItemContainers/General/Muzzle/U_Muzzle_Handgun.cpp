class UU_Muzzle_Handgun_C : public UU_Muzzle_C
{
public:
    struct FVector2D AttachmentPosition = FVector2D(-1, 0);
    TArray<class UUISI_Muzzle_Handgun_C*> SupportedItems = {
        "UISI_Muzzle_Handgun_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Muzzle/U_Muzzle_Handgun.Default__U_Muzzle_Handgun_C:UISI_Muzzle_Handgun_C_0'"
    };
};