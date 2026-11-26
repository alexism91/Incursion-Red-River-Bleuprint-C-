#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "ENiagaraDistributionMode.h"
#include "NiagaraVariableBase.h"
#include "NiagaraDistributionBase.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDistributionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDistributionMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase ParameterBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct ParameterExpression;
    
    NIAGARA_API FNiagaraDistributionBase();
};

