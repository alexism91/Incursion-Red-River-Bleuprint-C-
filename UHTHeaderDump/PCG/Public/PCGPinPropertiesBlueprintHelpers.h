#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGPinProperties.h"
#include "PCGPinPropertiesBlueprintHelpers.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGPinPropertiesBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGPinPropertiesBlueprintHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetRequiredPin(UPARAM(Ref) FPCGPinProperties& PinProperties);
    
    UFUNCTION(BlueprintCallable)
    static void SetNormalPin(UPARAM(Ref) FPCGPinProperties& PinProperties);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllowMultipleConnections(UPARAM(Ref) FPCGPinProperties& PinProperties, bool bAllowMultipleConnections);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdvancedPin(UPARAM(Ref) FPCGPinProperties& PinProperties);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRequiredPin(const FPCGPinProperties& PinProperties);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNormalPin(const FPCGPinProperties& PinProperties);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAdvancedPin(const FPCGPinProperties& PinProperties);
    
    UFUNCTION(BlueprintCallable)
    static bool AllowsMultipleConnections(const FPCGPinProperties& PinProperties);
    
};

