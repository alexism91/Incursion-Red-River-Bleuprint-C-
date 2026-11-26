class UBP_RepairRules_Weapons_C : public UBP_RepairRules_Master_C
{
public:
    struct FGameplayTag Repair Replacement Tag = {
        "TagName": FName("Inventory.Items.Barter.Tools.Duct Tape")
    };
    double Repar Replacement Value = 40;
    TMap<struct FGameplayTag, int32> RepairMaterialItems = {
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.WD40 Spray")
        }, 1 }
    };

};