#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionFloat.h"
#include "NiagaraDistributionRangeFloat.h"
#include "NiagaraDistributionRangeVector2.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_ScaleSpriteSizeBySpeed.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat VelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector2 MinScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector2 MaxScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleScaleFactorByCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionFloat SampleFactorCurve;
    
    UNiagaraStatelessModule_ScaleSpriteSizeBySpeed();

};

