#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "HoleFillToolActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UHoleFillToolActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UHoleFillToolActions();

    UFUNCTION(BlueprintCallable)
    void SelectAll();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

