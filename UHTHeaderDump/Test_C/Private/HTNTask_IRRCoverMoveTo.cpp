#include "HTNTask_IRRCoverMoveTo.h"
#include "IRRNavQueryFilter_AvoidanceIgnoreBodies.h"

UHTNTask_IRRCoverMoveTo::UHTNTask_IRRCoverMoveTo() {
    this->NodeName = TEXT("Cover Move To");
    this->AcceptableRadius = 5.00f;
    this->FilterClass = UIRRNavQueryFilter_AvoidanceIgnoreBodies::StaticClass();
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bAlwaysRepathWhenBlackboardValueSet = false;
    this->bAllowStrafe = false;
    this->bSoftStopOnFinish = false;
    this->bAllowPartialPath = false;
    this->bTrackMovingGoal = true;
    this->bRequireNavigableEndLocation = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->bTestPathDuringPlanning = true;
    this->bUsePathCostInsteadOfLength = false;
    this->bForcePlanTimeStringPulling = false;
    this->CostPerUnitPathLength = 1.00f;
}


