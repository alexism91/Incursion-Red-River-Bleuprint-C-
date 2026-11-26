#include "IRRRewardWidgetBase.h"

UIRRRewardWidgetBase::UIRRRewardWidgetBase() {
    this->RewardType = EIRRRewardType::None;
    this->ExperienceReward = 0.00f;
}

void UIRRRewardWidgetBase::SetupItemReward(UInventoryComponent* OwnerInventoryComp, FContainerItem InContainerItem) {
}

void UIRRRewardWidgetBase::SetupFactionReward(FIRRLoyaltyByFaction InFactionReward) {
}

void UIRRRewardWidgetBase::SetupExperienceReward(float InExperience) {
}

void UIRRRewardWidgetBase::SetupDefaultItemReward(const FDefaultItem& InDefaultItem) {
}


FText UIRRRewardWidgetBase::FormatFactionValue(const FIRRLoyaltyByFaction& InFactionReward) const {
    return FText::GetEmpty();
}


