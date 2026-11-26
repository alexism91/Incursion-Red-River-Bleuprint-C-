#include "HTNTask_IRRBoundMoveTo.h"

UHTNTask_IRRBoundMoveTo::UHTNTask_IRRBoundMoveTo() {
    this->NodeName = TEXT("Bound Move To");
    this->bAutoCrouch = false;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->MaxTraces = 800;
    this->MinBoundDistance = 600.00f;
    this->MaxBoundDistance = 1500.00f;
    this->SprintBoundChance = 0.80f;
    this->SprintBoundMinDistance = 1000.00f;
    this->FallbackMinDistance = 200.00f;
    this->SpaceBetween = 150.00f;
    this->MinDistanceToTarget = 800.00f;
    this->MaxDetourRatio = 1.60f;
    this->MinDistanceToFriendly = 100.00f;
    this->ExposureSampleHeight = 120.00f;
    this->PathSampleSpacing = 100.00f;
    this->RunSpeed = 550.00f;
    this->MaxRoutesEvaluated = 6;
    this->MaxExposedTime = 2.50f;
    this->MaxThreats = 4;
    this->VisibleThreatWeight = 1.00f;
    this->UnseenThreatWeight = 0.40f;
    this->SideBias = EIRRStrafeSideBias::Alternate;
    this->SideMemoryLifetime = 20.00f;
    this->DistanceWeight = 1.00f;
    this->FullAngleChangeDegrees = 30.00f;
    this->AngleChangeWeight = 1.00f;
    this->SideBiasWeight = 0.35f;
    this->ExposureWeight = 1.50f;
    this->StopSprintDistanceToGoal = 250.00f;
    this->SolveTimeout = 1.50f;
    this->StallTimeout = 2.00f;
    this->StallMinDisplacement = 25.00f;
    this->SuccessOnStallDistance = 400.00f;
    this->BoundPlanningCost = 100;
}


