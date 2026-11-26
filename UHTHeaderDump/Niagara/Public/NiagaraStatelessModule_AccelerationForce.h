#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCoordinateSpace.h"
#include "NiagaraDistributionRangeVector3.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_AccelerationForce.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_AccelerationForce : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 AccelerationDistribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraCoordinateSpace CoordinateSpace;
    
    UNiagaraStatelessModule_AccelerationForce();

};

