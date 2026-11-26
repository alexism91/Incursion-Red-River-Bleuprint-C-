#include "HTNTask_IRRStrafeMoveTo.h"

UHTNTask_IRRStrafeMoveTo::UHTNTask_IRRStrafeMoveTo() {
    this->NodeName = TEXT("Strafe Move To");
    this->TraceChannel = ECC_GameTraceChannel2;
    this->ProtectionWidthOffset = 40.00f;
    this->MaxTraces = 600;
    this->GridHalfSize = 350.00f;
    this->SpaceBetween = 75.00f;
    this->MinRepositionDistance = 100.00f;
    this->MinDistanceToFriendly = 75.00f;
    this->MaxThreats = 4;
    this->VisibleThreatWeight = 1.00f;
    this->UnseenThreatWeight = 0.40f;
    this->SideBias = EIRRStrafeSideBias::Alternate;
    this->SideMemoryLifetime = 20.00f;
    this->LateralWeight = 1.00f;
    this->SideBiasWeight = 0.35f;
    this->ClosenessWeight = 0.75f;
    this->PathCostWeight = 0.50f;
    this->SolveTimeout = 1.50f;
    this->RecalculateDistanceThreshold = 150.00f;
    this->StallTimeout = 3.00f;
    this->StallMinDisplacement = 25.00f;
    this->StrafePlanningCost = 100;
}


