class UU_Sight_MidSize_C : public UU_Sight_EverySize_C
{
public:
    struct FVector2D AttachmentPosition = FVector2D(0, 0,5);
    TArray<class UUISI_Sight_MediumSize_C*> SupportedItems = {
        "UISI_Sight_SmallSize_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Sights/U_Sight_MidSize.Default__U_Sight_MidSize_C:UISI_Sight_SmallSize_C_0'",
        "UISI_Sight_MediumSize_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Sights/U_Sight_MidSize.Default__U_Sight_MidSize_C:UISI_Sight_MediumSize_C_0'"
    };
};