#include "IRRAvoidanceSettings.h"

UIRRAvoidanceSettings::UIRRAvoidanceSettings() {
    this->GrenadeSpotMaxDistance = 2500.00f;
    this->GrenadeSpotHalfAngle = 80.00f;
    this->GrenadeSpotCheckInterval = 0.20f;
    this->GrenadeReactionDelayMin = 0.20f;
    this->GrenadeReactionDelayMax = 0.50f;
    this->bGrenadeHearingUnlocksSpotting = true;
    this->GrenadeNoiseTags.AddDefaulted(1);
    this->GrenadeHearingMatchRadius = 300.00f;
    this->PathCompromiseCheckInterval = 0.10f;
    this->PathCompromiseReactionDelayMin = 0.20f;
    this->PathCompromiseReactionDelayMax = 0.50f;
    this->PathCompromiseReplanCooldown = 3.00f;
    this->PathCompromiseMinRemainingPathLength = 200.00f;
    this->DeadBodyReleaseDelay = 240.00f;
    this->bEnableEnemyKnownLocationClaims = true;
    this->EnemyKnownAvoidanceUpdateInterval = 0.25f;
    this->bEnableFriendlyPositionClaims = true;
}


