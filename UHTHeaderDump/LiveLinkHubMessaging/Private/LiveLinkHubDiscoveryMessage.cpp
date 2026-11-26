#include "LiveLinkHubDiscoveryMessage.h"

FLiveLinkHubDiscoveryMessage::FLiveLinkHubDiscoveryMessage() {
    this->Mode = ELiveLinkTopologyMode::Hub;
    this->CreationTime = 0.00f;
    this->LiveLinkVersion = 0;
}

