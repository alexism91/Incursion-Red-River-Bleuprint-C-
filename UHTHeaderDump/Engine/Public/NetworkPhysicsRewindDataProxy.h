#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsRewindDataProxy.generated.h"

class UNetworkPhysicsComponent;

USTRUCT(BlueprintType)
struct FNetworkPhysicsRewindDataProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNetworkPhysicsComponent* Owner;
    
    ENGINE_API FNetworkPhysicsRewindDataProxy();
};

