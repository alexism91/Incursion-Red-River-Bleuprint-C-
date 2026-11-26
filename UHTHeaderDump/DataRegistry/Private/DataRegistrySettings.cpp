#include "DataRegistrySettings.h"

UDataRegistrySettings::UDataRegistrySettings() {
    this->bInitializeAllLoadedRegistries = false;
    this->bIgnoreMissingCookedAssetRegistryData = false;
    this->bDelayLoadingDataRegistriesUntilPIE = false;
}


