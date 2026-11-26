#include "OdinEncoder.h"

UOdinEncoder::UOdinEncoder() {
    this->AudioGenerator = NULL;
    this->PeerId = 0;
    this->SampleRate = 48000;
    this->bStereo = false;
    this->pipeline = NULL;
    this->Handle = NULL;
}

bool UOdinEncoder::SetPositions(const TArray<FOdinChannelPosition>& Positions) {
    return false;
}

bool UOdinEncoder::SetPosition(FOdinChannelMask ChannelMask, FOdinPosition Position) {
    return false;
}

void UOdinEncoder::SetEchoCancellationProcessingDelay(int32 DelayInMs) {
}

void UOdinEncoder::SetAudioGenerator(UAudioGenerator* generator) {
}

bool UOdinEncoder::SetAudioEventHandler(int32 EFilter) {
    return false;
}

int32 UOdinEncoder::Push(TArray<float> Samples) {
    return 0;
}

int32 UOdinEncoder::Pop(TArray<uint8>& datagram) {
    return 0;
}

void UOdinEncoder::OnPipelineApmConfigChanged(UOdinPipeline* AffectedPipeline, int32 effectId, FOdinApmConfig NewApmConfig) {
}

UOdinPipeline* UOdinEncoder::GetOrCreatePipeline() {
    return NULL;
}

UOdinPipeline* UOdinEncoder::GetOrCreateEncoderPipeline(UOdinEncoder* encoder) {
    return NULL;
}

TArray<UOdinRoom*> UOdinEncoder::GetLinkedRooms() const {
    return TArray<UOdinRoom*>();
}

bool UOdinEncoder::GetIsSilent() const {
    return false;
}

bool UOdinEncoder::FreeEncoder(UOdinEncoder* encoder) {
    return false;
}

UOdinEncoder* UOdinEncoder::CreateEncoderEx(int64 InConnectedPeerId, int32 InSampleRate, bool bUseStereo, bool bApplication_VOIP, int32 bitrate_kbps, int32 Packet_Loss_Perc, int64 Update_Position_Interval_MS) {
    return NULL;
}

UOdinEncoder* UOdinEncoder::CreateEncoder(int64 InPeerId, int32 InSampleRate, bool bUseStereo) {
    return NULL;
}

UOdinEncoder* UOdinEncoder::ConstructEncoderEx(UObject* WorldContextObject, int64 NewPeerId, int32 NewSampleRate, bool NewBStereo, bool bApplication_VOIP, int32 bitrate_kbps, int32 Packet_Loss_Perc, int64 Update_Position_Interval_MS) {
    return NULL;
}

UOdinEncoder* UOdinEncoder::ConstructEncoder(UObject* WorldContextObject, int64 NewPeerId, int32 NewSampleRate, bool NewBStereo) {
    return NULL;
}

bool UOdinEncoder::ClearPosition(FOdinChannelMask ChannelMask) {
    return false;
}


