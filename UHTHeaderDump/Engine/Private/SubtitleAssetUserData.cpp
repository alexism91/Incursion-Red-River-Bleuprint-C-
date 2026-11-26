#include "SubtitleAssetUserData.h"

USubtitleAssetUserData::USubtitleAssetUserData() {
    this->Duration = 3.00f;
    this->StartOffset = 0.00f;
    this->Priority = 10000.00f;
    this->ESRB = ESRB::Everyone;
    this->SubtitleType = ESubtitleType::Subtitle;
}


