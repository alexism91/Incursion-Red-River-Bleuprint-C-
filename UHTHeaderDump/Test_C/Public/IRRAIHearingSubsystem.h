#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRAINoiseEvent.h"
#include "IRRAIHearingSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAIHearingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRAIHearingSubsystem();

    UFUNCTION(BlueprintCallable)
    void ReportNoise(FIRRAINoiseEvent NoiseEvent);
    
};

