#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "UVProjectionToolEditActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVProjectionToolEditActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UUVProjectionToolEditActions();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void AutoFitAlign();
    
    UFUNCTION(BlueprintCallable)
    void AutoFit();
    
};

