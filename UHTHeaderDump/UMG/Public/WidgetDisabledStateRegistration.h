#pragma once
#include "CoreMinimal.h"
#include "WidgetBinaryStateRegistration.h"
#include "WidgetDisabledStateRegistration.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UWidgetDisabledStateRegistration : public UWidgetBinaryStateRegistration {
    GENERATED_BODY()
public:
    UWidgetDisabledStateRegistration();

};

