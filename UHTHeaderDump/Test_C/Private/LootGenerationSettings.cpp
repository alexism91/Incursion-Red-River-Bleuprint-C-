#include "LootGenerationSettings.h"

ULootGenerationSettings::ULootGenerationSettings() {
    this->bUseCurve = false;
    this->MinGeneratedItems = 1;
    this->MaxGeneratedItems = 1;
    this->MinTotalValue = -1.00f;
    this->MaxTotalValue = -1.00f;
    this->bForceExactRarityMatch = false;
}

bool ULootGenerationSettings::ValidateSettings() {
    return false;
}

int32 ULootGenerationSettings::GetTargetItemCount(bool bIsEquipToContainer) const {
    return 0;
}

FGameplayTag ULootGenerationSettings::GetRandomRarityTag() const {
    return FGameplayTag{};
}


