#pragma once
#include "CoreMinimal.h"
#include "PCGStackFrame.h"
#include "PCGStack.generated.h"

USTRUCT(BlueprintType)
struct FPCGStack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGStackFrame> StackFrames;
    
public:
    PCG_API FPCGStack();
};

