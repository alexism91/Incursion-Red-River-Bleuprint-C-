#pragma once
#include "CoreMinimal.h"
#include "WaterWavesBase.h"
#include "WaterWaves.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UWaterWaves : public UWaterWavesBase {
    GENERATED_BODY()
public:
    UWaterWaves();

};

