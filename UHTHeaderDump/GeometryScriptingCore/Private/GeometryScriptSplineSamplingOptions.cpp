#include "GeometryScriptSplineSamplingOptions.h"

FGeometryScriptSplineSamplingOptions::FGeometryScriptSplineSamplingOptions() {
    this->NumSamples = 0;
    this->ErrorTolerance = 0.00f;
    this->SampleSpacing = EGeometryScriptSampleSpacing::UniformDistance;
    this->CoordinateSpace = ESplineCoordinateSpace::Local;
    this->RangeMethod = EGeometryScriptEvaluateSplineRange::FullSpline;
    this->RangeStart = 0.00f;
    this->RangeEnd = 0.00f;
}

