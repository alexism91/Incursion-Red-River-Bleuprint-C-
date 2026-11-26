#include "IRRAIBehaviorComponent.h"

UIRRAIBehaviorComponent::UIRRAIBehaviorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxShotAtDistanceToHead = 200.00f;
    this->bInDangerZone = false;
    this->bIsAtPeace = false;
    this->bDispatched = false;
    this->StandingOrderRadius = 0.00f;
    this->ActiveTarget = NULL;
    this->SubNetworkDynamic = NULL;
    this->FormationPatrolPlan = NULL;
    this->InstalledBehaviorPlan = NULL;
}

void UIRRAIBehaviorComponent::ReleaseStandingOrder() {
}

void UIRRAIBehaviorComponent::ReleaseDispatch() {
}

void UIRRAIBehaviorComponent::OnSuppressionReceived(AActor* Owner, const FIRRAISuppressionEventData& SuppressionEvent) {
}

bool UIRRAIBehaviorComponent::IsDispatched() const {
    return false;
}

bool UIRRAIBehaviorComponent::HasStandingOrder() const {
    return false;
}

FGameplayTag UIRRAIBehaviorComponent::GetStandingOrderBehavior() const {
    return FGameplayTag{};
}

void UIRRAIBehaviorComponent::AssignStandingOrder(FGameplayTag OrderBehavior, FVector Location, float Radius) {
}

void UIRRAIBehaviorComponent::AssignPost(FVector Location, float Radius) {
}

void UIRRAIBehaviorComponent::AssignDispatch(FVector Location, float ArrivalRadius, float MaxDuration) {
}


