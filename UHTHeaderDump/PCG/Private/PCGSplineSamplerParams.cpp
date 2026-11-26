#include "PCGSplineSamplerParams.h"

FPCGSplineSamplerParams::FPCGSplineSamplerParams() {
    this->Dimension = EPCGSplineSamplingDimension::OnSpline;
    this->Mode = EPCGSplineSamplingMode::Subdivision;
    this->Fill = EPCGSplineSamplingFill::Fill;
    this->SubdivisionsPerSegment = 0;
    this->DistanceIncrement = 0.00f;
    this->NumSamples = 0;
    this->NumPlanarSubdivisions = 0;
    this->NumHeightSubdivisions = 0;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->MaxRandomOffsetNormalized = 0.00f;
    this->bFitToCurve = false;
    this->InteriorSampleSpacing = 0.00f;
    this->InteriorBorderSampleSpacing = 0.00f;
    this->bTreatSplineAsPolyline = false;
    this->InteriorOrientation = EPCGSplineSamplingInteriorOrientation::Uniform;
    this->bProjectOntoSurface = false;
    this->bComputeDirectionDelta = false;
    this->bComputeCurvature = false;
    this->bComputeSegmentIndex = false;
    this->bComputeSubsegmentIndex = false;
    this->bComputeTangents = false;
    this->bComputeAlpha = false;
    this->bComputeDistance = false;
    this->bComputeInputKey = false;
    this->bUnbounded = false;
    this->PointSteepness = 0.00f;
    this->SeedingMode = EPCGSplineSamplingSeedingMode::SeedFromPosition;
    this->bSeedFromLocalPosition = false;
    this->bSeedFrom2DPosition = false;
}

