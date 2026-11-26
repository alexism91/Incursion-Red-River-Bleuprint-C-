#include "IRRRewardWidget.h"

UIRRRewardWidget::UIRRRewardWidget() {
    this->RewardSwitcher = NULL;
    this->ItemSizeBox = NULL;
    this->ItemWidget = NULL;
    this->RewardIcon = NULL;
    this->ItemSwitcherIndex = 0;
    this->IconSwitcherIndex = 1;
    this->RewardTitleText = NULL;
    this->RewardValueText = NULL;
    this->ExperienceIcon = NULL;
    this->FallbackIcon = NULL;
    this->CashValueFormat = FText::FromString(TEXT("${0}"));
    this->ExperienceTitle = FText::FromString(TEXT("Expérience"));
    this->FactionReputationTitle = FText::FromString(TEXT("Réputation de faction"));
}


