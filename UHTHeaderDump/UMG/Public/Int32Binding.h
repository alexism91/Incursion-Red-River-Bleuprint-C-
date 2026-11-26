#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "Int32Binding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInt32Binding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UInt32Binding();

    UFUNCTION(BlueprintCallable)
    int32 GetValue() const;
    
};

