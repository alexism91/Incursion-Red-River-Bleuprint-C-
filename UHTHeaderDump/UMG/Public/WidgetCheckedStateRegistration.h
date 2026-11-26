#pragma once
#include "CoreMinimal.h"
#include "WidgetEnumStateRegistration.h"
#include "WidgetCheckedStateRegistration.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UWidgetCheckedStateRegistration : public UWidgetEnumStateRegistration {
    GENERATED_BODY()
public:
    UWidgetCheckedStateRegistration();

};

