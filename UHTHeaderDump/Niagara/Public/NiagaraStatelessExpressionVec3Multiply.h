#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "NiagaraStatelessExpressionVec3.h"
#include "NiagaraStatelessExpressionVec3Multiply.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec3Multiply : public FNiagaraStatelessExpressionVec3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct B;
    
    NIAGARA_API FNiagaraStatelessExpressionVec3Multiply();
};

