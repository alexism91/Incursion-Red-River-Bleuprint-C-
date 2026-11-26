#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "TransformTrajectory.h"
#include "TransformTrajectoryBlueprintLibrary.generated.h"

class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UTransformTrajectoryBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTransformTrajectoryBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void DebugDrawTrajectory(const FTransformTrajectory& Trajectory, const UWorld* World, const float DebugThickness, float HeightOffset);
    
};

