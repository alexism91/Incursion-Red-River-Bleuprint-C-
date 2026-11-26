#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRNavHelperLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRNavHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRNavHelperLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetBlocksNavigation(UPrimitiveComponent* Component, bool bBlockNavigation);
    
};

