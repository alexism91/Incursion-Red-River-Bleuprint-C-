#include "HTNTask_HoldInCover.h"

UHTNTask_HoldInCover::UHTNTask_HoldInCover() {
    this->NodeName = TEXT("Hold In Cover");
    this->DriftCheckInterval = 0.75f;
    this->DriftToleranceDistance = 75.00f;
    this->ReturnAcceptanceRadius = 15.00f;
    this->MinAmmoRatioToLeave = 0.30f;
    this->TopOffAmmoRatioBeforeLeave = 0.75f;
    this->RecentSuppressionTime = 2.00f;
    this->MinCrouchTimeBeforePeek = 1.50f;
    this->StandUpGraceTime = 0.66f;
    this->StandUpGraceTimeVisibleTarget = 1.25f;
    this->bHoldStandForShot = true;
    this->MaxStandExtensionTime = 2.00f;
    this->StandUpLeanResetTime = 0.66f;
    this->MaxLeanCornerDistance = 1000.00f;
    this->LeanResetDelayMin = 0.50f;
    this->LeanResetDelayMax = 0.75f;
    this->ReloadCheckInterval = 0.50f;
}


