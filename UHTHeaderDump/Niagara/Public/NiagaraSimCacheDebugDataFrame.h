#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraSimCacheDebugDataFrame.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheDebugDataFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FNiagaraParameterStore> DebugParameterStores;
    
    NIAGARA_API FNiagaraSimCacheDebugDataFrame();
};

