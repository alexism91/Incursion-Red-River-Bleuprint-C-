#include "ReplicationFilteringConfig.h"

UReplicationFilteringConfig::UReplicationFilteringConfig() {
    this->bEnableObjectScopeHysteresis = true;
    this->DefaultHysteresisFrameCount = 6;
    this->HysteresisUpdateConnectionThrottling = 1;
}


