#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionFloat.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_CameraOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_CameraOffset : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionFloat CameraOffsetDistribution;
    
    UNiagaraStatelessModule_CameraOffset();

};

