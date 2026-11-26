#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ChaosVDDebugDrawShapeBase.h"
#include "ChaosVDDebugDrawBoxDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDDebugDrawBoxDataWrapper : public FChaosVDDebugDrawShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Box;
    
    CHAOSVDRUNTIME_API FChaosVDDebugDrawBoxDataWrapper();
};

