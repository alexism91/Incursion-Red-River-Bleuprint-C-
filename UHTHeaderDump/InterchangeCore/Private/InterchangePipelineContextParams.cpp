#include "InterchangePipelineContextParams.h"

FInterchangePipelineContextParams::FInterchangePipelineContextParams() {
    this->ContextType = EInterchangePipelineContext::None;
    this->ImportObjectType = NULL;
    this->ReimportAsset = NULL;
    this->BaseNodeContainer = NULL;
}

