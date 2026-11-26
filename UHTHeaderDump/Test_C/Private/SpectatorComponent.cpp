#include "SpectatorComponent.h"

USpectatorComponent::USpectatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpectatorTargetIndex = 0;
}

void USpectatorComponent::TriggerSpectating(APlayerController* PlayerController, bool bStart) {
}

void USpectatorComponent::SetNewSpectatorTarget(APlayerController* PlayerController, AActor* NewTarget) {
}

void USpectatorComponent::RequestPreviousSpectatorTarget(APlayerController* PlayerController) {
}

void USpectatorComponent::RequestNextSpectatorTarget(APlayerController* PlayerController) {
}

void USpectatorComponent::RemoveSpectatorTarget(AActor* Target) {
}


bool USpectatorComponent::CanSpectate() {
    return false;
}

void USpectatorComponent::AddSpectatorTarget(AActor* Target) {
}


