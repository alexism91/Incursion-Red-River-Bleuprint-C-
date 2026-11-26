#include "PCGSpatialData.h"
#include "PCGMetadata.h"

UPCGSpatialData::UPCGSpatialData() {
    this->MetaData = CreateDefaultSubobject<UPCGMetadata>(TEXT("MetaData"));
    this->bKeepZeroDensityPoints = false;
    this->bHasCachedLastSelector = false;
}

UPCGPointData* UPCGSpatialData::ToPointDataWithContext(FPCGContext& Context) const {
    return NULL;
}

UPCGPointData* UPCGSpatialData::ToPointData() const {
    return NULL;
}

UPCGUnionData* UPCGSpatialData::K2_UnionWith(const UPCGSpatialData* InOther) const {
    return NULL;
}

UPCGDifferenceData* UPCGSpatialData::K2_Subtract(const UPCGSpatialData* InOther) const {
    return NULL;
}

bool UPCGSpatialData::K2_SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const {
    return false;
}

bool UPCGSpatialData::K2_ProjectPoint(const FTransform& InTransform, const FBox& InBounds, const FPCGProjectionParams& InParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const {
    return false;
}

UPCGSpatialData* UPCGSpatialData::K2_ProjectOn(const UPCGSpatialData* InOther, const FPCGProjectionParams& InParams) const {
    return NULL;
}

UPCGIntersectionData* UPCGSpatialData::K2_IntersectWith(const UPCGSpatialData* InOther) const {
    return NULL;
}

void UPCGSpatialData::InitializeFromDataWithParams(const FPCGInitializeFromDataParams& InParams) {
}

void UPCGSpatialData::InitializeFromData(const UPCGSpatialData* InSource, const UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes) {
}

bool UPCGSpatialData::HasNonTrivialTransform() const {
    return false;
}

FBox UPCGSpatialData::GetStrictBounds() const {
    return FBox{};
}

FVector UPCGSpatialData::GetNormal() const {
    return FVector{};
}

int32 UPCGSpatialData::GetDimension() const {
    return 0;
}

float UPCGSpatialData::GetDensityAtPosition(const FVector& InPosition) const {
    return 0.0f;
}

FBox UPCGSpatialData::GetBounds() const {
    return FBox{};
}

UPCGMetadata* UPCGSpatialData::CreateEmptyMetadata() {
    return NULL;
}


