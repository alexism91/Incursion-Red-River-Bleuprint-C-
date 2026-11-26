#pragma once
#include "CoreMinimal.h"
#include "OptimusConstantIdentifier.h"
#include "OptimusConstantDefinition.generated.h"

USTRUCT(BlueprintType)
struct FOptimusConstantDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusConstantIdentifier ReferencedConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Expression;
    
    OPTIMUSCORE_API FOptimusConstantDefinition();
};

