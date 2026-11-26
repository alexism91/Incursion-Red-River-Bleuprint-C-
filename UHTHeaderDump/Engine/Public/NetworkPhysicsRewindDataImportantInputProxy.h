#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataImportantInputProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataImportantInputProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataImportantInputProxy();
};

