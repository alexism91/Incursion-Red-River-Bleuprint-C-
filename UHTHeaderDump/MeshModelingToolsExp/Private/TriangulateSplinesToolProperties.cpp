#include "TriangulateSplinesToolProperties.h"

UTriangulateSplinesToolProperties::UTriangulateSplinesToolProperties() {
    this->ErrorTolerance = 1.00f;
    this->FlattenMethod = EFlattenCurveMethod::DoNotFlatten;
    this->CombineMethod = ECombineCurvesMethod::LeaveSeparate;
    this->Thickness = 0.00f;
    this->bFlipResult = false;
    this->OpenCurves = EOffsetOpenCurvesMethod::TreatAsClosed;
    this->CurveOffset = 0.00f;
    this->OffsetClosedCurves = EOffsetClosedCurvesMethod::OffsetOuterSide;
    this->EndShapes = EOpenCurveEndShapes::Square;
    this->JoinMethod = EOffsetJoinMethod::Square;
    this->MiterLimit = 1.00f;
}


