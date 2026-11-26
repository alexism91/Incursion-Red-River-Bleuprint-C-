#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRRadioSystemFunctionLibrary.generated.h"

class AActor;
class UIRRRadioComponent;
class UIRRRadioManager;
class UObject;

UCLASS(Blueprintable)
class IRRRADIOSYSTEM_API UIRRRadioSystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRRadioSystemFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRRadioManager* GetIRRRadioManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UIRRRadioComponent* GetIRRRadioComponent(AActor* Actor);
    
};

