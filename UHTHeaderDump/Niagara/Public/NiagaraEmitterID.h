#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterID.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    NIAGARA_API FNiagaraEmitterID();
};

