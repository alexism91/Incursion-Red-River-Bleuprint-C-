#include "GrenadeActor_Flashbang.h"

AGrenadeActor_Flashbang::AGrenadeActor_Flashbang(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlashRadiusMultiplier = 1.00f;
    this->BaseFlashDuration = 4.00f;
    this->AfterimageDurationMultiplier = 1.50f;
    this->MinFlashIntensity = 0.05f;
    this->DistanceFalloffCurve = NULL;
    this->AngleFalloffCurve = NULL;
    this->LineOfSightSampleOffset = 50.00f;
    this->IndirectFlashFraction = 0.25f;
    this->BlindedEffectTemplate = NULL;
}


