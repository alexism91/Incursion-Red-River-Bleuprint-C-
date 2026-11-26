#include "SimpleGameplayEffect.h"

USimpleGameplayEffect::USimpleGameplayEffect() {
    this->Icon = NULL;
    this->Duration = ESimpleGameplayEffectDuration::Instant;
    this->DurationMagnitude = 0.00f;
    this->TickInterval = 0.00f;
    this->EffectMagnitude = 0.00f;
    this->StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::SingleInstance;
    this->StopMontage = false;
    this->EffectAkStart = NULL;
    this->EffectAkStop = NULL;
    this->bPostAkEventsOnlyForPlayers = true;
    this->Instigator = NULL;
    this->AbilityComponent = NULL;
}

void USimpleGameplayEffect::Tick() {
}

bool USimpleGameplayEffect::ShouldPostAkEvents() const {
    return false;
}

bool USimpleGameplayEffect::ShouldBeReplacedBy_Implementation(USimpleGameplayEffect* NewEffect) {
    return false;
}

void USimpleGameplayEffect::Replace(USimpleGameplayEffect* NewEffect) {
}

void USimpleGameplayEffect::ReInit() {
}

void USimpleGameplayEffect::OnMaskChanged_Implementation(bool bMasked) {
}

void USimpleGameplayEffect::NotifyUpdated() {
}







bool USimpleGameplayEffect::IsSameStackAs_Implementation(USimpleGameplayEffect* Other) {
    return false;
}

bool USimpleGameplayEffect::IsMasked() const {
    return false;
}

void USimpleGameplayEffect::HandleTagRemoved(const FGameplayTag& Tag) {
}

void USimpleGameplayEffect::HandleTagAdded(const FGameplayTag& Tag) {
}

FText USimpleGameplayEffect::GetEffectName_Implementation() const {
    return FText::GetEmpty();
}

UTexture2D* USimpleGameplayEffect::GetEffectIcon_Implementation() const {
    return NULL;
}

void USimpleGameplayEffect::Finish() {
}

bool USimpleGameplayEffect::CanStartMontage_Implementation() {
    return false;
}

bool USimpleGameplayEffect::CanStartEffect_Implementation(UGameplayAbilityComponent* Target) {
    return false;
}

bool USimpleGameplayEffect::CanStartAudio_Implementation() {
    return false;
}

bool USimpleGameplayEffect::CanBeReplaced_Implementation(USimpleGameplayEffect* Effect) {
    return false;
}

bool USimpleGameplayEffect::CanActivate_Implementation() {
    return false;
}

void USimpleGameplayEffect::Activate() {
}


