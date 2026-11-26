#include "PCGAttributePropertySelectorBlueprintHelpers.h"

UPCGAttributePropertySelectorBlueprintHelpers::UPCGAttributePropertySelectorBlueprintHelpers() {
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetPropertyName(FPCGAttributePropertySelector& Selector, FName InPropertyName, bool bResetExtraNames) {
    return false;
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty, bool bResetExtraNames) {
    return false;
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty, bool bResetExtraNames) {
    return false;
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetDomainName(FPCGAttributePropertySelector& Selector, FName InDomainName, bool bResetExtraNames) {
    return false;
}

bool UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName, bool bResetExtraNames) {
    return false;
}

EPCGAttributePropertySelection UPCGAttributePropertySelectorBlueprintHelpers::GetSelection(const FPCGAttributePropertySelector& Selector) {
    return EPCGAttributePropertySelection::Attribute;
}

FName UPCGAttributePropertySelectorBlueprintHelpers::GetPropertyName(const FPCGAttributePropertySelector& Selector) {
    return NAME_None;
}

EPCGPointProperties UPCGAttributePropertySelectorBlueprintHelpers::GetPointProperty(const FPCGAttributePropertySelector& Selector) {
    return EPCGPointProperties::Density;
}

FName UPCGAttributePropertySelectorBlueprintHelpers::GetName(const FPCGAttributePropertySelector& Selector) {
    return NAME_None;
}

EPCGExtraProperties UPCGAttributePropertySelectorBlueprintHelpers::GetExtraProperty(const FPCGAttributePropertySelector& Selector) {
    return EPCGExtraProperties::Index;
}

TArray<FString> UPCGAttributePropertySelectorBlueprintHelpers::GetExtraNames(const FPCGAttributePropertySelector& Selector) {
    return TArray<FString>();
}

FName UPCGAttributePropertySelectorBlueprintHelpers::GetDomainName(const FPCGAttributePropertySelector& Selector) {
    return NAME_None;
}

FName UPCGAttributePropertySelectorBlueprintHelpers::GetAttributeName(const FPCGAttributePropertySelector& Selector) {
    return NAME_None;
}

FPCGAttributePropertyOutputSelector UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixSource(const FPCGAttributePropertyOutputSelector& OutputSelector, const FPCGAttributePropertyInputSelector& InputSelector, const UPCGData* InOptionalData) {
    return FPCGAttributePropertyOutputSelector{};
}

FPCGAttributePropertyInputSelector UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixLast(const FPCGAttributePropertyInputSelector& Selector, const UPCGData* InData) {
    return FPCGAttributePropertyInputSelector{};
}


