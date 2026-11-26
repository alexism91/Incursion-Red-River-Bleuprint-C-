#include "IRRGroundHoldComponent.h"

UIRRGroundHoldComponent::UIRRGroundHoldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StreamingRadius = 5000.00f;
    this->FloorSearchDepth = 20000.00f;
    this->MaxHoldTime = 20.00f;
    this->CheckInterval = 0.20f;
}

void UIRRGroundHoldComponent::Server_ReportGroundLoaded_Implementation(int32 InHoldId) {
}

void UIRRGroundHoldComponent::RedeployPawn(const FTransform& SpawnTransform) {
}

bool UIRRGroundHoldComponent::IsHolding() const {
    return false;
}

void UIRRGroundHoldComponent::HoldPawnUntilGroundLoaded() {
}

void UIRRGroundHoldComponent::Client_ReleaseHold_Implementation(int32 InHoldId, FVector StandLocation, bool bOnGround) {
}

void UIRRGroundHoldComponent::Client_BeginHold_Implementation(int32 InHoldId, FVector Location, FRotator Rotation, bool bSetRotation) {
}


