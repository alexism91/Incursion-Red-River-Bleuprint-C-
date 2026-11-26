#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDDebugDrawShapeBase.h"
#include "ChaosVDDebugDrawSphereDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDDebugDrawSphereDataWrapper : public FChaosVDDebugDrawShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    CHAOSVDRUNTIME_API FChaosVDDebugDrawSphereDataWrapper();
};

