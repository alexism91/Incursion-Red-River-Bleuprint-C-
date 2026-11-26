#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionRangeColor.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionRangeColor : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Max;
    
    NIAGARA_API FNiagaraDistributionRangeColor();
};

