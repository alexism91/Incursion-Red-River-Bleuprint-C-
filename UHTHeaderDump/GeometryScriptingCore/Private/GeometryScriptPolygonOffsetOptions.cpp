#include "GeometryScriptPolygonOffsetOptions.h"

FGeometryScriptPolygonOffsetOptions::FGeometryScriptPolygonOffsetOptions() {
    this->JoinType = EGeometryScriptPolyOffsetJoinType::Square;
    this->MiterLimit = 0.00f;
    this->bOffsetBothSides = false;
    this->StepsPerRadianScale = 0.00f;
    this->MaximumStepsPerRadian = 0.00f;
}

