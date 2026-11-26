#include "PCGDeleteAttributesSettings.h"

UPCGDeleteAttributesSettings::UPCGDeleteAttributesSettings() {
    this->Operation = EPCGAttributeFilterOperation::KeepSelectedAttributes;
    this->Operator = EPCGStringMatchingOperator::Equal;
    this->bTokenizeOnWhiteSpace = false;
    this->MetadataDomain = TEXT("Default");
}


