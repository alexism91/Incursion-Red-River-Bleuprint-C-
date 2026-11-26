#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraStatelessEmitterTemplate.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNiagaraStatelessEmitterTemplate : public UObject {
    GENERATED_BODY()
public:
    UNiagaraStatelessEmitterTemplate();

};

