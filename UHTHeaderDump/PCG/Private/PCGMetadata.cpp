#include "PCGMetadata.h"

UPCGMetadata::UPCGMetadata() {
    this->Parent = NULL;
}

void UPCGMetadata::SetPointAttributes(const FPCGPoint& Point, const UPCGMetadata* MetaData, FPCGPoint& OutPoint) {
}

void UPCGMetadata::SetAttributesByKey(int64 Key, const UPCGMetadata* InMetaData, int64 TargetKey, int64& OutKey) {
}

void UPCGMetadata::ResetWeightedAttributesByKey(int64 TargetKey, int64& OutKey) {
}

void UPCGMetadata::ResetPointWeightedAttributes(FPCGPoint& OutPoint) {
}

void UPCGMetadata::MergePointAttributes(const FPCGPoint& PointA, const UPCGMetadata* MetadataA, const FPCGPoint& PointB, const UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op) {
}

void UPCGMetadata::MergeAttributesByKey(int64 KeyA, const UPCGMetadata* MetadataA, int64 KeyB, const UPCGMetadata* MetadataB, int64 TargetKey, EPCGMetadataOp Op, int64& OutKey) {
}

void UPCGMetadata::K2_InitializeAsCopyWithAttributeFilter(const UPCGMetadata* InMetadataToCopy, const TSet<FName>& InFilteredAttributes, const TArray<int64>& InOptionalEntriesToCopy, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator) {
}

void UPCGMetadata::K2_InitializeAsCopy(const UPCGMetadata* InMetadataToCopy, const TArray<int64>& InOptionalEntriesToCopy) {
}

void UPCGMetadata::InitializeWithAttributeFilter(const UPCGMetadata* InParent, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator) {
}

void UPCGMetadata::Initialize(const UPCGMetadata* InParent) {
}

bool UPCGMetadata::HasCommonAttributes(const UPCGMetadata* InMetaData) const {
    return false;
}

int64 UPCGMetadata::GetItemCountForChild() const {
    return 0;
}

void UPCGMetadata::GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes) const {
}

int32 UPCGMetadata::GetAttributeCount() const {
    return 0;
}

void UPCGMetadata::Flatten() {
}

UPCGMetadata* UPCGMetadata::CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateStringAttribute(FName AttributeName, const FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateSoftObjectPathAttribute(FName AttributeName, const FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateSoftClassPathAttribute(FName AttributeName, const FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateInteger64Attribute(FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateInteger32Attribute(FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

UPCGMetadata* UPCGMetadata::CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent) {
    return NULL;
}

void UPCGMetadata::CopyAttributes(const UPCGMetadata* InOther) {
}

bool UPCGMetadata::BP_RenameAttribute(FName AttributeToRename, FName NewAttributeName) {
    return false;
}

bool UPCGMetadata::BP_HasAttribute(FName AttributeName) const {
    return false;
}

void UPCGMetadata::BP_DeleteAttribute(FName AttributeName) {
}

bool UPCGMetadata::BP_CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent) {
    return false;
}

void UPCGMetadata::BP_CopyAttribute(const UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName) {
}

void UPCGMetadata::BP_ClearAttribute(FName AttributeToClear) {
}

void UPCGMetadata::BP_AddAttribute(const UPCGMetadata* InOther, FName AttributeName) {
}

int64 UPCGMetadata::AddEntry(int64 ParentEntryKey) {
    return 0;
}

void UPCGMetadata::AddAttributesFiltered(const UPCGMetadata* InOther, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator) {
}

void UPCGMetadata::AddAttributes(const UPCGMetadata* InOther) {
}

void UPCGMetadata::AccumulateWeightedAttributesByKey(int64 Key, const UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64& OutKey) {
}

void UPCGMetadata::AccumulatePointWeightedAttributes(const FPCGPoint& InPoint, const UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint) {
}


