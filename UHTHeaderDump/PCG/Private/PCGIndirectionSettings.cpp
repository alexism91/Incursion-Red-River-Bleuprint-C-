#include "PCGIndirectionSettings.h"

UPCGIndirectionSettings::UPCGIndirectionSettings() {
    this->ProxyInterfaceMode = EPCGProxyInterfaceMode::BySettings;
    this->SettingsClass = NULL;
    this->BlueprintElementClass = NULL;
    this->Settings = NULL;
    this->bTagOutputsBasedOnOutputPins = true;
}


