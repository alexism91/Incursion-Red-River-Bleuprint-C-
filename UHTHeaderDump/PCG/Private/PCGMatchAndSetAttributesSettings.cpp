#include "PCGMatchAndSetAttributesSettings.h"

UPCGMatchAndSetAttributesSettings::UPCGMatchAndSetAttributesSettings() {
    this->bMatchAttributes = false;
    this->bKeepUnmatched = true;
    this->bFindNearest = false;
    this->MaxDistanceMode = EPCGMatchMaxDistanceMode::NoMaxDistance;
    this->bUseInputWeightAttribute = false;
    this->bUseWeightAttribute = false;
    this->bWarnIfNoMatchData = true;
    this->bWarnOnAttributeCast = true;
}


