#include "OdinDecoder.h"

UOdinDecoder::UOdinDecoder() {
    this->pipeline = NULL;
    this->SampleRate = 48000;
    this->bStereo = true;
    this->Handle = NULL;
}

UOdinDecoder* UOdinDecoder::SetupInternalDecoder(int32 DecoderSampleRate, bool bUseStereo) {
    return NULL;
}

bool UOdinDecoder::SetAudioEventHandler(int32 EFilter) {
    return false;
}

int32 UOdinDecoder::Push(const TArray<uint8>& datagram) const {
    return 0;
}

int32 UOdinDecoder::Pop(TArray<float>& Samples, bool& bSilence) const {
    return 0;
}

TArray<FOdinPosition> UOdinDecoder::GetPositions(FOdinChannelMask NewChannelMask) const {
    return TArray<FOdinPosition>();
}

UOdinPipeline* UOdinDecoder::GetOrCreatePipeline() {
    return NULL;
}

UOdinPipeline* UOdinDecoder::GetOrCreateDecoderPipeline(UOdinDecoder* decoder) {
    return NULL;
}

bool UOdinDecoder::GetIsSilent() const {
    return false;
}

int64 UOdinDecoder::GetActiveChannelMask() const {
    return 0;
}

bool UOdinDecoder::FreeDecoder(UOdinDecoder* decoder) {
    return false;
}

UOdinDecoder* UOdinDecoder::ConstructDecoder(UObject* WorldContextObject, int32 NewSampleRate, bool bUseStereo) {
    return NULL;
}


