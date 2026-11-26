#include "SimpleGameplayEffect_Wounded.h"
#include "ESimpleGameplayEffectDuration.h"
#include "ESimpleGameplayEffectStackingBehaviour.h"

USimpleGameplayEffect_Wounded::USimpleGameplayEffect_Wounded() {
    this->Duration = ESimpleGameplayEffectDuration::Infinite;
    this->StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::ReInit;
    this->BleedingChance = 20.00f;
    this->LightBleedRate = -0.50f;
    this->HeavyBleedRate = -1.50f;
    this->HeavyWoundBodyParts.AddDefaulted(3);
    this->HeavyWoundDamageThreshold = 35.00f;
    this->HeavyIcon = NULL;
    this->ForcedSeverity = EIRRWoundSeverity::FromHit;
    this->bIsHeavy = false;
}

bool USimpleGameplayEffect_Wounded::RollOpensWound_Implementation() const {
    return false;
}


bool USimpleGameplayEffect_Wounded::IsHeavyHit() const {
    return false;
}

bool USimpleGameplayEffect_Wounded::IsHeavy() const {
    return false;
}


