#pragma once
#include "CoreMinimal.h"
#include "TransformTrajectorySample.h"
#include "TransformTrajectory.generated.h"

USTRUCT(BlueprintType)
struct FTransformTrajectory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformTrajectorySample> Samples;
    
    ENGINE_API FTransformTrajectory();
};

