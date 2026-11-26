#pragma once
#include "CoreMinimal.h"
#include "EOptimusConstantType.h"
#include "OptimusConstantDefinition.h"
#include "OptimusConstantIdentifier.h"
#include "OptimusConstant.generated.h"

USTRUCT(BlueprintType)
struct FOptimusConstant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusConstantIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusConstantDefinition Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComponentBindingIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusConstantType Type;
    
    OPTIMUSCORE_API FOptimusConstant();
};

