#include "HTNTask_ShootTarget.h"

UHTNTask_ShootTarget::UHTNTask_ShootTarget() {
    this->ShootTime = 3.00f;
    this->ShootTimeRandomDeviation = 1.00f;
    this->bWaitForAtLeastOneShot = true;
    this->MaxWaitForShotTime = 0.00f;
    this->bFinishAfterBurstOnFullAuto = false;
    this->bFinishWhenShotAtByUnseen = false;
    this->UnseenFinishDelay = 0.20f;
    this->UnderFireTimeMultiplier = 0.50f;
    this->ShotAtByVisibleTimeMultiplier = 0.50f;
    this->TargetAimingAtMeTimeMultiplier = 0.50f;
    this->TargetAimAtMeAngle = 5.00f;
}


