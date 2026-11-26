#pragma once
#include "CoreMinimal.h"
#include "WidgetBinaryStateRegistration.h"
#include "WidgetHoveredStateRegistration.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UWidgetHoveredStateRegistration : public UWidgetBinaryStateRegistration {
    GENERATED_BODY()
public:
    UWidgetHoveredStateRegistration();

};

