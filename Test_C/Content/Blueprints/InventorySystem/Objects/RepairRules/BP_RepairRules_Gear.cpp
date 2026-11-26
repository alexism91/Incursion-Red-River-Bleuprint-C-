class UBP_RepairRules_Gear_C : public UBP_RepairRules_Master_C
{
public:
    struct FGameplayTag Repair Replacement Tag = {
        "TagName": FName("Inventory.Items.Barter.Tools.Nylon Fabric")
    };
    double Repar Replacement Value = 20;
    TMap<struct FGameplayTag, int32> Repair Material Items Protection Level 1 = {
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Hesco Armor Plate")
        }, 1 }
    };
    TMap<struct FGameplayTag, int32> Repair Material Items Protection Level 2 = {
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Hesco Armor Plate")
        }, 2 }, 
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Duct Tape")
        }, 1 }
    };
    TMap<struct FGameplayTag, int32> Repair Material Items Protection Level 3 = {
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Hesco Armor Plate")
        }, 2 }, 
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Sewing Kit")
        }, 1 }, 
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Duct Tape")
        }, 1 }
    };
    TMap<struct FGameplayTag, int32> Repair Material Items Protection Level 4 = {
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Hesco Armor Plate")
        }, 3 }, 
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Sewing Kit")
        }, 1 }, 
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Duct Tape")
        }, 1 }, 
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Polyester Fabric")
        }, 1 }
    };
    TMap<FGameplayTag, int> RepairMaterialItems = {};

};