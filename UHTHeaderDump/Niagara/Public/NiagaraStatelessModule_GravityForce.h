#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionRangeVector3.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_GravityForce.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_GravityForce : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 GravityDistribution;
    
    UNiagaraStatelessModule_GravityForce();

};

