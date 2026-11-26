#include "IRRAccessTierSubsystem.h"

UIRRAccessTierSubsystem::UIRRAccessTierSubsystem() {
}

void UIRRAccessTierSubsystem::SetShowAllGated(bool bShow) {
}

void UIRRAccessTierSubsystem::SetGrantedTiers(const FGameplayTagContainer& InTiers) {
}

void UIRRAccessTierSubsystem::RevokeTier(FGameplayTag Tier) {
}

bool UIRRAccessTierSubsystem::IsShowAllGated() const {
    return false;
}

void UIRRAccessTierSubsystem::GrantTier(FGameplayTag Tier) {
}

FGameplayTagContainer UIRRAccessTierSubsystem::GetGrantedTiers() const {
    return FGameplayTagContainer{};
}


