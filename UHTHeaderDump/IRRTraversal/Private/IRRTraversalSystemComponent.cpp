#include "IRRTraversalSystemComponent.h"

UIRRTraversalSystemComponent::UIRRTraversalSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoCheck = true;
    this->JumpTrackingDuration = 0.80f;
    this->WallTraceHeight = 300.00f;
    this->WallTraceWidth = 10.00f;
    this->WallTraceIteration = 30;
    this->WallTraceAngleThreshold = 135.00f;
    this->WallTraceDistance = 150.00f;
    this->VaultMaxDepth = 80;
    this->VaultMinHeight = 60.00f;
    this->VaultClearance = 90.00f;
    this->VaultDepthThreshold = 300;
    this->bUseLegacyWallTrace = false;
    this->WallTraceChannel = TraceTypeQuery1;
    this->bSweepTraversalPath = false;
    this->bIsLocallyControlled = false;
    this->bIsTraversing = false;
    this->CharacterRef = NULL;
    this->MovementComponent = NULL;
    this->InputManager = NULL;
    this->MotionWarpingComponent = NULL;
}

void UIRRTraversalSystemComponent::UpdateMotionWarpTargets_Implementation(FIRRTraversalWallInteractionResults Interaction, UIRRTraversalActionDataAsset* TraversalAction) {
}

void UIRRTraversalSystemComponent::TryTakeTraversalAction_Implementation() {
}

bool UIRRTraversalSystemComponent::TryFindTraversalAction_Implementation(FIRRTraversalWallInteractionResults Interaction, EIRRTraversalAction Action, UIRRTraversalActionDataAsset*& TraversalAction) {
    return false;
}

bool UIRRTraversalSystemComponent::TraceForWall_Implementation(FVector Position, FVector Direction, float Height, int32 Iteration, bool bTraceComplex, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FIRRTraversalWallInteractionResults& InteractionResults, EIRRTraversalAction& ActionResult, UIRRTraversalActionDataAsset*& TraversalAction) {
    return false;
}

void UIRRTraversalSystemComponent::ResetMotionWarping_Server_Implementation(TEnumAsByte<EMovementMode> MovementMode) {
}

void UIRRTraversalSystemComponent::ResetMotionWarping_Networked(TEnumAsByte<EMovementMode> MovementMode) {
}

void UIRRTraversalSystemComponent::ResetMotionWarping_MC_Implementation(TEnumAsByte<EMovementMode> MovementMode) {
}

void UIRRTraversalSystemComponent::ResetMotionWarping_Implementation(TEnumAsByte<EMovementMode> MovementMode) {
}

void UIRRTraversalSystemComponent::PrepareMotionWarping_Server_Implementation() {
}

void UIRRTraversalSystemComponent::PrepareMotionWarping_Networked() {
}

void UIRRTraversalSystemComponent::PrepareMotionWarping_MC_Implementation() {
}

void UIRRTraversalSystemComponent::PrepareMotionWarping_Implementation() {
}

void UIRRTraversalSystemComponent::OnJumped() {
}

void UIRRTraversalSystemComponent::OnCharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

bool UIRRTraversalSystemComponent::CanWallTrace_Implementation(FVector Direction) {
    return false;
}

void UIRRTraversalSystemComponent::AddMotionWarpingTarget_Server_Implementation(FName TargetName, FVector TargetLocation, FRotator TargetRotation) {
}

void UIRRTraversalSystemComponent::AddMotionWarpingTarget_Networked(FName TargetName, FVector TargetLocation, FRotator TargetRotation) {
}

void UIRRTraversalSystemComponent::AddMotionWarpingTarget_Implementation(FName TargetName, FVector TargetLocation, FRotator TargetRotation) {
}


