#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsSettingsDefaultReplication.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsSettingsDefaultReplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideMaxLinearHardSnapDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLinearHardSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideDefaultLegacyHardsnapInPT: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHardsnapInPhysicsThread;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCorrectConnectedBodies: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCorrectConnectedBodies;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCorrectConnectedBodiesFriction: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCorrectConnectedBodiesFriction;
    
    ENGINE_API FNetworkPhysicsSettingsDefaultReplication();
};

