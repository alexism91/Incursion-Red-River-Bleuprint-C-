#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "NiagaraStatelessExpressionVec4.h"
#include "NiagaraStatelessExpressionVec4Constant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec4Constant : public FNiagaraStatelessExpressionVec4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4f A;
    
    NIAGARA_API FNiagaraStatelessExpressionVec4Constant();
};

