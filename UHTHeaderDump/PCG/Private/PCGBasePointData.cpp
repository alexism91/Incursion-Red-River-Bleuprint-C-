#include "PCGBasePointData.h"

UPCGBasePointData::UPCGBasePointData() {
    const FProperty* p_bHasCachedLastSelector = GetClass()->FindPropertyByName("bHasCachedLastSelector");
    (*p_bHasCachedLastSelector->ContainerPtrToValuePtr<bool>(this)) = true;
}

void UPCGBasePointData::BP_SetPointsFrom(const UPCGBasePointData* InData, const TArray<int32>& InDataIndices) {
}


