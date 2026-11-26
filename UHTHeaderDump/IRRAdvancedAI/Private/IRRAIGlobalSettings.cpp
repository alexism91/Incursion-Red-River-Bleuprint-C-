#include "IRRAIGlobalSettings.h"

FIRRAIGlobalSettings::FIRRAIGlobalSettings() {
    this->AimSkillOverDistanceCurve = NULL;
    this->AimSkillSenseFactorCurve = NULL;
    this->AimInitialDelayCurve = NULL;
    this->AimRecoveryDelayCurve = NULL;
    this->FullAutoBurstLengthCurve = NULL;
    this->VisionDistanceScoreCurve = NULL;
    this->VisionAngleScoreCurve = NULL;
    this->VisionAngleLostRatio = 0.00f;
    this->IlluminationLuxForFullEffect = 0.00f;
    this->SelfLightIlluminationLevel = 0.00f;
    this->WeatherRangeCullFloor = 0.00f;
    this->LightDemandLingerTime = 0.00f;
    this->MaxSenseFactionChannels = 0;
}

