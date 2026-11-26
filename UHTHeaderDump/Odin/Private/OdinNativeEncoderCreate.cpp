#include "OdinNativeEncoderCreate.h"

UOdinNativeEncoderCreate::UOdinNativeEncoderCreate() {
    this->PeerId = 0;
    this->SampleRate = 0;
    this->Stereo = false;
}

UOdinNativeEncoderCreate* UOdinNativeEncoderCreate::EncoderCreate(UObject* WorldContextObject, UOdinEncoder*& encoder, int64 peer_id, int32 sample_rate, const bool NewStereo, const FOdinNativeEncoderCreateError& onError, const FOdinNativeEncoderCreateSuccess& OnSuccess) {
    return NULL;
}


