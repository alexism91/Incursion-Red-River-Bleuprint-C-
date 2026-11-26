#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraStatelessExpressionVec3.h"
#include "NiagaraStatelessExpressionVec3Constant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec3Constant : public FNiagaraStatelessExpressionVec3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f A;
    
    NIAGARA_API FNiagaraStatelessExpressionVec3Constant();
};

