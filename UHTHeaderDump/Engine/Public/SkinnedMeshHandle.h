#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=StateStreamHandle -FallbackName=StateStreamHandle
#include "SkinnedMeshHandle.generated.h"

USTRUCT(BlueprintType)
struct FSkinnedMeshHandle : public FStateStreamHandle {
    GENERATED_BODY()
public:
    ENGINE_API FSkinnedMeshHandle();
};

