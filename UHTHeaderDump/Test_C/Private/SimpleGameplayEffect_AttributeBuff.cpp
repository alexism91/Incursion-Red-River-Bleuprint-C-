#include "SimpleGameplayEffect_AttributeBuff.h"

USimpleGameplayEffect_AttributeBuff::USimpleGameplayEffect_AttributeBuff() {
}

float USimpleGameplayEffect_AttributeBuff::GetRemainingAmount() const {
    return 0.0f;
}

bool USimpleGameplayEffect_AttributeBuff::GetBuffSetup(FGameplayTag& OutAttribute, FSimpleAttributeBuff& OutBuff) const {
    return false;
}


