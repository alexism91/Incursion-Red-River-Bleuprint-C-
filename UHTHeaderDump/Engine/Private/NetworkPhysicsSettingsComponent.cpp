#include "NetworkPhysicsSettingsComponent.h"

UNetworkPhysicsSettingsComponent::UNetworkPhysicsSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UNetworkPhysicsSettingsComponent::OnComponentPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) {
}


