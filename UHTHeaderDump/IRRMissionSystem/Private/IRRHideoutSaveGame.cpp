#include "IRRHideoutSaveGame.h"

UIRRHideoutSaveGame::UIRRHideoutSaveGame() {
}

void UIRRHideoutSaveGame::SetRequiredItemsForUnit(FGameplayTag HideoutUnitTag, const TMap<FGameplayTag, int32>& RequiredItems) {
}

void UIRRHideoutSaveGame::SetHideoutUnitLevels(const TMap<FGameplayTag, int32>& NewLevels) {
}

TMap<FGameplayTag, int32> UIRRHideoutSaveGame::GetRequiredItemsForUnit(FGameplayTag HideoutUnitTag) const {
    return TMap<FGameplayTag, int32>();
}

TMap<FGameplayTag, int32> UIRRHideoutSaveGame::GetHideoutUnitLevels() const {
    return TMap<FGameplayTag, int32>();
}


