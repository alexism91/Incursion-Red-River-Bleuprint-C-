#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPCGAttributePropertySelection.h"
#include "EPCGExtraProperties.h"
#include "EPCGPointProperties.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertySelectorBlueprintHelpers.generated.h"

class UPCGData;

UCLASS(Blueprintable)
class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGAttributePropertySelectorBlueprintHelpers();

    UFUNCTION(BlueprintCallable)
    static bool SetPropertyName(UPARAM(Ref) FPCGAttributePropertySelector& Selector, FName InPropertyName, bool bResetExtraNames);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPointProperty(UPARAM(Ref) FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty, bool bResetExtraNames);
    
    UFUNCTION(BlueprintCallable)
    static bool SetExtraProperty(UPARAM(Ref) FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty, bool bResetExtraNames);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDomainName(UPARAM(Ref) FPCGAttributePropertySelector& Selector, FName InDomainName, bool bResetExtraNames);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAttributeName(UPARAM(Ref) FPCGAttributePropertySelector& Selector, FName InAttributeName, bool bResetExtraNames);
    
    UFUNCTION(BlueprintCallable)
    static EPCGAttributePropertySelection GetSelection(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FName GetPropertyName(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static EPCGPointProperties GetPointProperty(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FName GetName(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static EPCGExtraProperties GetExtraProperty(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetExtraNames(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FName GetDomainName(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAttributeName(const FPCGAttributePropertySelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FPCGAttributePropertyOutputSelector CopyAndFixSource(const FPCGAttributePropertyOutputSelector& OutputSelector, const FPCGAttributePropertyInputSelector& InputSelector, const UPCGData* InOptionalData);
    
    UFUNCTION(BlueprintCallable)
    static FPCGAttributePropertyInputSelector CopyAndFixLast(const FPCGAttributePropertyInputSelector& Selector, const UPCGData* InData);
    
};

