#include "WaterRuntimeSettings.h"

UWaterRuntimeSettings::UWaterRuntimeSettings() {
    this->CollisionChannelForWaterTraces = ECC_WorldStatic;
    this->WaterBodyIconWorldZOffset = 75.00f;
    this->DefaultWaterCollisionProfileName = TEXT("WaterBodyCollision");
    this->WaterBodyRiverComponentClass = NULL;
    this->WaterBodyLakeComponentClass = NULL;
    this->WaterBodyOceanComponentClass = NULL;
    this->WaterBodyCustomComponentClass = NULL;
    this->bWarnOnMismatchOceanExtent = true;
}


