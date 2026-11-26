#include "GameplayEffectContext.h"

FGameplayEffectContext::FGameplayEffectContext() {
    this->AbilityLevel = 0;
    this->bHasWorldOrigin = false;
    this->bReplicateSourceObject = false;
    this->bReplicateInstigator = false;
    this->bReplicateEffectCauser = false;
}

