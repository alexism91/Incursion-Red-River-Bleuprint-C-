#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionRangeVector2.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionRangeVector2 : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f Max;
    
    NIAGARA_API FNiagaraDistributionRangeVector2();
};

