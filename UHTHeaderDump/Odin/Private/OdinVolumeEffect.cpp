#include "OdinVolumeEffect.h"

UOdinVolumeEffect::UOdinVolumeEffect() {
    this->SampleScale = 2.00f;
    this->ScaleExponent = 1.00f;
    this->VolumeLog10 = false;
}

UOdinVolumeEffect* UOdinVolumeEffect::ConstructVolumeEffect(UObject* WorldContextObject, float Scale) {
    return NULL;
}


