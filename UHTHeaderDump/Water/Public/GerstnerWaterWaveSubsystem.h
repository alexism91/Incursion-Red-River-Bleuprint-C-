#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "GerstnerWaterWaveSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UGerstnerWaterWaveSubsystem();

};

