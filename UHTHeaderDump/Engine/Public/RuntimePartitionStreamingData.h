#pragma once
#include "CoreMinimal.h"
#include "RuntimePartitionStreamingData.generated.h"

class UWorldPartitionRuntimeCell;

USTRUCT(BlueprintType)
struct FRuntimePartitionStreamingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> SpatiallyLoadedCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> NonSpatiallyLoadedCells;
    
public:
    ENGINE_API FRuntimePartitionStreamingData();
};

