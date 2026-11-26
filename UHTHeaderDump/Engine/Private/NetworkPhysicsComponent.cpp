#include "NetworkPhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UNetworkPhysicsComponent::UNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->InputsToNetwork_Owner = 3;
}

void UNetworkPhysicsComponent::ServerReceiveInputData_Implementation(const FNetworkPhysicsRewindDataInputProxy& ClientInputs) {
}

void UNetworkPhysicsComponent::ServerReceiveImportantInputData_Implementation(const FNetworkPhysicsRewindDataImportantInputProxy& ClientInputs) {
}

void UNetworkPhysicsComponent::ServerReceiveDeltaSourceStateFrame_Implementation(const int32 Frame) {
}

void UNetworkPhysicsComponent::ServerReceiveDeltaSourceInputFrame_Implementation(const int32 Frame) {
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedStates() {
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedRemoteInputs() {
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedInputs() {
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceState() {
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceInput() {
}

void UNetworkPhysicsComponent::MulticastReceiveImportantStateData_Implementation(const FNetworkPhysicsRewindDataImportantStateProxy& ServerStates) {
}

void UNetworkPhysicsComponent::MulticastReceiveImportantInputData_Implementation(const FNetworkPhysicsRewindDataImportantInputProxy& ServerInputs) {
}

void UNetworkPhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedDeltaSourceInput);
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedDeltaSourceState);
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedInputs);
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedRemoteInputs);
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedStates);
    DOREPLIFETIME(UNetworkPhysicsComponent, InputsToNetwork_Owner);
}


