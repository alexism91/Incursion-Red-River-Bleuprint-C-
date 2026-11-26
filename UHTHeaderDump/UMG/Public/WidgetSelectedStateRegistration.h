#pragma once
#include "CoreMinimal.h"
#include "WidgetBinaryStateRegistration.h"
#include "WidgetSelectedStateRegistration.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UWidgetSelectedStateRegistration : public UWidgetBinaryStateRegistration {
    GENERATED_BODY()
public:
    UWidgetSelectedStateRegistration();

};

