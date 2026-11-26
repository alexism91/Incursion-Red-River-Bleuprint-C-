#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionFloat.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionFloat : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f ValuesTimeRange;
    
    NIAGARA_API FNiagaraDistributionFloat();
};

