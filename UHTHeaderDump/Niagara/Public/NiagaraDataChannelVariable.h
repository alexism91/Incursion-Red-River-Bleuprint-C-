#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraDataChannelVariable.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataChannelVariable : public FNiagaraVariableBase {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraDataChannelVariable();
};

