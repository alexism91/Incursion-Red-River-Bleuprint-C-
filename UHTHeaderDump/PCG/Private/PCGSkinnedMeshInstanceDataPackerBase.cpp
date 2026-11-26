#include "PCGSkinnedMeshInstanceDataPackerBase.h"

UPCGSkinnedMeshInstanceDataPackerBase::UPCGSkinnedMeshInstanceDataPackerBase() {
}

void UPCGSkinnedMeshInstanceDataPackerBase::PackInstances_Implementation(FPCGContext& Context, const UPCGSpatialData* InSpatialData, const FPCGSkinnedMeshInstanceList& InstanceList, FPCGSkinnedMeshPackedCustomData& OutPackedCustomData) const {
}

void UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAttributes(const FPCGSkinnedMeshInstanceList& InstanceList, const UPCGMetadata* MetaData, const TArray<FName>& AttributeNames, FPCGSkinnedMeshPackedCustomData& OutPackedCustomData) const {
}

bool UPCGSkinnedMeshInstanceDataPackerBase::AddTypeToPacking(int32 TypeID, FPCGSkinnedMeshPackedCustomData& OutPackedCustomData) const {
    return false;
}


