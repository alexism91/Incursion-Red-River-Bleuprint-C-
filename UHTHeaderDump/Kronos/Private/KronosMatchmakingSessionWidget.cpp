#include "KronosMatchmakingSessionWidget.h"

UKronosMatchmakingSessionWidget::UKronosMatchmakingSessionWidget() : UUserWidget(FObjectInitializer::Get()) {
}


void UKronosMatchmakingSessionWidget::InitSessionWidget(const FKronosSearchResult& InOwningSession) {
}

FKronosSearchResult UKronosMatchmakingSessionWidget::GetOwningSession() {
    return FKronosSearchResult{};
}


