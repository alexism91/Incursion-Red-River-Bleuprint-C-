#pragma once
#include "CoreMinimal.h"
#include "DoubleClickInputBehavior.h"
#include "LocalDoubleClickInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULocalDoubleClickInputBehavior : public UDoubleClickInputBehavior {
    GENERATED_BODY()
public:
    ULocalDoubleClickInputBehavior();

};

