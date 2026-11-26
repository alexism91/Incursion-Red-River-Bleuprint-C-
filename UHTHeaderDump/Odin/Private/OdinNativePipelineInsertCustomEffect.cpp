#include "OdinNativePipelineInsertCustomEffect.h"

UOdinNativePipelineInsertCustomEffect::UOdinNativePipelineInsertCustomEffect() {
    this->Index = 0;
    this->pipeline = NULL;
    this->Effect = NULL;
}

UOdinNativePipelineInsertCustomEffect* UOdinNativePipelineInsertCustomEffect::PipelineInsertCustomEffect(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, UOdinCustomEffect*& NewEffect, int32 NewIndex, const FOdinNativePipelineInsertCustomEffectError& onError, const FOdinNativePipelineInsertCustomEffectSuccess& OnSuccess) {
    return NULL;
}


