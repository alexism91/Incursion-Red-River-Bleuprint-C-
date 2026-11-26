#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonLoadingSettings -ObjectName=IRRLoadingScreenData -FallbackName=IRRLoadingScreenData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRLoadingScreenLibrary.generated.h"

class UCommonLoadingScreenSettings;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class TEST_C_API UIRRLoadingScreenLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRLoadingScreenLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopLoadingScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartLoadingScreen(const UObject* WorldContextObject, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableLoadingScreen(bool bIsEnableLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadRandomBackground(const FIRRLoadingScreenData& LoadingScreenData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPrecompiling();
    
    UFUNCTION(BlueprintCallable)
    static UCommonLoadingScreenSettings* GetLoadingScreenSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsEnableLoadingScreen();
    
};

