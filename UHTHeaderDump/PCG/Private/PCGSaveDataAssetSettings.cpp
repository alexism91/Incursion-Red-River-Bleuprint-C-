#include "PCGSaveDataAssetSettings.h"

UPCGSaveDataAssetSettings::UPCGSaveDataAssetSettings() {
    this->Pins.AddDefaulted(1);
    this->CustomDataCollectionExporterClass = NULL;
}


