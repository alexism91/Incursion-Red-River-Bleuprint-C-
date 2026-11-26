#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionCurveFloat.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionCurveFloat : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f ValuesTimeRange;
    
    NIAGARA_API FNiagaraDistributionCurveFloat();
};

