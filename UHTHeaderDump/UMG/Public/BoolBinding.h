#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "BoolBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBoolBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UBoolBinding();

    UFUNCTION(BlueprintCallable)
    bool GetValue() const;
    
};

