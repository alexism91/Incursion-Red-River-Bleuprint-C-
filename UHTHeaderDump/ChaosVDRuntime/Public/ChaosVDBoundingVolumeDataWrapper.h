#pragma once
#include "CoreMinimal.h"
#include "ChaosVDAccelerationStructureBase.h"
#include "ChaosVDBoundingVolumeDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDBoundingVolumeDataWrapper : public FChaosVDAccelerationStructureBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxPayloadBounds;
    
    CHAOSVDRUNTIME_API FChaosVDBoundingVolumeDataWrapper();
};

