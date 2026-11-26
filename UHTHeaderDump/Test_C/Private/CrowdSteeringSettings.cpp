#include "CrowdSteeringSettings.h"

FCrowdSteeringSettings::FCrowdSteeringSettings() {
    this->bAnticipateTurns = false;
    this->bObstacleAvoidance = false;
    this->bSeparation = false;
    this->bOptimizeVisibility = false;
    this->bOptimizeTopology = false;
    this->bPathOffset = false;
    this->bSlowdownAtGoal = false;
    this->bAffectFallingVelocity = false;
    this->bRotateToVelocity = false;
    this->SeparationWeight = 0.00f;
    this->CollisionQueryRange = 0.00f;
    this->PathOptimizationRange = 0.00f;
    this->AvoidanceRangeMultiplier = 0.00f;
}

