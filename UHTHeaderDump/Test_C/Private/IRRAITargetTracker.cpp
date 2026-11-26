#include "IRRAITargetTracker.h"

UIRRAITargetTracker::UIRRAITargetTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIRRAITargetTracker::TargetSensed(FIRRAISenseDataSource SenseData, float AdditionalDelay) {
}

void UIRRAITargetTracker::OnSuppressionEvent(AActor* Owner, const FIRRAISuppressionEventData& SuppressionEvent) {
}

void UIRRAITargetTracker::OnReceiveDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak) {
}

void UIRRAITargetTracker::OnCurrentSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& SensedStimuli) {
}

bool UIRRAITargetTracker::HasVisibleTarget(bool bIncludeGainingSight) const {
    return false;
}

bool UIRRAITargetTracker::HasTargetWithinDistance(float StraightLineDistance, float PathLength, float RecentSightTime) const {
    return false;
}

bool UIRRAITargetTracker::HasShootableTarget() const {
    return false;
}

TArray<UIRRAITarget*> UIRRAITargetTracker::GetVisibleTargets() const {
    return TArray<UIRRAITarget*>();
}

TArray<UIRRAITarget*> UIRRAITargetTracker::GetTargetsWithTag(const FGameplayTag& Tag) const {
    return TArray<UIRRAITarget*>();
}

UIRRAITarget* UIRRAITargetTracker::GetTarget(const APawn* TargetActor) const {
    return NULL;
}

UIRRAITarget* UIRRAITargetTracker::GetOrCreateTarget(APawn* TargetActor, bool bForceAdd) {
    return NULL;
}

TArray<UIRRAITarget*> UIRRAITargetTracker::GetKnownTargets() const {
    return TArray<UIRRAITarget*>();
}

TArray<UIRRAITarget*> UIRRAITargetTracker::GetConfirmedHostileTargets() const {
    return TArray<UIRRAITarget*>();
}

TArray<UIRRAITarget*> UIRRAITargetTracker::GetAllTargets() const {
    return TArray<UIRRAITarget*>();
}


