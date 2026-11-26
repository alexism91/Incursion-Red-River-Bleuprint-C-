#include "PCGFilterByAttributeSettings.h"

UPCGFilterByAttributeSettings::UPCGFilterByAttributeSettings() {
    this->FilterMode = EPCGFilterByAttributeMode::FilterByExistence;
    this->MetadataDomain = TEXT("Default");
    this->Operator = EPCGStringMatchingOperator::Equal;
    this->bIgnoreProperties = false;
    this->FilterByValueMode = EPCGFilterByAttributeValueMode::AnyOf;
    this->FilterOperator = EPCGAttributeFilterOperator::Greater;
}


