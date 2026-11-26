#include "KronosMatchmakingStateWidget.h"

UKronosMatchmakingStateWidget::UKronosMatchmakingStateWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UKronosMatchmakingStateWidget::OnMatchmakingUpdated(const EKronosMatchmakingState MatchmakingState, const int32 MatchmakingTime) {
}

void UKronosMatchmakingStateWidget::OnMatchmakingStarted() {
}

void UKronosMatchmakingStateWidget::OnMatchmakingComplete(const FName SessionName, const EKronosMatchmakingCompleteResult Result) {
}

void UKronosMatchmakingStateWidget::OnMatchmakingCanceled() {
}






