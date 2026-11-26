#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionRangeFloat.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_RotateAroundPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_RotateAroundPoint : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat InitialPhase;
    
    UNiagaraStatelessModule_RotateAroundPoint();

};

