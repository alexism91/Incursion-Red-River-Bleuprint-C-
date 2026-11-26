#include "IRRWeatherSettings.h"

UIRRWeatherSettings::UIRRWeatherSettings() {
    this->MaxAIVisionDistance_Meters = 500.00f;
    this->AIVisibilityFactor = 1.00f;
    this->AIHearingFactor = 1.00f;
}

bool UIRRWeatherSettings::CanFollow(const UIRRWeatherSettings* Previous, const UIRRWeatherSettings* Next) {
    return false;
}


