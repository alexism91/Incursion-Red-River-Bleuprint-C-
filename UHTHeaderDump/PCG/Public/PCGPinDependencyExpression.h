#pragma once
#include "CoreMinimal.h"
#include "PCGPinDependencyExpression.generated.h"

USTRUCT(BlueprintType)
struct FPCGPinDependencyExpression {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> Expression;
    
public:
    PCG_API FPCGPinDependencyExpression();
};

