#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionFloat.h"
#include "NiagaraDistributionRangeFloat.h"
#include "NiagaraDistributionRangeVector3.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_ScaleMeshSizeBySpeed.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_ScaleMeshSizeBySpeed : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat VelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 MinScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 MaxScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleScaleFactorByCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionFloat SampleFactorCurve;
    
    UNiagaraStatelessModule_ScaleMeshSizeBySpeed();

};

