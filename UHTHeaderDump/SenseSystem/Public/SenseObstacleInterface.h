#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SenseObstacleInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class SENSESYSTEM_API USenseObstacleInterface : public UInterface {
    GENERATED_BODY()
};

class SENSESYSTEM_API ISenseObstacleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTransparency(FName SensorTag, USceneComponent* HitComponent, FVector HitLocation) const;
    
};

