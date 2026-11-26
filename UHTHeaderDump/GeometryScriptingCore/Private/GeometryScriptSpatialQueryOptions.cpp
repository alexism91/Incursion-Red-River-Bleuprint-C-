#include "GeometryScriptSpatialQueryOptions.h"

FGeometryScriptSpatialQueryOptions::FGeometryScriptSpatialQueryOptions() {
    this->MaxDistance = 0.00f;
    this->bAllowUnsafeModifiedQueries = false;
    this->WindingIsoThreshold = 0.00f;
}

