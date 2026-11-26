#include "IRRShowcaseSettings.h"

UIRRShowcaseSettings::UIRRShowcaseSettings() {
    this->bShowcaseProfile = false;
    this->ProfileSlotPrefix = TEXT("Showcase_");
    this->TemplateSlotPrefix = TEXT("ShowcaseTemplate_");
    this->bRaidTimerEnabled = false;
    this->RaidDurationMinutes = 15.00f;
    this->WarningSeconds = 300.00f;
    this->CriticalSeconds = 60.00f;
    this->MissingInActionDamage = 100000.00f;
    this->FontPresetRow = TEXT("ReadabilityDetailTitle_Bold");
    this->FallbackFontSize = 14;
    this->bFixedRaidConditions = true;
    this->FixedConditionMaps.AddDefaulted(1);
    this->RaidStartHour = 7;
    this->RaidStartMinute = 0;
    this->bHoldRaidWeather = true;
}


