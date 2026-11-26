#include "IRRAITarget.h"

UIRRAITarget::UIRRAITarget() {
}

void UIRRAITarget::OnTargetDeath(FIRRDamageData DamageData) {
}

void UIRRAITarget::OnLocationSearched() {
}

bool UIRRAITarget::IsTargetKnown() const {
    return false;
}

bool UIRRAITarget::IsCurrentTarget() const {
    return false;
}

bool UIRRAITarget::HasSearchedSensedLocation() const {
    return false;
}

bool UIRRAITarget::HasBeenSensedBy(FGameplayTag SenseTag, float& TimeSince) const {
    return false;
}

float UIRRAITarget::GetTimeSinceVisionChanged(bool& Seen) const {
    return 0.0f;
}

float UIRRAITarget::GetTimeSinceUnderFire() const {
    return 0.0f;
}

float UIRRAITarget::GetTimeSinceLastKnownUpdated(const float TimeSeconds) const {
    return 0.0f;
}

bool UIRRAITarget::GetTimeLastSensed(double& TimeSensed, bool bOnlyPersonal) const {
    return false;
}

bool UIRRAITarget::GetTargetSeen(float& TimeSince) const {
    return false;
}

bool UIRRAITarget::GetTargetHeard(float& TimeSince) const {
    return false;
}

FVector UIRRAITarget::GetTargetEyeLocation() const {
    return FVector{};
}

float UIRRAITarget::GetTargetDistance() const {
    return 0.0f;
}

FIRRAITargetDataStruct UIRRAITarget::GetTargetData() const {
    return FIRRAITargetDataStruct{};
}

bool UIRRAITarget::GetSenseEventForTag(FGameplayTag SenseTag, FIRRAISenseEvent& OutSenseEvent) const {
    return false;
}

FIRRAIPathData UIRRAITarget::GetPathToLastKnownLocation() const {
    return FIRRAIPathData{};
}

bool UIRRAITarget::GetLastSensedData(FIRRNavLocation& LastSensedLocation, double& TimeSensed, FGameplayTag& SenseType, bool bOnlyPersonal) const {
    return false;
}

bool UIRRAITarget::GetIsTargetVisible() const {
    return false;
}

bool UIRRAITarget::GetIsReadyToExecuteSearch() const {
    return false;
}

bool UIRRAITarget::GetHasTargetShotAtMe(float& TimeSince) const {
    return false;
}

bool UIRRAITarget::GetHasTargetDamageMe(float& TimeSince) const {
    return false;
}

float UIRRAITarget::GetEngagementDistance() const {
    return 0.0f;
}

bool UIRRAITarget::GetCurrentFocusPoint(FIRRAISimplePoint& OutFocusPoint) const {
    return false;
}

bool UIRRAITarget::GetCombatVector(FVector& Result) const {
    return false;
}

bool UIRRAITarget::CheckLookTowardsTarget() const {
    return false;
}


