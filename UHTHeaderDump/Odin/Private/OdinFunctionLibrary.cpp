#include "OdinFunctionLibrary.h"

UOdinFunctionLibrary::UOdinFunctionLibrary() {
}

void UOdinFunctionLibrary::UnlinkEncoderFromRoom(UOdinEncoder* encoder) {
}

void UOdinFunctionLibrary::SetChannelsEnabled(FOdinChannelMask& Mask, const TArray<int32>& EnabledChannels) {
}

void UOdinFunctionLibrary::SetChannelsDisabled(FOdinChannelMask& Mask, const TArray<int32>& DisabledChannels) {
}

void UOdinFunctionLibrary::SetChannels(FOdinChannelMask& Mask, const TMap<int32, bool>& Channels) {
}

void UOdinFunctionLibrary::SetChannelInMask(FOdinChannelMask& Mask, int32 ChannelIndex, bool bEnabled) {
}

void UOdinFunctionLibrary::RegisterDecoder(UOdinDecoder* decoder, UOdinRoom* room, int64 PeerId) {
}

void UOdinFunctionLibrary::OdinStringToBytes(const FString& Str, TArray<uint8>& Buffer) {
}

void UOdinFunctionLibrary::OdinHexStringToBytes(const FString& Str, TArray<uint8>& Buffer) {
}

FString UOdinFunctionLibrary::OdinDebugDumpState() {
    return TEXT("");
}

void UOdinFunctionLibrary::OdinBytesToString(const TArray<uint8>& Buffer, FString& Str) {
}

void UOdinFunctionLibrary::OdinBytesToHexString(const TArray<uint8>& Buffer, FString& Str) {
}

void UOdinFunctionLibrary::LinkEncoderToRoom(UOdinEncoder* encoder, UOdinRoom* room) {
}

bool UOdinFunctionLibrary::IsChannelEnabledInMask(const FOdinChannelMask& Mask, const int32 ChannelIndex) {
    return false;
}

TArray<UOdinRoom*> UOdinFunctionLibrary::GetRoomsByName(const FString& RoomId) {
    return TArray<UOdinRoom*>();
}

TArray<UOdinDecoder*> UOdinFunctionLibrary::GetDecodersForPeer(UOdinRoom* room, int64 PeerId) {
    return TArray<UOdinDecoder*>();
}

FString UOdinFunctionLibrary::GenerateAccessKey() {
    return TEXT("");
}

FString UOdinFunctionLibrary::FormatOdinError(EOdinError Code, bool bUETrace) {
    return TEXT("");
}

bool UOdinFunctionLibrary::DoesAudioEventMatchFilter(EOdinAudioEvents Event, int32 Filter) {
    return false;
}

void UOdinFunctionLibrary::DeregisterDecoderFromAllConnections(UOdinDecoder* decoder) {
}

UOdinEncoder* UOdinFunctionLibrary::CreateOdinEncoderFromGenerator(UObject* WorldContextObject, UOdinRoom*& OdinRoom, UAudioGenerator*& AudioGenerator) {
    return NULL;
}

UOdinAudioCapture* UOdinFunctionLibrary::CreateOdinAudioCapture(UObject* WorldContextObject) {
    return NULL;
}

FOdinChannelMask UOdinFunctionLibrary::CreateFullMask() {
    return FOdinChannelMask{};
}

FOdinChannelMask UOdinFunctionLibrary::CreateEmptyMask() {
    return FOdinChannelMask{};
}

FOdinChannelMask UOdinFunctionLibrary::CreateChannelMaskFromEnabled(const TArray<int32>& EnabledChannels) {
    return FOdinChannelMask{};
}

FOdinChannelMask UOdinFunctionLibrary::CreateChannelMaskFromDisabled(const TArray<int32>& DisabledChannels) {
    return FOdinChannelMask{};
}

FOdinChannelMask UOdinFunctionLibrary::CreateChannelMask(const TMap<int32, bool>& Channels, bool bDefaultValue) {
    return FOdinChannelMask{};
}

FOdinPosition UOdinFunctionLibrary::Conv_VectorToOdinPosition(const FVector& InPosition) {
    return FOdinPosition{};
}

FVector UOdinFunctionLibrary::Conv_OdinPositionToVector(FOdinPosition InPosition) {
    return FVector{};
}


