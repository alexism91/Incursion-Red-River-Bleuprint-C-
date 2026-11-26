#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "NiagaraStatelessExpressionVec4.h"
#include "NiagaraStatelessExpressionVec4Multiply.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec4Multiply : public FNiagaraStatelessExpressionVec4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct B;
    
    NIAGARA_API FNiagaraStatelessExpressionVec4Multiply();
};

