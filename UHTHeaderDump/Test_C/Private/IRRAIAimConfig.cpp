#include "IRRAIAimConfig.h"

FIRRAIAimConfig::FIRRAIAimConfig() {
    this->MaxAimErrorDegrees = 0.00f;
    this->MaxAimErrorDegreesEndShoot = 0.00f;
    this->MaxBarrelErrorDegrees = 0.00f;
    this->MaxAimTurnSpeed = 0.00f;
    this->SimpleAimPoseAgeThreshold = 0.00f;
    this->AimTargetStickyScoreRatio = 0.00f;
    this->ReactiveThreatWindowSeconds = 0.00f;
    this->BurstHoldMaxTime = 0.00f;
    this->BurstHoldNearBlockDistance = 0.00f;
    this->TransferWidthCm = 0.00f;
    this->TransferFreeWidths = 0.00f;
    this->TransferZeroWidths = 0.00f;
    this->TransferDepthLogFactor = 0.00f;
    this->TriggerFlinchChance = 0.00f;
    this->TriggerFlinchMultiplier = 0.00f;
    this->RealizationLagSeconds = 0.00f;
    this->PreAimGainCoef = 0.00f;
    this->PreAimUpdateInterval = 0.00f;
    this->PreAimDefaultAnchorDepth = 0.00f;
    this->bDebugMode = false;
}

