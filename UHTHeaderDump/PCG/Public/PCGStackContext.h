#pragma once
#include "CoreMinimal.h"
#include "PCGStack.h"
#include "PCGStackContext.generated.h"

USTRUCT(BlueprintType)
struct FPCGStackContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGStack> Stacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStackIndex;
    
public:
    PCG_API FPCGStackContext();
};

