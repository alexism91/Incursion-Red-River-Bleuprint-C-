#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataDeltaSourceInputProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataDeltaSourceInputProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataDeltaSourceInputProxy();
};

