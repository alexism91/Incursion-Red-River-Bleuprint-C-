#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDDebugDrawShapeBase.h"
#include "ChaosVDDebugDrawLineDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDDebugDrawLineDataWrapper : public FChaosVDDebugDrawShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArrow;
    
    CHAOSVDRUNTIME_API FChaosVDDebugDrawLineDataWrapper();
};

