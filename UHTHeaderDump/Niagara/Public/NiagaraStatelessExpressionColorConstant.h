#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraStatelessExpressionColor.h"
#include "NiagaraStatelessExpressionColorConstant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionColorConstant : public FNiagaraStatelessExpressionColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor A;
    
    NIAGARA_API FNiagaraStatelessExpressionColorConstant();
};

