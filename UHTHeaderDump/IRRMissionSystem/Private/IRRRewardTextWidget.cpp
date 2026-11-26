#include "IRRRewardTextWidget.h"

UIRRRewardTextWidget::UIRRRewardTextWidget() {
    this->RewardLineText = NULL;
    this->ItemLineFormat = FText::FromString(TEXT("{0}x {1}"));
    this->CashLineFormat = FText::FromString(TEXT("${0} {1}"));
    this->ExperienceLineFormat = FText::FromString(TEXT("+{0} XP"));
    this->bUppercaseItemNames = false;
}

FText UIRRRewardTextWidget::FormatItemLine(const FContainerItem& ContainerItem) const {
    return FText::GetEmpty();
}

FText UIRRRewardTextWidget::FormatFactionLine(const FIRRLoyaltyByFaction& InFactionReward) const {
    return FText::GetEmpty();
}

FText UIRRRewardTextWidget::FormatExperienceLine(float Experience) const {
    return FText::GetEmpty();
}

FText UIRRRewardTextWidget::FormatDefaultItemLine(const FDefaultItem& DefaultItem) const {
    return FText::GetEmpty();
}


