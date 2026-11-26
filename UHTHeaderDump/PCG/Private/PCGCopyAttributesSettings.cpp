#include "PCGCopyAttributesSettings.h"

UPCGCopyAttributesSettings::UPCGCopyAttributesSettings() {
    this->Operation = EPCGCopyAttributesOperation::CopyEachSourceToEachTargetRespectively;
    this->bCopyAllAttributes = false;
    this->bCopyAllDomains = false;
}


