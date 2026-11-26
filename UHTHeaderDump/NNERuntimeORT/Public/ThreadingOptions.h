#pragma once
#include "CoreMinimal.h"
#include "EExecutionMode.h"
#include "ThreadingOptions.generated.h"

USTRUCT(BlueprintType)
struct FThreadingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGlobalThreadPool;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntraOpNumThreads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterOpNumThreads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EExecutionMode> ExecutionMode;
    
    NNERUNTIMEORT_API FThreadingOptions();
};

