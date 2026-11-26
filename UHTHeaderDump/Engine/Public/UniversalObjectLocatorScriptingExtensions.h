#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UniversalObjectLocator -ObjectName=UniversalObjectLocator -FallbackName=UniversalObjectLocator
#include "BlueprintFunctionLibrary.h"
#include "UniversalObjectLocatorScriptingExtensions.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UUniversalObjectLocatorScriptingExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUniversalObjectLocatorScriptingExtensions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniversalObjectLocator UniversalObjectLocatorFromString(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString(const FUniversalObjectLocator& Locator);
    
    UFUNCTION(BlueprintCallable)
    static void SyncUnload(const FUniversalObjectLocator& Locator, UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* SyncLoad(const FUniversalObjectLocator& Locator, UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* SyncFind(const FUniversalObjectLocator& Locator, UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniversalObjectLocator MakeUniversalObjectLocator(UObject* Object, UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty(const FUniversalObjectLocator& Locator);
    
};

