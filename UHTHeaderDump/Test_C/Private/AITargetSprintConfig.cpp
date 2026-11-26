#include "AITargetSprintConfig.h"

FAITargetSprintConfig::FAITargetSprintConfig() {
    this->bAllowSprint = false;
    this->MinPathLengthToStartRunning = 0.00f;
    this->MinPathLengthToKeepRunning = 0.00f;
    this->TargetTooCloseDistance = 0.00f;
    this->TargetTooClosePathLength = 0.00f;
    this->TargetCloseRecentSightTime = 0.00f;
    this->MinTimeSinceStartMove = 0.00f;
    this->RecentSuppressionTime = 0.00f;
    this->RecentVisionChangeHoldTime = 0.00f;
    this->MovingInLineAngleDegrees = 0.00f;
    this->RunExitDwellTime = 0.00f;
}

