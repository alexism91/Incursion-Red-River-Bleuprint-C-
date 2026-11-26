#pragma once
#include "CoreMinimal.h"
#include "LocationBasedNetObjectPrioritizer.h"
#include "FieldOfViewNetObjectPrioritizer.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFieldOfViewNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer {
    GENERATED_BODY()
public:
    UFieldOfViewNetObjectPrioritizer();

};

