#pragma once
#include "CoreMinimal.h"
#include "TwoAxisPropertyEditInputBehavior.h"
#include "LocalTwoAxisPropertyEditInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULocalTwoAxisPropertyEditInputBehavior : public UTwoAxisPropertyEditInputBehavior {
    GENERATED_BODY()
public:
    ULocalTwoAxisPropertyEditInputBehavior();

};

