class UU_Mag_AR-15_C : public UU_Mag_C
{
public:
    struct FGameplayTagContainer ChildSupportedItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Ammunition.Rounds.556x45"))
    });
    TArray<class UUISI_Mag_AR-15_C*> SupportedItems = {
        "UISI_Mag_AR-15_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContainers/Plattforms/AR-15/U_Mag_AR-15.Default__U_Mag_AR-15_C:UISI_Mag_AR-15_C_0'"
    };
};