#include "OdinNativeSocketCreate.h"

UOdinNativeSocketCreate::UOdinNativeSocketCreate() {
    this->SocketKind = EOdinSocketKind::ODIN_SOCKET_KIND_RELIABLE;
    this->TargetPeerId = 0;
    this->Label = 0;
    this->Priority = 0;
    this->socket = NULL;
}

UOdinNativeSocketCreate* UOdinNativeSocketCreate::SocketCreate(UObject* WorldContextObject, UOdinRoom*& NewRoom, EOdinSocketKind NewSocketKind, int32 RemotePeerId, int32 NewLabel, int32 NewPriority, const FOdinNativeSocketCreateError& onError, const FOdinNativeSocketCreateSuccess& OnSuccess) {
    return NULL;
}


