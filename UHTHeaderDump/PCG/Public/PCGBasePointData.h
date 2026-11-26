#pragma once
#include "CoreMinimal.h"
#include "PCGSpatialData.h"
#include "PCGBasePointData.generated.h"

class UPCGBasePointData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGBasePointData : public UPCGSpatialData {
    GENERATED_BODY()
public:
    UPCGBasePointData();

    UFUNCTION(BlueprintCallable)
    void BP_SetPointsFrom(const UPCGBasePointData* InData, const TArray<int32>& InDataIndices);
    
};

