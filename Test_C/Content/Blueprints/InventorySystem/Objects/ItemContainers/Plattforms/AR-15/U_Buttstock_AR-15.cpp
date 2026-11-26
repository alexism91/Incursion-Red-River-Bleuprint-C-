class UU_Buttstock_AR-15_C : public UU_Stock_C
{
public:
    struct FVector2D AttachmentPosition = FVector2D(0, 0);
    bool bNestedVitalParts = false;
    bool bForceAttachment = true;
    TArray<class UUISI_Buttstock_AR-15_C*> SupportedItems = {
        "UISI_Buttstock_AR-15_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/AR-15/U_Buttstock_AR-15.Default__U_Buttstock_AR-15_C:UISI_Buttstock_AR-15_C_0'"
    };
};