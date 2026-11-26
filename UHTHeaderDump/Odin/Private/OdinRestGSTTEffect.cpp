#include "OdinRestGSTTEffect.h"

UOdinRestGSTTEffect::UOdinRestGSTTEffect() {
    this->SampleRate = 48000;
    this->ResampleRate = 16000;
    this->bStereo = false;
    this->Timer = 3.00f;
}

UOdinRestGSTTEffect* UOdinRestGSTTEffect::ConstructRestGSTTEffect(UObject* WorldContextObject) {
    return NULL;
}


