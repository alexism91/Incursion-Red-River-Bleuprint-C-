#include "OnlineBeaconUnitTestHostObject.h"
#include "OnlineBeaconUnitTestClient.h"

AOnlineBeaconUnitTestHostObject::AOnlineBeaconUnitTestHostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("OnlineBeaconUnitTestClient");
    this->ClientBeaconActorClass = AOnlineBeaconUnitTestClient::StaticClass();
}


