#include "PatrolPointSettings.h"

FPatrolPointSettings::FPatrolPointSettings() {
    this->bUseEnemyActionsPreset = false;
    this->EnemyActionsPreset = NULL;
    this->EnemyActionsExecutionType = EEnemyActionsExecutionType::RandomAction;
    this->bRotateOnPointAfterReach = false;
    this->ReachRadius = 0.00f;
    this->NextPatrolPointSolver = NULL;
}

