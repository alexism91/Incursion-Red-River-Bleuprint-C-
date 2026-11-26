#include "OdinNativePipelineInsertApmEffect.h"

UOdinNativePipelineInsertApmEffect::UOdinNativePipelineInsertApmEffect() {
    this->Index = 0;
    this->PlaybackSamplerate = 0;
    this->PlaybackStereo = false;
    this->pipeline = NULL;
}

UOdinNativePipelineInsertApmEffect* UOdinNativePipelineInsertApmEffect::PipelineInsertApmEffect(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, int32 NewIndex, int32 playback_sample_rate, const bool playback_stereo, const FOdinNativePipelineInsertApmEffectError& onError, const FOdinNativePipelineInsertApmEffectSuccess& OnSuccess) {
    return NULL;
}


