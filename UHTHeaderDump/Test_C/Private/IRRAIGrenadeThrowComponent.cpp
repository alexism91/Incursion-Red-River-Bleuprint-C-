#include "IRRAIGrenadeThrowComponent.h"

UIRRAIGrenadeThrowComponent::UIRRAIGrenadeThrowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverarmMinDistance = 1500.00f;
    this->MinTimeBetweenThrows = 15.00f;
    this->LiveGrenadeSpacing = 600.00f;
    this->OverarmLobPitch = 40.00f;
    this->ArcCheckCacheTime = 0.50f;
    this->ArcCheckCacheDistance = 100.00f;
    this->DrawTimeout = 3.00f;
    this->ThrowTimeout = 4.00f;
    this->RedrawHoldTimeout = 3.00f;
    this->RedrawRetryInterval = 0.50f;
    this->ReflexCheckInterval = 0.50f;
}

bool UIRRAIGrenadeThrowComponent::WasLastThrowReleased() const {
    return false;
}

bool UIRRAIGrenadeThrowComponent::StartThrowAtActiveTarget(EIRRGrenadeThrowStyle Style, const FGameplayTagContainer& GrenadeTags) {
    return false;
}

bool UIRRAIGrenadeThrowComponent::StartThrow(const FVector& TargetLocation, EIRRGrenadeThrowStyle Style, const FGameplayTagContainer& GrenadeTags) {
    return false;
}

void UIRRAIGrenadeThrowComponent::RevokeGrenadesFree(const UObject* Key) {
}

bool UIRRAIGrenadeThrowComponent::IsThrowing() const {
    return false;
}

bool UIRRAIGrenadeThrowComponent::IsReflexThrow() const {
    return false;
}

bool UIRRAIGrenadeThrowComponent::IsGrenadesFree() const {
    return false;
}

bool UIRRAIGrenadeThrowComponent::HasGrenade(const FGameplayTagContainer& GrenadeTags) const {
    return false;
}

bool UIRRAIGrenadeThrowComponent::HasClearArcAt(const FVector& TargetLocation, EIRRGrenadeThrowStyle Style, const FGameplayTagContainer& GrenadeTags) const {
    return false;
}

void UIRRAIGrenadeThrowComponent::GrantGrenadesFree(const UObject* Key, const FIRRGrenadeClearance& Clearance) {
}

UGrenadeComponent* UIRRAIGrenadeThrowComponent::GetHeldGrenade() const {
    return NULL;
}

bool UIRRAIGrenadeThrowComponent::GetActiveTargetThrowLocation(FVector& OutLocation) const {
    return false;
}

bool UIRRAIGrenadeThrowComponent::CanThrowAt(const FVector& TargetLocation, const FGameplayTagContainer& GrenadeTags) const {
    return false;
}

void UIRRAIGrenadeThrowComponent::CancelThrow() {
}


