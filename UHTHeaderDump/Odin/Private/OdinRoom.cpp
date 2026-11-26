#include "OdinRoom.h"

UOdinRoom::UOdinRoom() {
    this->crypto = NULL;
    this->Handle = NULL;
}

void UOdinRoom::SetPassword(const FString& Password) const {
}

bool UOdinRoom::SetListenChannelMaskForPeer(int64 PeerId, FOdinChannelMask Mask) {
    return false;
}

bool UOdinRoom::SetListenChannelMask(FOdinChannelMask Mask) {
    return false;
}

bool UOdinRoom::SetChannelMasks(const FOdinSetChannelMasks& request) {
    return false;
}

bool UOdinRoom::SendRpc(const FString& Json) {
    return false;
}

bool UOdinRoom::SendMessage(const FOdinSendMessage& request) {
    return false;
}

bool UOdinRoom::SendAudio(UOdinEncoder* encoder) {
    return false;
}

void UOdinRoom::RemoveSocketsForPeer(int64 PeerId) {
}

void UOdinRoom::RemoveAllSockets() {
}

UOdinSocket* UOdinRoom::OpenSocket(int64 TargetPeerId, EOdinSocketKind SocketKind) {
    return NULL;
}

bool UOdinRoom::IsConnected() const {
    return false;
}

bool UOdinRoom::IsClosing() const {
    return false;
}

FName UOdinRoom::GetRoomName() {
    return NAME_None;
}

FString UOdinRoom::GetReconnectToken() {
    return TEXT("");
}

int64 UOdinRoom::GetOwnPeerId() {
    return 0;
}

FString UOdinRoom::GetOdinRoomName() const {
    return TEXT("");
}

TArray<UOdinDecoder*> UOdinRoom::GetDecodersByPeer(const int64 PeerId) const {
    return TArray<UOdinDecoder*>();
}

FOdinConnectionStats UOdinRoom::GetConnectionStats() {
    return FOdinConnectionStats{};
}

bool UOdinRoom::FreeRoom() {
    return false;
}

UOdinRoom* UOdinRoom::ConstructRoom(UObject* WorldContextObject) {
    return NULL;
}

UOdinRoom* UOdinRoom::ConnectRoom(const FString& gateway, const FString& authentication, bool& bSuccess, UOdinCrypto* NewCrypto) {
    return NULL;
}

bool UOdinRoom::CloseRoom() {
    return false;
}

bool UOdinRoom::ClearListenChannelMaskForPeer(int64 PeerId) {
    return false;
}

bool UOdinRoom::ChangeSelf(FOdinChangeSelf request) {
    return false;
}


