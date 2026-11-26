#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionColor.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_ScaleColor.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_ScaleColor : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionColor ScaleDistribution;
    
    UNiagaraStatelessModule_ScaleColor();

};

