#include "PCGAttributeReduceSettings.h"

UPCGAttributeReduceSettings::UPCGAttributeReduceSettings() {
    this->Operation = EPCGAttributeReduceOperation::Average;
    this->JoinDelimiter = TEXT(", ");
    this->bMergeOutputAttributes = false;
}


