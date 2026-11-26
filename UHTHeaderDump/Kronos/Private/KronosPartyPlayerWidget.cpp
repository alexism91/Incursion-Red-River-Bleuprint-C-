#include "KronosPartyPlayerWidget.h"

UKronosPartyPlayerWidget::UKronosPartyPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OwningPlayerState = NULL;
}






bool UKronosPartyPlayerWidget::IsPartyLeader() const {
    return false;
}

FUniqueNetIdRepl UKronosPartyPlayerWidget::GetPlayerUniqueId() const {
    return FUniqueNetIdRepl{};
}

FText UKronosPartyPlayerWidget::GetPlayerName() const {
    return FText::GetEmpty();
}

bool UKronosPartyPlayerWidget::GetPlayerIsReady() const {
    return false;
}

int32 UKronosPartyPlayerWidget::GetPlayerElo() const {
    return 0;
}

TArray<int32> UKronosPartyPlayerWidget::GetPlayerData() const {
    return TArray<int32>();
}

AKronosPartyPlayerState* UKronosPartyPlayerWidget::GetOwningPartyPlayerState() const {
    return NULL;
}


