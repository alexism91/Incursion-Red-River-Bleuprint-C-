#include "SlatePostSettings.h"

FSlatePostSettings::FSlatePostSettings() {
    this->bEnabled = false;
    this->PostProcessorClass = NULL;
    this->CachedSlatePostRT = NULL;
}

