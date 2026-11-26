#pragma once
#include "CoreMinimal.h"
#include "EPhysicsReplicationMode.h"
#include "NetworkPhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideSimProxyRepMode: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhysicsReplicationMode SimProxyRepMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocalParticleInPhysicsReplicationLOD;
    
    ENGINE_API FNetworkPhysicsSettings();
};

