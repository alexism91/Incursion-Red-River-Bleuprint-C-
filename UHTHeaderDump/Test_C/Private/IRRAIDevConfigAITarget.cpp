#include "IRRAIDevConfigAITarget.h"

FIRRAIDevConfigAITarget::FIRRAIDevConfigAITarget() {
    this->TargetLookTowardsAfterSensedTime = 0.00f;
    this->TargetLookTowardsAfterLostSightTime = 0.00f;
    this->TargetLookAtMeAngle = 0.00f;
    this->TargetAimAtMeAngle = 0.00f;
    this->FriendlyFireBlockShootDuration = 0.00f;
    this->FriendlyFireBlockShootDuration_RandomFactor = 0.00f;
    this->ProtectionMaxHitDistanceRatio = 0.00f;
    this->CanShootInterval = 0.00f;
}

