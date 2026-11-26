#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionVector2.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionVector2 : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2f> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f ValuesTimeRange;
    
    NIAGARA_API FNiagaraDistributionVector2();
};

