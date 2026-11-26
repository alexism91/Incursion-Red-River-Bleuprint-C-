#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataRemoteInputProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataRemoteInputProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataRemoteInputProxy();
};

