#pragma once
#include "CoreMinimal.h"
#include "SingleClickInputBehavior.h"
#include "DoubleClickInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDoubleClickInputBehavior : public USingleClickInputBehavior {
    GENERATED_BODY()
public:
    UDoubleClickInputBehavior();

};

