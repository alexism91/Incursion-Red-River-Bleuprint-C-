#include "BugSplatEditorSettings.h"

UBugSplatEditorSettings::UBugSplatEditorSettings() {
    this->BugSplatDatabase = TEXT("GamesOfTomorrow");
    this->BugSplatApp = TEXT("IRR");
    this->BugSplatVersion = TEXT("1.4.0.4");
    this->bUpdateEngineDataRouterUrl = true;
    this->bUploadDebugSymbols = false;
    this->bEnableCrashReportingAndroid = true;
    this->bEnableCrashReportingIos = true;
}


