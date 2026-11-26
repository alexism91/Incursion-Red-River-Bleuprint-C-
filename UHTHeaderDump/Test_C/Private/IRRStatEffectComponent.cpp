#include "IRRStatEffectComponent.h"

UIRRStatEffectComponent::UIRRStatEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIRRStatEffectComponent::RemoveEffect(const FGameplayTag EffectTag) {
}

FIRRAIStatEffect UIRRStatEffectComponent::GetCurrentStatEffects() const {
    return FIRRAIStatEffect{};
}

void UIRRStatEffectComponent::ApplyEffect(const FGameplayTag EffectTag, const FIRRAIStatEffect& Effect) {
}


