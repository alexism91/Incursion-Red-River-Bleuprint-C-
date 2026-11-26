#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "DynamicSculptToolActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDynamicSculptToolActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UDynamicSculptToolActions();

    UFUNCTION(BlueprintCallable)
    void DiscardAttributes();
    
};

