#include "SenseSysDebugDraw.h"

FSenseSysDebugDraw::FSenseSysDebugDraw() {
    this->Stimulus_DebugSensedPoints = false;
    this->Stimulus_DebugCurrentSensed = false;
    this->Stimulus_DebugLostSensed = false;
    this->Sensor_DebugTest = false;
    this->Sensor_DebugCurrentSensed = false;
    this->Sensor_DebugLostSensed = false;
    this->Sensor_DebugBestSensed = false;
    this->SenseSys_DebugAge = false;
    this->SenseSys_DebugScore = false;
}

