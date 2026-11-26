#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimCacheDataBuffers.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheDataBuffers {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumInstances;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 IDAcquireTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 IDToIndexTableElements;
    
    NIAGARA_API FNiagaraSimCacheDataBuffers();
};

