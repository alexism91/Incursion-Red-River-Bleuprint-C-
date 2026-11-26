#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "NiagaraStatelessExpressionFloat.h"
#include "NiagaraStatelessExpressionFloatMultiply.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionFloatMultiply : public FNiagaraStatelessExpressionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct B;
    
    NIAGARA_API FNiagaraStatelessExpressionFloatMultiply();
};

