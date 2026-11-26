#include "LiveLinkClientInfoMessage.h"

FLiveLinkClientInfoMessage::FLiveLinkClientInfoMessage() {
    this->Status = ELiveLinkClientStatus::Connected;
    this->TopologyMode = ELiveLinkTopologyMode::Hub;
    this->LiveLinkVersion = 0;
}

