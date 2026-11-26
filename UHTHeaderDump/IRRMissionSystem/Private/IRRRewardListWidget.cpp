#include "IRRRewardListWidget.h"

UIRRRewardListWidget::UIRRRewardListWidget() {
    this->RewardContainer = NULL;
    this->RewardEntryClass = NULL;
    this->EntrySpacing = 16.00f;
    this->ColumnsPerRow = 4;
    this->RewardInventory = NULL;
}

void UIRRRewardListWidget::PopulateRewards(const TArray<FDefaultItem>& Items, float Experience, const TArray<FIRRLoyaltyByFaction>& FactionRewards, int32 InColumnsPerRow) {
}

void UIRRRewardListWidget::PopulateFromMission(UIRRMissionData* MissionData, int32 InColumnsPerRow) {
}

void UIRRRewardListWidget::PopulateFromInboxItem(const FIRRInboxItem& InboxItem, int32 InColumnsPerRow) {
}


void UIRRRewardListWidget::ClearRewards() {
}


