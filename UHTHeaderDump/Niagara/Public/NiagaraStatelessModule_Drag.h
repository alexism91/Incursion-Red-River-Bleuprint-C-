#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionRangeFloat.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_Drag.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_Drag : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat DragDistribution;
    
    UNiagaraStatelessModule_Drag();

};

