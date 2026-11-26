#include "GeometryScriptSweptHullOptions.h"

FGeometryScriptSweptHullOptions::FGeometryScriptSweptHullOptions() {
    this->bPrefilterVertices = false;
    this->PrefilterGridResolution = 0;
    this->MinThickness = 0.00f;
    this->bSimplify = false;
    this->MinEdgeLength = 0.00f;
    this->SimplifyTolerance = 0.00f;
}

