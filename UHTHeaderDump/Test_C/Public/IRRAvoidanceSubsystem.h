#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "IRRGrenadePredictionResult.h"
#include "IRRAvoidanceSubsystem.generated.h"

class AGrenadeActor;

UCLASS(Blueprintable)
class TEST_C_API UIRRAvoidanceSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRAvoidanceSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnGrenadePredictionUpdated(AGrenadeActor* Grenade, const FIRRGrenadePredictionResult& Prediction);
    
};

