#include "IRRSteamAchievementTracker.h"

UIRRSteamAchievementTracker::UIRRSteamAchievementTracker() {
    this->StatsRequest = NULL;
    this->StoreRequest = NULL;
}

void UIRRSteamAchievementTracker::HandleStoreSucceeded() {
}

void UIRRSteamAchievementTracker::HandleStoreFailed(const FString& ErrorMessage) {
}

void UIRRSteamAchievementTracker::HandleStatsRequestFailed(const FString& ErrorMessage) {
}

void UIRRSteamAchievementTracker::HandleStatsReceived() {
}


