#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataStateProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataStateProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataStateProxy();
};

