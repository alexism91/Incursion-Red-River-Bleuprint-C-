#include "IRRAIMovementComponent.h"

UIRRAIMovementComponent::UIRRAIMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreBaseRotation = true;
    this->bEnableTurnInertia = true;
    this->TurnSmoothingTime = 0.20f;
    this->MaxTurnSpeed = 540.00f;
    this->BodyRotationMode = EIRRBodyRotationMode::FollowDesired;
    this->TurnStartAngle = 45.00f;
    this->TurnStopTolerance = 5.00f;
    this->AtAngleMoveSpeedThreshold = 25.00f;
    this->bEnableSprintPivot = true;
    this->SprintPivotMinAngle = 60.00f;
    this->SprintPivotExitAngle = 20.00f;
    this->SprintPivotTurnSmoothingTime = 0.10f;
    this->SprintPivotMaxTurnSpeed = 720.00f;
    this->SprintPivotSpeedClamp = 250.00f;
    this->SprintPivotTimeout = 1.00f;
    this->bEnableCornerSpeedScaling = true;
    this->CornerSlowStartAngle = 25.00f;
    this->CornerSlowEndAngle = 100.00f;
    this->CornerMinSpeedScale = 0.40f;
    this->CornerSlowInDistance = 300.00f;
    this->CornerSlowOutDistance = 150.00f;
    this->CornerScaleInterpSpeed = 8.00f;
    this->bEnableSweepSpeedScaling = true;
    this->MaxSweepRate = 30.00f;
    this->SweepEngageDistance = 700.00f;
    this->SweepMinPivotDistance = 75.00f;
    this->SweepMinSinAngle = 0.25f;
    this->SweepVelocityMinSpeed = 50.00f;
    this->SweepScaleInterpSpeed = 6.00f;
    this->MinAchievableSprintSpeed = 400.00f;
    this->bBlockLeanWhileSprinting = true;
    this->PostSprintLeanCooldown = 0.25f;
    this->ChangeCrouchInterval = 0.75f;
    this->SoftStopBrakingScale = 0.15f;
    this->SoftStopEndSpeed = 80.00f;
    this->SoftStopMaxDuration = 1.50f;
    this->bEnableOffMeshRecovery = true;
    this->OffMeshRecoveryInputScale = 1.00f;
    this->OffMeshRecoveryMovingInputScale = 0.75f;
    this->OffMeshRecoveryMaxDuration = 3.00f;
    this->OffMeshRecoveryRetryCooldown = 2.00f;
}

bool UIRRAIMovementComponent::WantsAnySprint() const {
    return false;
}

void UIRRAIMovementComponent::StartSoftStop() {
}

void UIRRAIMovementComponent::SetTurnSpeedPreset(EIRRTurnSpeedPreset Preset) {
}

void UIRRAIMovementComponent::SetSweepPivot(const FVector& WorldPivot) {
}

void UIRRAIMovementComponent::SetSprintIntent(bool bSprint) {
}

void UIRRAIMovementComponent::SetMovementParams(const FAIMovementParams& MovementParams) {
}

bool UIRRAIMovementComponent::RequestUpperBodyStance(FGameplayTag StanceTag) {
    return false;
}

bool UIRRAIMovementComponent::RequestCrouch(bool bCrouch, bool bForce) {
    return false;
}

bool UIRRAIMovementComponent::IsSprintPivotActive() const {
    return false;
}

bool UIRRAIMovementComponent::IsSoftStopping() const {
    return false;
}

bool UIRRAIMovementComponent::IsOffMeshRecovering() const {
    return false;
}

bool UIRRAIMovementComponent::IsBodyTurnSettled(const float MaxTurnSpeedDegPerSec) const {
    return false;
}

bool UIRRAIMovementComponent::IsAtAngleRotationEnabled() const {
    return false;
}

bool UIRRAIMovementComponent::HasSweepPivot() const {
    return false;
}

void UIRRAIMovementComponent::HandleMovementStanceChanged(EIRRMovementStance NewStance) {
}

FGameplayTag UIRRAIMovementComponent::GetUpperBodyStance() const {
    return FGameplayTag{};
}

float UIRRAIMovementComponent::GetTurnSpeed() const {
    return 0.0f;
}

float UIRRAIMovementComponent::GetSweepSpeedScale() const {
    return 0.0f;
}

bool UIRRAIMovementComponent::GetSprintIntent() const {
    return false;
}

float UIRRAIMovementComponent::GetDesiredYawError() const {
    return 0.0f;
}

float UIRRAIMovementComponent::GetCornerSpeedScale() const {
    return 0.0f;
}

FGameplayTag UIRRAIMovementComponent::GetAimingStanceTag() const {
    return FGameplayTag{};
}

void UIRRAIMovementComponent::ClearTurnSpeedPreset() {
}

void UIRRAIMovementComponent::ClearSweepPivot() {
}

bool UIRRAIMovementComponent::CanFireFromStance() const {
    return false;
}

bool UIRRAIMovementComponent::CanEngageSprint() const {
    return false;
}

bool UIRRAIMovementComponent::CanChangeCrouch() const {
    return false;
}

void UIRRAIMovementComponent::CancelSoftStop() {
}


