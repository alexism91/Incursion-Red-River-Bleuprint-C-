#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionRangeFloat.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionRangeFloat : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    NIAGARA_API FNiagaraDistributionRangeFloat();
};

