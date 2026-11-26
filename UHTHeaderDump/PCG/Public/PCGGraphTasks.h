#pragma once
#include "CoreMinimal.h"
#include "PCGGraphTask.h"
#include "PCGGraphTasks.generated.h"

USTRUCT(BlueprintType)
struct FPCGGraphTasks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGGraphTask> GraphTasks;
    
    PCG_API FPCGGraphTasks();
};

