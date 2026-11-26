#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimStageExecutionLoopData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimStageExecutionLoopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NumLoopsBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartStageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndStageIndex;
    
    NIAGARA_API FNiagaraSimStageExecutionLoopData();
};

