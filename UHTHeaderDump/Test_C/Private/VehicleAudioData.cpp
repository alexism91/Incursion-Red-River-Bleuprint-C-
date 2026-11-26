#include "VehicleAudioData.h"

UVehicleAudioData::UVehicleAudioData() {
    this->StartEvent = NULL;
    this->StopEvent = NULL;
    this->DestroyedEvent = NULL;
    this->SpeedRtpc = NULL;
    this->RpmRtpc = NULL;
    this->ThrottleRtpc = NULL;
    this->TopSpeed = 80.00f;
    this->IdleRpm = 600.00f;
    this->MaxRpm = 2600.00f;
    this->ThrottleRpmInfluence = 0.35f;
    this->FullThrottleAcceleration = 15.00f;
    this->CruiseThrottle = 0.40f;
    this->ThrottleInterpSpeed = 3.00f;
}

float UVehicleAudioData::ResolveThrottle(float SpeedKph, float AccelerationKphPerSecond) const {
    return 0.0f;
}

float UVehicleAudioData::ResolveRpm(float SpeedKph, float Throttle) const {
    return 0.0f;
}


