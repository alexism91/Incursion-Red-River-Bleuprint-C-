#pragma once
#include "CoreMinimal.h"
#include "ActivatedCells.generated.h"

class UWorldPartitionRuntimeCell;

USTRUCT(BlueprintType)
struct FActivatedCells {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UWorldPartitionRuntimeCell*> Cells;
    
public:
    ENGINE_API FActivatedCells();
};

