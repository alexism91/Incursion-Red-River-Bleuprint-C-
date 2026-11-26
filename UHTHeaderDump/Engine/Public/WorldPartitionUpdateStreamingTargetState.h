#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionUpdateStreamingTargetState.generated.h"

class UWorldPartitionRuntimeCell;

USTRUCT(BlueprintType)
struct FWorldPartitionUpdateStreamingTargetState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> ToLoadCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> ToActivateCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> ToDeactivateCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> ToUnloadCells;
    
    ENGINE_API FWorldPartitionUpdateStreamingTargetState();
};

