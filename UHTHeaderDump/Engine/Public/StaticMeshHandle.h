#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=StateStreamHandle -FallbackName=StateStreamHandle
#include "StaticMeshHandle.generated.h"

USTRUCT(BlueprintType)
struct FStaticMeshHandle : public FStateStreamHandle {
    GENERATED_BODY()
public:
    ENGINE_API FStaticMeshHandle();
};

