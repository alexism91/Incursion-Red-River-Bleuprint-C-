#include "LeanComponent.h"
#include "Net/UnrealNetwork.h"

ULeanComponent::ULeanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeanInput = 0.00f;
    this->LocalLeanInput = 0.00f;
}

void ULeanComponent::SetLeanBlockHeld(bool bHeld) {
}

void ULeanComponent::SetFreeLookInput(FVector2D NewFreeLookInput) {
}

void ULeanComponent::ReplicateLeanInputAfterDelay(float NewLeanInput, float Delay) {
}

void ULeanComponent::ReplicateLeanInput_Server_Implementation(float NewLeanInput) {
}

void ULeanComponent::ReplicateLeanInput(float NewLeanInput) {
}

void ULeanComponent::ReplicateFreeLookInput_Server_Implementation(FVector2D NewFreeLookInput) {
}

void ULeanComponent::ReplicateFreeLookInput(FVector2D NewFreeLookInput) {
}

void ULeanComponent::OnLeanDelayTimerComplete(float InDelayedLeanInput) {
}

float ULeanComponent::GetLeanInput() const {
    return 0.0f;
}

bool ULeanComponent::GetIsLeaningRight() const {
    return false;
}

bool ULeanComponent::GetIsLeaning() const {
    return false;
}

bool ULeanComponent::GetIsLeanBlocked() const {
    return false;
}

FVector2D ULeanComponent::GetFreeLookInput() const {
    return FVector2D{};
}

void ULeanComponent::BlockLeanForDuration(float Duration) {
}

void ULeanComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULeanComponent, FreeLookInput);
    DOREPLIFETIME(ULeanComponent, LeanInput);
}


