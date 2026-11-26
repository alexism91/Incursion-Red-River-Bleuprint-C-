class UBP_RepairRules_Master_C : public URepairRules
{
public:
    TMap<struct FGameplayTag, int32> RepairMaterialItems = {
        { {
            "TagName": FName("Inventory.Items.Barter.Tools.Toolbox")
        }, 1 }
    };
    float CashRepairPercentage = 100;
    class UCurveFloat* CashRepairCurve = "CurveFloat'Test_C/Content/Blueprints/InventorySystem/Data/Repair/FC_CashRepair.FC_CashRepair'";
    class UCurveFloat* RepairPenaltyCurve = "CurveFloat'Test_C/Content/Blueprints/InventorySystem/Data/Repair/FC_RepairPenalty.FC_RepairPenalty'";

};