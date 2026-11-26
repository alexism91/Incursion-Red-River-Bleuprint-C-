#include "OdinNativePipelineUpdateApmPlayback.h"

UOdinNativePipelineUpdateApmPlayback::UOdinNativePipelineUpdateApmPlayback() {
    this->effectId = 0;
    this->pipeline = NULL;
}

UOdinNativePipelineUpdateApmPlayback* UOdinNativePipelineUpdateApmPlayback::PipelineUpdateApmPlayback(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, const int32 effect_id, const TArray<float>& Samples, const int32 samples_count, const int32 Delay, const FOdinNativePipelineUpdateApmPlaybackError& onError, const FOdinNativePipelineUpdateApmPlaybackSuccess& OnSuccess) {
    return NULL;
}


