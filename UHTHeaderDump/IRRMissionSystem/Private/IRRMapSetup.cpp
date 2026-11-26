#include "IRRMapSetup.h"

UIRRMapSetup::UIRRMapSetup() {
    this->Icon = NULL;
    this->Difficulty = 3;
    this->bAllowSameWeatherTwice = true;
    this->WeatherAKState = NULL;
    this->InitialWeatherTypeIndex = -1;
}

UIRRWeatherSettings* UIRRMapSetup::GetWeatherSettingsByIndex(int32 Index) {
    return NULL;
}

UAkStateValue* UIRRMapSetup::GetWeatherAKState() {
    return NULL;
}

int32 UIRRMapSetup::GetRandomWeatherIndex(int32 PreviousIndex) {
    return 0;
}

FIRRDayTime UIRRMapSetup::GetRandomWeatherDuration(int32 WeatherIndex) {
    return FIRRDayTime{};
}

FString UIRRMapSetup::GetMapName() {
    return TEXT("");
}


