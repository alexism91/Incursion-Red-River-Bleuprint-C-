#include "OdinSocket.h"

UOdinSocket::UOdinSocket() {
    this->Handle = NULL;
}

bool UOdinSocket::SendString(const FString& Message) {
    return false;
}

bool UOdinSocket::Send(TArray<uint8> Message) {
    return false;
}

bool UOdinSocket::ResetSocket() {
    return false;
}

bool UOdinSocket::IsReady() const {
    return false;
}

FName UOdinSocket::GetSocketNamedLabel() {
    return NAME_None;
}

int32 UOdinSocket::GetSocketLabel() {
    return 0;
}

FOdinSocketInfo UOdinSocket::GetSocketInfo() {
    return FOdinSocketInfo{};
}

int64 UOdinSocket::GetRemotePeerId() {
    return 0;
}

UOdinSocket* UOdinSocket::Create(UOdinRoom* room, EOdinSocketKind SocketKind, int64 TargetPeerId, int32 Label, int32 Priority) {
    return NULL;
}

UOdinSocket* UOdinSocket::ConstructSocket(UObject* WorldContextObject) {
    return NULL;
}


