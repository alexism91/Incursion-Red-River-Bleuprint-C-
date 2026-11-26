#include "ActiveSensor.h"

UActiveSensor::UActiveSensor() {
    this->SensorTag = TEXT("ActiveSensor");
    this->ChannelSetup.AddDefaulted(1);
}

void UActiveSensor::RunManualSensor(bool bOverride_SenseState) {
}

void UActiveSensor::AsyncManualSensorDetect_BestActor(FOnSenseTestActor Delegate, bool bOverride_SenseState) {
}

void UActiveSensor::AsyncManualSensor(FOnSensorAsyncComplete Delegate, bool bOverride_SenseState) {
}


