#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRResourceFunctionLibrary.generated.h"

class UIRRResourceComponent;
class UIRRResourceSystemSettings;
class UObject;

UCLASS(Blueprintable)
class IRRRESOURCESYSTEM_API UIRRResourceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRResourceFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRResourceComponent* GetResourceComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UIRRResourceSystemSettings* GetIRRResourceSystemSettings();
    
};

