class UU_Rail_M-LOK_Foregrip_C : public UU_Rail_C
{
public:
    FName AttachmentSocket = FName("Socket_Middle_Bottom");
    struct FGameplayTagContainer ChildSupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Attachments.Foregrip"))
    });
    struct FVector2D AttachmentLocationOffset = FVector2D(0, 100);
    TArray<class UUISI_Foregrip_M-LOK_C*> SupportedItems = {
        "UISI_Rail_M-LOK_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/M-LOK/U_Rail_M-LOK_Foregrip.Default__U_Rail_M-LOK_Foregrip_C:UISI_Rail_M-LOK_C_0'",
        "UISI_Foregrip_M-LOK_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/M-LOK/U_Rail_M-LOK_Foregrip.Default__U_Rail_M-LOK_Foregrip_C:UISI_Foregrip_M-LOK_C_0'"
    };
};