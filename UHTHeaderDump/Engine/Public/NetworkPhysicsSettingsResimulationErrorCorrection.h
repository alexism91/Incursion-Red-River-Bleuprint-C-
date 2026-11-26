#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsSettingsResimulationErrorCorrection.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsSettingsResimulationErrorCorrection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideResimErrorInterpolationSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResimErrorCorrectionDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResimErrorMaximumDistanceBeforeSnapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResimErrorMaximumDesyncTimeBeforeSnapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResimErrorDirectionalDecayMultiplier;
    
    ENGINE_API FNetworkPhysicsSettingsResimulationErrorCorrection();
};

