#include "EasyCsvProjectSettings.h"

UEasyCsvProjectSettings::UEasyCsvProjectSettings() {
    this->LogCharacterLimit = 25000;
    this->bPrintDisplayMessagesToLog = true;
    this->bPrintDisplayMessagesToScreen = false;
    this->DisplayMessagesOnScreenLifetime = 30.00f;
    this->bPrintWarningMessagesToLog = true;
    this->bPrintWarningMessagesToScreen = true;
    this->WarningMessagesOnScreenLifetime = 30.00f;
    this->bPrintErrorMessagesToLog = true;
    this->bPrintErrorMessagesToScreen = true;
    this->ErrorMessagesOnScreenLifetime = 30.00f;
}


