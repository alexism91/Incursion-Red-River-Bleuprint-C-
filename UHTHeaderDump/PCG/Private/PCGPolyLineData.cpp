#include "PCGPolyLineData.h"

UPCGPolyLineData::UPCGPolyLineData() {
}

void UPCGPolyLineData::WriteMetadataToPoint(float InputKey, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const {
}

FTransform UPCGPolyLineData::K2_GetTransformAtDistance(int32 SegmentIndex, double Distance, FBox& OutBounds, bool bWorldSpace) const {
    return FTransform{};
}

bool UPCGPolyLineData::IsClosed() const {
    return false;
}

FTransform UPCGPolyLineData::GetTransformAtAlpha(float Alpha) const {
    return FTransform{};
}

FTransform UPCGPolyLineData::GetTransform() const {
    return FTransform{};
}

void UPCGPolyLineData::GetTangentsAtSegmentStart(int32 SegmentIndex, FVector& OutArriveTangent, FVector& OutLeaveTangent) const {
}

double UPCGPolyLineData::GetSegmentLength(int32 SegmentIndex) const {
    return 0.0;
}

int32 UPCGPolyLineData::GetNumSegments() const {
    return 0;
}

FVector UPCGPolyLineData::GetLocationAtDistance(int32 SegmentIndex, double Distance, bool bWorldSpace) const {
    return FVector{};
}

FVector UPCGPolyLineData::GetLocationAtAlpha(float Alpha) const {
    return FVector{};
}

double UPCGPolyLineData::GetLength() const {
    return 0.0;
}

float UPCGPolyLineData::GetInputKeyAtDistance(int32 SegmentIndex, double Distance) const {
    return 0.0f;
}

float UPCGPolyLineData::GetInputKeyAtAlpha(float Alpha) const {
    return 0.0f;
}

double UPCGPolyLineData::GetDistanceAtSegmentStart(int32 SegmentIndex) const {
    return 0.0;
}

double UPCGPolyLineData::GetCurvatureAtDistance(int32 SegmentIndex, double Distance) const {
    return 0.0;
}

float UPCGPolyLineData::GetAlphaAtDistance(int32 SegmentIndex, double Distance) const {
    return 0.0f;
}


