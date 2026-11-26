#include "OdinCloneEffect.h"

UOdinCloneEffect::UOdinCloneEffect() {
    this->SampleRate = 48000;
    this->Stereo = false;
}

UOdinCloneEffect* UOdinCloneEffect::ConstructCloneEffect(UObject* WorldContextObject) {
    return NULL;
}


