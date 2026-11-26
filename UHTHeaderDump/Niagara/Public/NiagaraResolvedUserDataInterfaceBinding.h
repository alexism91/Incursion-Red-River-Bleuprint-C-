#pragma once
#include "CoreMinimal.h"
#include "NiagaraResolvedUserDataInterfaceBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraResolvedUserDataInterfaceBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserParameterStoreDataInterfaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScriptParameterStoreDataInterfaceIndex;
    
    NIAGARA_API FNiagaraResolvedUserDataInterfaceBinding();
};

