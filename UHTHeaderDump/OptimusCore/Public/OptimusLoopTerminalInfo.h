#pragma once
#include "CoreMinimal.h"
#include "OptimusParameterBindingArray.h"
#include "OptimusLoopTerminalInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptimusLoopTerminalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusParameterBindingArray Bindings;
    
    OPTIMUSCORE_API FOptimusLoopTerminalInfo();
};

