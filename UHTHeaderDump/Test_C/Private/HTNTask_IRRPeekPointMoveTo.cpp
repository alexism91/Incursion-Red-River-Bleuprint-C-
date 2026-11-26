#include "HTNTask_IRRPeekPointMoveTo.h"

UHTNTask_IRRPeekPointMoveTo::UHTNTask_IRRPeekPointMoveTo() {
    this->NodeName = TEXT("Peek Point Move To");
    this->bTestPathDuringPlanning = false;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->CornerHeightOffset = 120.00f;
    this->MaxBackoffDistance = 500.00f;
    this->SpaceBetween = 75.00f;
    this->BackoffHalfWidth = 150.00f;
    this->MinBackoffRows = 3;
    this->MinCostOriginDistance = 100.00f;
    this->MaxCostOriginDistance = 500.00f;
    this->PreferredStandoff = 250.00f;
    this->StandoffWeight = 1.00f;
    this->MinDistanceToFriendly = 75.00f;
    this->QueryTimeout = 2.00f;
    this->PeekPlanningCost = 100;
    this->bFinishWhenLastKnownInSight = true;
    this->RecalculateDistanceThreshold = 150.00f;
    this->PeekedCornerLifetime = 10.00f;
    this->PeekedCornerTolerance = 100.00f;
    this->PeekedCornerInvalidateDistance = 300.00f;
    this->bRunSliceStep = true;
    this->SliceProbeDepth = 600.00f;
    this->SliceProbeHalfWidth = 400.00f;
    this->SliceProbeSpaceBetween = 150.00f;
    this->SliceStepAngle = 25.00f;
    this->MinSliceStepDistance = 75.00f;
    this->MaxSliceStepDistance = 400.00f;
    this->SliceSpaceBetween = 75.00f;
    this->MinSliceRows = 3;
    this->bMaintainSliceStandoff = true;
    this->MaxSliceCandidatesTested = 6;
    this->MinNewlyRevealed = 1;
    this->GoodEnoughRevealed = 4;
    this->StallTimeout = 10.00f;
    this->StallMinDisplacement = 10.00f;
}


