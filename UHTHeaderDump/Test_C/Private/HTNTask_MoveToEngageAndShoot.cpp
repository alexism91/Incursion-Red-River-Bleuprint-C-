#include "HTNTask_MoveToEngageAndShoot.h"

UHTNTask_MoveToEngageAndShoot::UHTNTask_MoveToEngageAndShoot() {
    this->NodeName = TEXT("Move To Engage And Shoot");
    this->MaxFirePositionAttempts = 3;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->SolveTimeout = 2.00f;
    this->GridHalfSize = 350.00f;
    this->SpaceBetween = 50.00f;
    this->MinRepositionDistance = 100.00f;
    this->SameDirectionRejectHalfAngle = 30.00f;
    this->StallTimeout = 3.00f;
    this->StallMinDisplacement = 25.00f;
    this->bSucceedWhenCannotEngage = true;
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


