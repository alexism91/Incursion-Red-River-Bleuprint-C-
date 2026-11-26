#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionVector3.h"
#include "NiagaraDistributionPosition.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionPosition : public FNiagaraDistributionVector3 {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraDistributionPosition();
};

