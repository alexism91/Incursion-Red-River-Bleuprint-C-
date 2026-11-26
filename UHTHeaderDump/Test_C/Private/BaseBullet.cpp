#include "BaseBullet.h"

ABaseBullet::ABaseBullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AINoiseRange_Unsuppressed = 12000.00f;
    this->AINoiseRange_Suppressed = 6000.00f;
    this->ImpactAINoiseTag = TEXT("BulletImpact");
    this->ImpactAINoiseRange = 3000.00f;
    this->EffectiveRange = NULL;
}


