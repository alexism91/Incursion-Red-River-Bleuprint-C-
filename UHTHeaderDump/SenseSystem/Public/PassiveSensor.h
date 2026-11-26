#pragma once
#include "CoreMinimal.h"
#include "SensorBase.h"
#include "PassiveSensor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API UPassiveSensor : public USensorBase {
    GENERATED_BODY()
public:
    UPassiveSensor();

};

