#include "SimpleGameplayEffect_Fractured.h"
#include "ESimpleGameplayEffectDuration.h"
#include "ESimpleGameplayEffectStackingBehaviour.h"

USimpleGameplayEffect_Fractured::USimpleGameplayEffect_Fractured() {
    this->Duration = ESimpleGameplayEffectDuration::Infinite;
    this->StackingBehaviour = ESimpleGameplayEffectStackingBehaviour::ReInit;
    this->FractureChance = 15.00f;
    this->FractureBodyParts.AddDefaulted(6);
    this->FractureDamageThreshold = 35.00f;
    this->FracturedBodyPart = EIRRBodyPart::LeftLeg;
}

bool USimpleGameplayEffect_Fractured::IsBreakingHit() const {
    return false;
}

EIRRBodyPart USimpleGameplayEffect_Fractured::GetFracturedBodyPart() const {
    return EIRRBodyPart::Head;
}


