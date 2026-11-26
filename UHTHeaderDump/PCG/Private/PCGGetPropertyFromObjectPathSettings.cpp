#include "PCGGetPropertyFromObjectPathSettings.h"

UPCGGetPropertyFromObjectPathSettings::UPCGGetPropertyFromObjectPathSettings() {
    this->bForceObjectAndStructExtraction = false;
    this->bSanitizeOutputAttributeName = true;
    this->bSynchronousLoad = false;
    this->bPersistAllData = false;
    this->bSilenceErrorOnEmptyObjectPath = false;
}


