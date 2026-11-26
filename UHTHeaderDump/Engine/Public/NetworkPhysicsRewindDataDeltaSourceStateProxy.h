#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataDeltaSourceStateProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataDeltaSourceStateProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataDeltaSourceStateProxy();
};

