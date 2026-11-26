#include "WwiseAudioNodeCookedData.h"

FWwiseAudioNodeCookedData::FWwiseAudioNodeCookedData() {
    this->AudioNodeId = 0;
    this->AudioNodeLoading = EWwiseAudioNodeLoading::AlwaysLoad;
    this->DestroyOptions = EWwiseAssetDestroyOptions::StopEventOnDestroy;
}

