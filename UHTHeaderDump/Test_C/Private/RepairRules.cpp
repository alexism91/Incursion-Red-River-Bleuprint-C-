#include "RepairRules.h"

URepairRules::URepairRules() {
    this->RepairMaterialBonus = 10.00f;
    this->CashRepairPercentage = 80.00f;
    this->CashRepairCurve = NULL;
    this->RepairPenaltyCurve = NULL;
    this->RepairPenaltyBaseValue = 5.00f;
}

void URepairRules::GetRepairPenalty_Implementation(FContainerItem Item, float& OutRepairPenalty, float& OutRepairMaxValue) {
}

TMap<FGameplayTag, int32> URepairRules::GetRepairMaterials_Implementation(FContainerItem Item) {
    return TMap<FGameplayTag, int32>();
}

void URepairRules::EvaluateMaterialRepair_Implementation(FContainerItem Item, const TMap<FGuid, int32>& SelectedItems, float& OutReplacementValue, float& OutRepairValue) {
}

bool URepairRules::EvaluateMaterial_Implementation(FContainerItem Item, FContainerItem Material, int32 Amount, float& OutReplacementValue) {
    return false;
}

void URepairRules::EvaluateCashRepair_Implementation(FContainerItem Item, float& OutRepairValue, float& OutCashValue) {
}


