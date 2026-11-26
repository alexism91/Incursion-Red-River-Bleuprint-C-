#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPCGExclusiveDataType.h"
#include "PCGPinProperties.h"
#include "PCGBlueprintPinHelpers.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGBlueprintPinHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bIsAdvancedPin, EPCGExclusiveDataType AllowedType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOfType(int32 AllowedTypes, EPCGExclusiveDataType TypeToCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExactlySameType(int32 AllowedTypes, EPCGExclusiveDataType TypeToCheck);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCorrespondingDataType(EPCGExclusiveDataType InExclusiveDataType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakPinProperty(const FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bIsAdvancedPin, EPCGExclusiveDataType& AllowedType);
    
};

