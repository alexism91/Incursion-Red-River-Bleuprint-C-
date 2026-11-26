#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=StateStreamHandle -FallbackName=StateStreamHandle
#include "ParticleSystemHandle.generated.h"

USTRUCT(BlueprintType)
struct FParticleSystemHandle : public FStateStreamHandle {
    GENERATED_BODY()
public:
    ENGINE_API FParticleSystemHandle();
};

