#include "RuntimeDataTableProjectSettings.h"

URuntimeDataTableProjectSettings::URuntimeDataTableProjectSettings() {
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
    this->GoogleSheetsUrlPrefix = TEXT("https://docs.google.com/spreadsheets/d/");
    this->GoogleSheetsApiUrlPrefix = TEXT("https://sheets.googleapis.com/v4/spreadsheets/");
    this->GoogleSheetsBatchUpdateCommand = TEXT(":batchUpdate");
    this->GoogleSheetsValuesBatchUpdateCommand = TEXT("/values:batchUpdate");
    this->GoogleSheetsMimeCsv = TEXT("text/csv");
}


