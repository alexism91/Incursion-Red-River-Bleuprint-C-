#include "OdinNativePipelineSetVadConfig.h"

UOdinNativePipelineSetVadConfig::UOdinNativePipelineSetVadConfig() {
    this->effectId = 0;
    this->pipeline = NULL;
}

UOdinNativePipelineSetVadConfig* UOdinNativePipelineSetVadConfig::PipelineSetVadConfig(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, const int32 effect_id, FOdinVadConfig& Config, const FOdinNativePipelineSetVadConfigError& onError, const FOdinNativePipelineSetVadConfigSuccess& OnSuccess) {
    return NULL;
}


