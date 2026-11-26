#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "WidgetBinding.generated.h"

class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UWidgetBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UWidgetBinding();

    UFUNCTION(BlueprintCallable)
    UWidget* GetValue() const;
    
};

