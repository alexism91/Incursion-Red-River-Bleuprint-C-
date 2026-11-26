#include "PCGFilterByTagSettings.h"

UPCGFilterByTagSettings::UPCGFilterByTagSettings() {
    this->Operation = EPCGFilterByTagOperation::KeepTagged;
    this->Operator = EPCGStringMatchingOperator::Equal;
    this->bTokenizeOnWhiteSpace = false;
}


