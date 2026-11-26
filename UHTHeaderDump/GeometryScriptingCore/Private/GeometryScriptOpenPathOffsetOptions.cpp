#include "GeometryScriptOpenPathOffsetOptions.h"

FGeometryScriptOpenPathOffsetOptions::FGeometryScriptOpenPathOffsetOptions() {
    this->JoinType = EGeometryScriptPolyOffsetJoinType::Square;
    this->MiterLimit = 0.00f;
    this->EndType = EGeometryScriptPathOffsetEndType::Butt;
    this->StepsPerRadianScale = 0.00f;
    this->MaximumStepsPerRadian = 0.00f;
}

