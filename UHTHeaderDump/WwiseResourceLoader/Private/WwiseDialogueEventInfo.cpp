#include "WwiseDialogueEventInfo.h"

FWwiseDialogueEventInfo::FWwiseDialogueEventInfo() {
    this->AudioNodeLoading = EWwiseAudioNodeLoading::AlwaysLoad;
    this->DestroyOptions = EWwiseAssetDestroyOptions::StopEventOnDestroy;
}

