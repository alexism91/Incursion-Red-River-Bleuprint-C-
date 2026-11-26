#include "PCGPathfindingSettings.h"

UPCGPathfindingSettings::UPCGPathfindingSettings() {
    this->SearchDistance = 1000.00f;
    this->bStartLocationsAsInput = false;
    this->bGoalLocationsAsInput = false;
    this->GoalMappingMode = EPCGPathfindingGoalMappingMode::EachStartToNearestGoal;
    this->HeuristicWeight = 1.00f;
    this->CostFunctionMode = EPCGPathfindingCostFunctionMode::Distance;
    this->MaximumFitnessPenaltyFactor = 10.00f;
    this->bUsePathTraces = false;
    this->bAcceptPartialPath = true;
    this->bOutputAsSpline = true;
    this->SplineMode = EPCGPathfindingSplineMode::Curve;
    this->bCopyOriginatingPoints = false;
}


