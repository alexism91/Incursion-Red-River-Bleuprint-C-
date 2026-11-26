#pragma once
#include "CoreMinimal.h"
#include "EOptimusConstantType.h"
#include "OptimusConstantIndex.generated.h"

USTRUCT(BlueprintType)
struct FOptimusConstantIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KernelIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusConstantType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstantIndex;
    
    OPTIMUSCORE_API FOptimusConstantIndex();
};

