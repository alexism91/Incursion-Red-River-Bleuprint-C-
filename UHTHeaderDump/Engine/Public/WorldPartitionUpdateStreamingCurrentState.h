#pragma once
#include "CoreMinimal.h"
#include "ActivatedCells.h"
#include "WorldPartitionUpdateStreamingCurrentState.generated.h"

class UWorldPartitionRuntimeCell;

USTRUCT(BlueprintType)
struct FWorldPartitionUpdateStreamingCurrentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UWorldPartitionRuntimeCell*> LoadedCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActivatedCells ActivatedCells;
    
    ENGINE_API FWorldPartitionUpdateStreamingCurrentState();
};

