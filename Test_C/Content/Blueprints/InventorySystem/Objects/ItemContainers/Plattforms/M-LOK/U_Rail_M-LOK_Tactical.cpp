class UU_Rail_M-LOK_Tactical_C : public UU_Rail_C
{
public:
    FName AttachmentSocket = FName("Socket_Middle_");
    struct FGameplayTagContainer ChildSupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Tactical"))
    });
    TArray<class UUISI_Rail_M-LOK_C*> SupportedItems = {
        "UISI_Rail_M-LOK_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/M-LOK/U_Rail_M-LOK_Tactical.Default__U_Rail_M-LOK_Tactical_C:UISI_Rail_M-LOK_C_0'"
    };
};