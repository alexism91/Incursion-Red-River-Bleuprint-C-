#include "NinjaInputSettings.h"

UNinjaInputSettings::UNinjaInputSettings() {
    this->TrackedEvents.AddDefaulted(5);
    this->bEnableDataValidation = false;
    this->bMatchHandlersWithContext = true;
    this->bShowScreenDebugMessages = false;
    this->DebugMessageDuration = 5.00f;
}


