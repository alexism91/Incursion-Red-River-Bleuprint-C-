#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_CurlNoiseForce.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_CurlNoiseForce : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseFrequency;
    
    UNiagaraStatelessModule_CurlNoiseForce();

};

