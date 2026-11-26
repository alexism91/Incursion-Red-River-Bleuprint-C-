#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataInputProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataInputProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataInputProxy();
};

