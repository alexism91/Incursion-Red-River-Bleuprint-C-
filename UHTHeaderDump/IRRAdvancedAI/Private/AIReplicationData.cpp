#include "AIReplicationData.h"

FAIReplicationData::FAIReplicationData() {
    this->NetDormancy = DORM_Never;
    this->NetUpdateFrequency = 0.00f;
    this->MinNetUpdateFrequency = 0.00f;
    this->NetPriority = 0.00f;
    this->NetSmoothingMode = ENetworkSmoothingMode::Disabled;
    this->NetSmoothLocationTime = 0.00f;
    this->NetSmoothRotationTime = 0.00f;
    this->NetMaxSmoothUpdateDistance = 0.00f;
    this->NetNoSmoothUpdateDistance = 0.00f;
}

