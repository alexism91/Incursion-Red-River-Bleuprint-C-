#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=StateStreamHandle -FallbackName=StateStreamHandle
#include "ExponentialHeightFogHandle.generated.h"

USTRUCT(BlueprintType)
struct FExponentialHeightFogHandle : public FStateStreamHandle {
    GENERATED_BODY()
public:
    ENGINE_API FExponentialHeightFogHandle();
};

