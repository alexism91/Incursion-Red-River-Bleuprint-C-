#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
#include "OptimusValueContainerStruct.generated.h"

USTRUCT(BlueprintType)
struct FOptimusValueContainerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Value;
    
    OPTIMUSCORE_API FOptimusValueContainerStruct();
};

