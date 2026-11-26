#pragma once
#include "CoreMinimal.h"
#include "EOptimusExecutionDomainType.h"
#include "OptimusExecutionDomain.generated.h"

USTRUCT(BlueprintType)
struct FOptimusExecutionDomain {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusExecutionDomainType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Expression;
    
public:
    OPTIMUSCORE_API FOptimusExecutionDomain();
};

