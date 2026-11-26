#include "IRRNavExtentionSettings.h"

UIRRNavExtentionSettings::UIRRNavExtentionSettings() {
    this->LocalNavAreaPathingDistanceMeters = 65.00f;
    this->SpawnPreCacheDistanceMeters = 75.00f;
    this->MinRealComponentAreaM2 = 25.00f;
    this->OnDemandAreaCacheSize = 128;
    this->bOnDemandAreasOnly = false;
    this->NavAreaMapRegenerationDebounce = 1.50f;
    this->NavAreaMapPatchRebuildFraction = 0.25f;
    this->bBuildRoomMap = false;
    this->RoomCoreClearance = 150.00f;
    this->RoomDoorMaxClearance = 110.00f;
    this->RoomObstacleGateMaxSpacing = 600.00f;
    this->RoomOpenSpaceClearance = 600.00f;
    this->MaxRoomPolys = 500;
}


