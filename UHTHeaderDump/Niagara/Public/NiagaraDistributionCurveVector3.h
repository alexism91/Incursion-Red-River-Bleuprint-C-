#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraDistributionBase.h"
#include "NiagaraDistributionCurveVector3.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionCurveVector3 : public FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f ValuesTimeRange;
    
    NIAGARA_API FNiagaraDistributionCurveVector3();
};

