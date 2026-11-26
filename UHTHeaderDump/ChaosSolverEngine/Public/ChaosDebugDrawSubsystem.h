#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ChaosDebugDrawSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UChaosDebugDrawSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UChaosDebugDrawSubsystem();

};

