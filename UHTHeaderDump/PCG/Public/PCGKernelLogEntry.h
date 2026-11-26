#pragma once
#include "CoreMinimal.h"
#include "EPCGKernelLogVerbosity.h"
#include "PCGKernelLogEntry.generated.h"

USTRUCT(BlueprintType)
struct FPCGKernelLogEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGKernelLogVerbosity Verbosity;
    
    PCG_API FPCGKernelLogEntry();
};

