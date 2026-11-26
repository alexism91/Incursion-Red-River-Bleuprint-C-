#pragma once
#include "CoreMinimal.h"
#include "PCGStackFrame.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPCGStackFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopIndex;
    
    PCG_API FPCGStackFrame();
};

