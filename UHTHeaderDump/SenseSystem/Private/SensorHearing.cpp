#include "SensorHearing.h"

USensorHearing::USensorHearing() {
    this->SensorTag = TEXT("SensorHearing");
    this->ChannelSetup.AddDefaulted(1);
    this->SensorTests.AddDefaulted(1);
    this->MinScore = 0.00f;
    this->MaxHearingDistance = 10000.00f;
}

void USensorHearing::SetDistanceParam(float InMaxHearingDistance, float InMinScore) {
}


