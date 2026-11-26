#include "OdinMuteEffect.h"

UOdinMuteEffect::UOdinMuteEffect() {
    this->MuteFlag = EOdinMuteEffectOptions::ODIN_EFFECT_TOGGLE_UNCHANGED;
}

UOdinMuteEffect* UOdinMuteEffect::ConstructMuteEffect(UObject* WorldContextObject, EOdinMuteEffectOptions Toggle) {
    return NULL;
}


