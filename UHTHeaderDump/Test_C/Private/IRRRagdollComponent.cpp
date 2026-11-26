#include "IRRRagdollComponent.h"
#include "Net/UnrealNetwork.h"

UIRRRagdollComponent::UIRRRagdollComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
    this->CapsuleComponent = NULL;
    this->Mesh = NULL;
}

void UIRRRagdollComponent::UpdateRagdollTransform() {
}

void UIRRRagdollComponent::UpdateRagdollSnapshot() {
}

void UIRRRagdollComponent::StopRagdollUpdate() {
}

void UIRRRagdollComponent::StopRagdollMovement() {
}

void UIRRRagdollComponent::Server_SetMeshLocationDuringRagdoll_Implementation(const FVector& Vector) {
}

void UIRRRagdollComponent::RagdollStart(const FIRRDamageData& DamageData, bool bIsAIControlled) {
}

void UIRRRagdollComponent::RagdollEnd() {
}

void UIRRRagdollComponent::OnRep_RagdollTransform() {
}

void UIRRRagdollComponent::OnRep_RagdollSnapshot() {
}

void UIRRRagdollComponent::OnMovementModeChangedWhileRagdolled(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

bool UIRRRagdollComponent::IsLocallyControlled() const {
    return false;
}

FPoseSnapshot UIRRRagdollComponent::GetRagdollSnapshot() {
    return FPoseSnapshot{};
}

USkeletalMeshComponent* UIRRRagdollComponent::GetMesh() const {
    return NULL;
}


UCharacterMovementComponent* UIRRRagdollComponent::GetCharacterMovement() const {
    return NULL;
}

UCapsuleComponent* UIRRRagdollComponent::GetCapsuleComponent() const {
    return NULL;
}

void UIRRRagdollComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRRagdollComponent, TargetRagdollLocation);
    DOREPLIFETIME(UIRRRagdollComponent, RagdollTransform);
}


