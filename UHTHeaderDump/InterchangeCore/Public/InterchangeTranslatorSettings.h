#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeTranslatorSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeTranslatorSettings : public UObject {
    GENERATED_BODY()
public:
    UInterchangeTranslatorSettings();

    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettings();
    
};

