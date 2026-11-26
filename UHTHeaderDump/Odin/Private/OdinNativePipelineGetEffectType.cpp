#include "OdinNativePipelineGetEffectType.h"

UOdinNativePipelineGetEffectType::UOdinNativePipelineGetEffectType() {
    this->effectId = 0;
    this->EffectType = EOdinEffectType::ODIN_EFFECT_TYPE_VAD;
    this->pipeline = NULL;
}

UOdinNativePipelineGetEffectType* UOdinNativePipelineGetEffectType::PipelineGetEffectType(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, int32 effect_id, const FOdinNativePipelineGetEffectTypeError& onError, const FOdinNativePipelineGetEffectTypeSuccess& OnSuccess) {
    return NULL;
}


