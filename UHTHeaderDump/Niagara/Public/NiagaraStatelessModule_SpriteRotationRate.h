#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionCurveFloat.h"
#include "NiagaraDistributionRangeFloat.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_SpriteRotationRate.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_SpriteRotationRate : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat RotationRateDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionCurveFloat RateScaleDistribution;
    
    UNiagaraStatelessModule_SpriteRotationRate();

};

