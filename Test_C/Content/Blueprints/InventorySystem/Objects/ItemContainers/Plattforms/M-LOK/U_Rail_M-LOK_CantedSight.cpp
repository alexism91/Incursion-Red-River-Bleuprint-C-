class UU_Rail_M-LOK_CantedSight_C : public UU_Rail_C
{
public:
    FName AttachmentSocket = FName("Socket_Middle_Top");
    struct FGameplayTagContainer ChildSupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Tactical")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Sight"))
    });
    TArray<class UUISI_Rail_Canted_C*> SupportedItems = {
        "UISI_Rail_M-LOK_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/M-LOK/U_Rail_M-LOK_CantedSight.Default__U_Rail_M-LOK_CantedSight_C:UISI_Rail_M-LOK_C_0'",
        "UISI_Rail_Canted_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/M-LOK/U_Rail_M-LOK_CantedSight.Default__U_Rail_M-LOK_CantedSight_C:UISI_Rail_Canted_C_0'"
    };
};