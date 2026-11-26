#include "PCGGenericUserParameterGetSettings.h"

UPCGGenericUserParameterGetSettings::UPCGGenericUserParameterGetSettings() {
    this->bForceObjectAndStructExtraction = false;
    this->bSanitizeOutputAttributeName = true;
    this->Source = EPCGUserParameterSource::Current;
    this->bQuiet = false;
}


