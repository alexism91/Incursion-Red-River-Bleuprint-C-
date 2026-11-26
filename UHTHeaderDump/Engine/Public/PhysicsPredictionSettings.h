#pragma once
#include "CoreMinimal.h"
#include "PhysicsReplicationLODSettings.h"
#include "PhysicsReplicationResimulationSettings.h"
#include "PhysicsPredictionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsPredictionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsResimulation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResimulationErrorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsHistoryCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSupportedLatencyPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsReplicationResimulationSettings ResimulationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsReplicationLODSettings PhysicsReplicationLODSettings;
    
    ENGINE_API FPhysicsPredictionSettings();
};

