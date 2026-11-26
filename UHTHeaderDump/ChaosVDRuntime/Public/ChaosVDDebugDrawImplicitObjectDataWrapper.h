#pragma once
#include "CoreMinimal.h"
#include "ChaosVDDebugDrawShapeBase.h"
#include "ChaosVDDebugDrawImplicitObjectDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDDebugDrawImplicitObjectDataWrapper : public FChaosVDDebugDrawShapeBase {
    GENERATED_BODY()
public:
    CHAOSVDRUNTIME_API FChaosVDDebugDrawImplicitObjectDataWrapper();
};

