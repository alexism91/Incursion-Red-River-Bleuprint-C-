#include "WwiseEventInfo.h"

FWwiseEventInfo::FWwiseEventInfo() {
    this->SwitchContainerLoading = EWwiseEventSwitchContainerLoading::AlwaysLoad;
    this->DestroyOptions = EWwiseAssetDestroyOptions::StopEventOnDestroy;
}

