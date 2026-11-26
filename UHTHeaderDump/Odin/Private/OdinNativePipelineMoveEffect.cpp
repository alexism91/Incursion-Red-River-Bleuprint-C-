#include "OdinNativePipelineMoveEffect.h"

UOdinNativePipelineMoveEffect::UOdinNativePipelineMoveEffect() {
    this->effectId = 0;
    this->newIndex = 0;
    this->pipeline = NULL;
}

UOdinNativePipelineMoveEffect* UOdinNativePipelineMoveEffect::PipelineMoveEffect(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, int32 effect_id, int32 NewNewIndex, const FOdinNativePipelineMoveEffectError& onError, const FOdinNativePipelineMoveEffectSuccess& OnSuccess) {
    return NULL;
}


