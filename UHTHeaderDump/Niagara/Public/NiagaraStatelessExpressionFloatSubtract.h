#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "NiagaraStatelessExpressionFloat.h"
#include "NiagaraStatelessExpressionFloatSubtract.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionFloatSubtract : public FNiagaraStatelessExpressionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct B;
    
    NIAGARA_API FNiagaraStatelessExpressionFloatSubtract();
};

