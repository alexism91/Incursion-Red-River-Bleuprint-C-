#include "OdinNativePipelineSetApmConfig.h"

UOdinNativePipelineSetApmConfig::UOdinNativePipelineSetApmConfig() {
    this->effectId = 0;
    this->pipeline = NULL;
}

UOdinNativePipelineSetApmConfig* UOdinNativePipelineSetApmConfig::PipelineSetApmConfig(UObject* WorldContextObject, UOdinPipeline*& NewPipeline, const int32 effect_id, FOdinApmConfig& Config, const FOdinNativePipelineSetApmConfigError& onError, const FOdinNativePipelineSetApmConfigSuccess& OnSuccess) {
    return NULL;
}


