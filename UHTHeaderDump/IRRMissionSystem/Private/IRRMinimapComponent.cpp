#include "IRRMinimapComponent.h"

UIRRMinimapComponent::UIRRMinimapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UIRRMarkerComponent* UIRRMinimapComponent::SpawnPingComponent_Implementation(FVector2D PingLocation, APlayerController* Instigator) {
    return NULL;
}

void UIRRMinimapComponent::RemovePing_Implementation() {
}

void UIRRMinimapComponent::CreatePing_Implementation(FVector2D PingLocation, UIRRMarkerComponent* TargetMarker) {
}


