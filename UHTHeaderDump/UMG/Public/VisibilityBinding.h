#pragma once
#include "CoreMinimal.h"
#include "ESlateVisibility.h"
#include "PropertyBinding.h"
#include "VisibilityBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVisibilityBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UVisibilityBinding();

    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetValue() const;
    
};

