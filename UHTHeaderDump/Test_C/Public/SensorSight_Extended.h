#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=ActiveSensor -FallbackName=ActiveSensor
#include "SensorSight_Extended.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USensorSight_Extended : public UActiveSensor {
    GENERATED_BODY()
public:
    USensorSight_Extended();

};

