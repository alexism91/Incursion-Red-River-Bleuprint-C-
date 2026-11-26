#include "AGRAnimMasterComponent.h"
#include "Net/UnrealNetwork.h"

UAGRAnimMasterComponent::UAGRAnimMasterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFirstPerson = false;
    this->GroundDistance = 0.00f;
    this->TimeToJumpApex = 0.00f;
    this->bInAir = false;
    this->bFalling = false;
    this->RotationMethod = EAGR_RotationMethod::RotateToVelocity;
    this->RotationSpeed = 360.00f;
    this->TurnStartAngle = 90.00f;
    this->TurnStopTolerance = 1.00f;
    this->AimOffsetType = EAGR_AimOffsets::Look;
    this->AimOffsetBehavior = EAGR_AimOffsetClamp::Left;
    this->AimClamp = 135.00f;
    this->CameraBased = true;
    this->AimSocketName = TEXT("hand_r");
    this->LookAtSocketName = TEXT("spine_03");
    this->TraceChannel = ECC_Visibility;
    this->OwningCharacter = NULL;
    this->OwnerMovementComponent = NULL;
}

void UAGRAnimMasterComponent::TurnInPlaceTick() {
}

void UAGRAnimMasterComponent::SetupRotation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance) {
}

void UAGRAnimMasterComponent::SetupOverlayPose(FGameplayTag InOverlayPose) {
}

void UAGRAnimMasterComponent::SetupFpp(bool bInFirstPerson) {
}

void UAGRAnimMasterComponent::SetupBasePose(FGameplayTag InBasePose) {
}

void UAGRAnimMasterComponent::SetupAimOffset(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior, const float InAimClamp, const bool InCameraBased, const FName InAimSocketName, const FName InLookAtSocketName) {
}

void UAGRAnimMasterComponent::ServerSetupAimOffset_Implementation(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior) {
}

void UAGRAnimMasterComponent::ServerSetRotation_Implementation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance) {
}

void UAGRAnimMasterComponent::ServerSetOverlayPose_Implementation(const FGameplayTag InOverlayPose) {
}

void UAGRAnimMasterComponent::ServerSetLookAt_Implementation(const FVector LookAt) {
}

void UAGRAnimMasterComponent::ServerSetBasePose_Implementation(const FGameplayTag InBasePose) {
}

void UAGRAnimMasterComponent::ServerSetAimOffset_Implementation(const FRotator InAimOffset) {
}

void UAGRAnimMasterComponent::ServerChangeRotation_Implementation(const EAGR_RotationMethod InRotationMethod) {
}

void UAGRAnimMasterComponent::ServerChangeAimOffset_Implementation(const EAGR_AimOffsets InAimOffsetType) {
}

bool UAGRAnimMasterComponent::RemoveTag(FGameplayTag InTag) {
    return false;
}

void UAGRAnimMasterComponent::OnRep_RotationSpeed() {
}

void UAGRAnimMasterComponent::OnRep_RotationMethod() {
}

void UAGRAnimMasterComponent::OnRep_OverlayPose(const FGameplayTag OldValue) const {
}

void UAGRAnimMasterComponent::OnRep_BasePose(const FGameplayTag OldValue) const {
}

void UAGRAnimMasterComponent::NetMultiSetLookAt_Implementation(const FVector LookAt) {
}

void UAGRAnimMasterComponent::NetMultiSetAimOffset_Implementation(const FRotator InAimOffset) {
}

void UAGRAnimMasterComponent::MovementDataTick() {
}

void UAGRAnimMasterComponent::FallTick() {
}

void UAGRAnimMasterComponent::ChangeRotation(const EAGR_RotationMethod InRotationMethod) {
}

void UAGRAnimMasterComponent::ChangeAimOffset(const EAGR_AimOffsets InAimOffsetType) {
}

void UAGRAnimMasterComponent::AimTick() {
}

void UAGRAnimMasterComponent::AddTag(FGameplayTag InTag) {
}

void UAGRAnimMasterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAGRAnimMasterComponent, BasePose);
    DOREPLIFETIME(UAGRAnimMasterComponent, OverlayPose);
    DOREPLIFETIME(UAGRAnimMasterComponent, AnimModTags);
}


