#include "IRRAIDirectorConfig.h"

FIRRAIDirectorConfig::FIRRAIDirectorConfig() {
    this->PlayerGroupingPathDistanceRangeMeters = 0.00f;
    this->PlayerGroupingRangeMeters = 0.00f;
    this->BehaviorUpdateInterval = 0.00f;
    this->BodyAwarenessUpdateInterval = 0.00f;
    this->ActivationsPerTick = 0;
    this->TargetAssignmentMaxBotsPerPawn = 0;
    this->BodySpotMaxDistanceMeters = 0.00f;
    this->BodyTraceBudgetPerTick = 0;
    this->BodyRecheckIntervalSeconds = 0.00f;
    this->BodyRecheckBackoffMaxSeconds = 0.00f;
}

