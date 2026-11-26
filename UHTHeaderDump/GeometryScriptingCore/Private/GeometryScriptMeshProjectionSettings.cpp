#include "GeometryScriptMeshProjectionSettings.h"

FGeometryScriptMeshProjectionSettings::FGeometryScriptMeshProjectionSettings() {
    this->bProcessAllIfEmptySelection = false;
    this->ProjectionRangeMax = 0.00f;
    this->ProjectionRangeMin = 0.00f;
    this->bResetUVsForUnmatched = false;
}

