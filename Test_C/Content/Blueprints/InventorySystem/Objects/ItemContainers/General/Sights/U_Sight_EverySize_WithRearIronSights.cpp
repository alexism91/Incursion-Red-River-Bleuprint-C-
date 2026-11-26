class UU_Sight_EverySize_WithRearIronSights_C : public UU_Sight_EverySize_C
{
public:
    struct FVector2D AttachmentLocationOffset = FVector2D(0, 0);
    TArray<class UUISI_Sight_RearIronSights_C*> SupportedItems = {
        "UISI_Sight_BigSize_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Sights/U_Sight_EverySize_WithRearIronSights.Default__U_Sight_EverySize_WithRearIronSights_C:UISI_Sight_BigSize_C_0'",
        "UISI_Sight_MediumSize_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Sights/U_Sight_EverySize_WithRearIronSights.Default__U_Sight_EverySize_WithRearIronSights_C:UISI_Sight_MediumSize_C_0'",
        "UISI_Sight_SmallSize_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Sights/U_Sight_EverySize_WithRearIronSights.Default__U_Sight_EverySize_WithRearIronSights_C:UISI_Sight_SmallSize_C_0'",
        "UISI_Sight_RearIronSights_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/General/Sights/U_Sight_EverySize_WithRearIronSights.Default__U_Sight_EverySize_WithRearIronSights_C:UISI_Sight_RearIronSights_C_0'"
    };
};