#include "DoorSwingComponent.h"
#include "Net/UnrealNetwork.h"

UDoorSwingComponent::UDoorSwingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSwingDuration = 0.60f;
    this->ClosedTolerance = 2.00f;
    this->PhysicsSyncInterval = 0.05f;
    this->FreeSwingInterpSpeed = 12.00f;
    this->DoorOffsetYaw = 0.00f;
    this->Door = NULL;
    this->HingeParent = NULL;
}

void UDoorSwingComponent::SwingTo(float TargetYaw, UCurveFloat* AlphaCurve, float PlayRate) {
}

void UDoorSwingComponent::SwingAlongCurve(UCurveFloat* OffsetCurve, float Direction, float PlayRate) {
}

void UDoorSwingComponent::SetFreeSwingEnabled(bool bEnabled) {
}

void UDoorSwingComponent::OnRep_Swing() {
}

void UDoorSwingComponent::OnRep_DoorOffsetYaw() {
}

bool UDoorSwingComponent::IsSwinging() const {
    return false;
}

bool UDoorSwingComponent::IsFreeSwinging() const {
    return false;
}

void UDoorSwingComponent::InitializeDoor(UPrimitiveComponent* InDoor) {
}

float UDoorSwingComponent::GetOpenAngle() const {
    return 0.0f;
}

float UDoorSwingComponent::GetHingeYaw() const {
    return 0.0f;
}

float UDoorSwingComponent::GetClosedYaw() const {
    return 0.0f;
}

void UDoorSwingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDoorSwingComponent, Swing);
    DOREPLIFETIME(UDoorSwingComponent, DoorOffsetYaw);
}


