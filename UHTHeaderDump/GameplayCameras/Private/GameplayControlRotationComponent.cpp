#include "GameplayControlRotationComponent.h"

UGameplayControlRotationComponent::UGameplayControlRotationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AxisActionAngularSpeedThreshold = 20.00f;
    this->AxisActionMagnitudeThreshold = 0.10f;
    this->AutoActivateForPlayer = EAutoReceiveInput::Disabled;
    this->PlayerController = NULL;
}

void UGameplayControlRotationComponent::DeactivateControlRotationManagement() {
}

void UGameplayControlRotationComponent::ActivateControlRotationManagementForPlayerIndex(int32 PlayerIndex) {
}

void UGameplayControlRotationComponent::ActivateControlRotationManagementForPlayerController(APlayerController* NewPlayerController) {
}


