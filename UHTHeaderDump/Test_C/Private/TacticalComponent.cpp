#include "TacticalComponent.h"
#include "Net/UnrealNetwork.h"

UTacticalComponent::UTacticalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoCallForceNetUpdate = true;
    this->bHasInfraredMode = false;
    this->bShouldMakeNoise = false;
    this->NoiseFrequency = 1.00f;
    this->NoiseTag = TEXT("Laser Impact");
    this->LocalPlayerController = NULL;
    this->bDeviceInfraredOn = false;
    this->DeviceState = EIRRTacticalDeviceState::Off;
}

void UTacticalComponent::UpdateDevice_Implementation() {
}

void UTacticalComponent::ToggleInfraredMode() {
}

void UTacticalComponent::ToggleDeviceState() {
}

void UTacticalComponent::SetInfraredMode(bool InfraredModeOn) {
}

void UTacticalComponent::SetDeviceState(EIRRTacticalDeviceState NewDeviceState) {
}

void UTacticalComponent::Server_SetInfraredMode_Implementation(bool bInfraredOn) {
}
bool UTacticalComponent::Server_SetInfraredMode_Validate(bool bInfraredOn) {
    return true;
}

void UTacticalComponent::Server_SetDeviceState_Implementation(EIRRTacticalDeviceState NewDeviceState) {
}

void UTacticalComponent::OnRep_DeviceState() {
}

void UTacticalComponent::OnRep_DeviceInfraredOn() {
}


bool UTacticalComponent::IsInInfraredMode() const {
    return false;
}

bool UTacticalComponent::IsDeviceActive() const {
    return false;
}

EIRRTacticalDeviceState UTacticalComponent::GetDeviceState() const {
    return EIRRTacticalDeviceState::Off;
}

void UTacticalComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTacticalComponent, bDeviceInfraredOn);
    DOREPLIFETIME(UTacticalComponent, DeviceState);
}


