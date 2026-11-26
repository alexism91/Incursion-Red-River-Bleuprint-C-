#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionRangeVector3.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionRangeVector3 : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f Max;
    
    NIAGARA_API FNiagaraDistributionRangeVector3();
};

