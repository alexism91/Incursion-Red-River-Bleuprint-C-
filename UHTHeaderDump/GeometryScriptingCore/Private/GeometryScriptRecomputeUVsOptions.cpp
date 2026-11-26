#include "GeometryScriptRecomputeUVsOptions.h"

FGeometryScriptRecomputeUVsOptions::FGeometryScriptRecomputeUVsOptions() {
    this->Method = EGeometryScriptUVFlattenMethod::ExpMap;
    this->IslandSource = EGeometryScriptUVIslandSource::PolyGroups;
    this->bAutoAlignIslandsWithAxes = false;
}

