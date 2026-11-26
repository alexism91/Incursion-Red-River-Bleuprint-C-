#include "MetaSoundSettings.h"

UMetaSoundSettings::UMetaSoundSettings() {
    this->bAutoUpdateEnabled = true;
    this->bAutoUpdateLogWarningOnDroppedConnection = true;
    this->DenyListCacheChangeID = 0;
    this->TargetPageName = TEXT("Default");
}


