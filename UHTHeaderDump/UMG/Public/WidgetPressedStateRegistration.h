#pragma once
#include "CoreMinimal.h"
#include "WidgetBinaryStateRegistration.h"
#include "WidgetPressedStateRegistration.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UWidgetPressedStateRegistration : public UWidgetBinaryStateRegistration {
    GENERATED_BODY()
public:
    UWidgetPressedStateRegistration();

};

