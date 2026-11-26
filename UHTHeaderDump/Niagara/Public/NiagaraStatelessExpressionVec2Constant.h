#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "NiagaraStatelessExpressionVec2.h"
#include "NiagaraStatelessExpressionVec2Constant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec2Constant : public FNiagaraStatelessExpressionVec2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f A;
    
    NIAGARA_API FNiagaraStatelessExpressionVec2Constant();
};

