#include "UPSMoveParams.h"

FUPSMoveParams::FUPSMoveParams() {
    this->bUsePathfinding = false;
    this->bAllowPartialPath = false;
    this->bProjectGoalLocation = false;
    this->NavFilter = NULL;
    this->AcceptenceRadius = 0.00f;
    this->bReachTestIncludesAgentRadius = false;
    this->bCanStrafe = false;
}

