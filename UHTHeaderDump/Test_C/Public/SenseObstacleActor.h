#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SenseObstacleInterface -FallbackName=SenseObstacleInterface
#include "SenseObstacleActor.generated.h"

UCLASS(Blueprintable, NoExport)
class TEST_C_API ASenseObstacleActor : public AActor, public ISenseObstacleInterface {
    GENERATED_BODY()
public:
    ASenseObstacleActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

