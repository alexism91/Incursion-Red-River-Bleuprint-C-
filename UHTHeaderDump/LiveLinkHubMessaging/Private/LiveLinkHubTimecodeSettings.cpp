#include "LiveLinkHubTimecodeSettings.h"

FLiveLinkHubTimecodeSettings::FLiveLinkHubTimecodeSettings() {
    this->Source = ELiveLinkHubTimecodeSource::NotDefined;
    this->FrameDelay = 0.00f;
    this->BufferSize = 0;
    this->EvaluationType = ELiveLinkTimecodeProviderEvaluationType::Lerp;
}

