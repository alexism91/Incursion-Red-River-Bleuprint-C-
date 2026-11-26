#include "IRRInRaidPlayerWidget.h"

UIRRInRaidPlayerWidget::UIRRInRaidPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OwningPlayerState = NULL;
}

void UIRRInRaidPlayerWidget::OnPlayerNameChanged(const FString& PlayerName) {
}




bool UIRRInRaidPlayerWidget::IsOwningPlayerTalking() const {
    return false;
}

void UIRRInRaidPlayerWidget::InitPlayerWidget(APlayerState* InOwningPlayerState) {
}

void UIRRInRaidPlayerWidget::HandleVoiceTalkingChanged(APlayerState* Player, bool bIsTalking) {
}


