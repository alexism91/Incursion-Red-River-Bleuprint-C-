#include "AkExternalSourceInfo.h"

FAkExternalSourceInfo::FAkExternalSourceInfo() {
    this->CodecID = EAkCodecId::None;
    this->ExternalSourceAsset = NULL;
    this->IsStreamed = false;
}

