#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "RevolveSplineToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveSplineToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    URevolveSplineToolActionPropertySet();

    UFUNCTION(BlueprintCallable)
    void ResetAxis();
    
};

