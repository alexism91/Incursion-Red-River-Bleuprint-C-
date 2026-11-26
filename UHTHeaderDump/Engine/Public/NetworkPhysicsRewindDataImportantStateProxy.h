#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.h"
#include "NetworkPhysicsRewindDataImportantStateProxy.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataImportantStateProxy : public FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    ENGINE_API FNetworkPhysicsRewindDataImportantStateProxy();
};

