#include "PCGDeleteTagsSettings.h"

UPCGDeleteTagsSettings::UPCGDeleteTagsSettings() {
    this->Operation = EPCGTagFilterOperation::DeleteSelectedTags;
    this->Operator = EPCGStringMatchingOperator::Equal;
    this->bTokenizeOnWhiteSpace = false;
}


