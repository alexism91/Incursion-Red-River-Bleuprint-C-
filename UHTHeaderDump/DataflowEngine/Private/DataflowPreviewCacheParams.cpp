#include "DataflowPreviewCacheParams.h"

FDataflowPreviewCacheParams::FDataflowPreviewCacheParams() {
    this->FrameRate = 0;
    this->SubframeRate = 0;
    this->bCanEditSubframeRate = false;
    this->bRestartSimulation = false;
    this->bAsyncCaching = false;
}

