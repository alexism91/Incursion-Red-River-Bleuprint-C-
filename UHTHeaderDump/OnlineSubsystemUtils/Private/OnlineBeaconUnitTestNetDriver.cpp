#include "OnlineBeaconUnitTestNetDriver.h"

UOnlineBeaconUnitTestNetDriver::UOnlineBeaconUnitTestNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ChannelDefinitions.AddDefaulted(4);
}


