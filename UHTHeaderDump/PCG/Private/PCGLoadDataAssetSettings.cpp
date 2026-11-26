#include "PCGLoadDataAssetSettings.h"

UPCGLoadDataAssetSettings::UPCGLoadDataAssetSettings() {
    this->Pins.AddDefaulted(1);
    this->bLoadFromInput = false;
    this->bSetDefaultAttributeOverridesFromInput = false;
    this->bWarnIfNoAsset = true;
    this->bTagOutputsBasedOnOutputPins = true;
    this->bSynchronousLoad = false;
}


