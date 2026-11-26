#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "KeyInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UKeyInputBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    UKeyInputBehavior();

};

