#include "EnhancedInputDeveloperSettings.h"

UEnhancedInputDeveloperSettings::UEnhancedInputDeveloperSettings() {
    this->InputSettingsSaveSlotName = TEXT("EnhancedInputUserSettings");
    this->bSendTriggeredEventsWhenInputIsFlushed = true;
    this->bEnableUserSettings = true;
    this->bEnableDefaultMappingContexts = true;
    this->bShouldOnlyTriggerLastActionInChord = true;
    this->bEnableInputModeFiltering = true;
    this->bEnableWorldSubsystem = false;
}


