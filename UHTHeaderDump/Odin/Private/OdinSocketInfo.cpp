#include "OdinSocketInfo.h"

FOdinSocketInfo::FOdinSocketInfo() {
    this->Kind = EOdinSocketKind::ODIN_SOCKET_KIND_RELIABLE;
    this->IsInbound = false;
    this->RemotePeerId = 0;
    this->Label = 0;
    this->Priority = 0;
    this->UnsentBytes = 0;
}

