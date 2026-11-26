#include "PCGAttributeFilteringSettings.h"

UPCGAttributeFilteringSettings::UPCGAttributeFilteringSettings() {
    this->Operator = EPCGAttributeFilterOperator::Greater;
    this->bUseConstantThreshold = false;
    this->bUseSpatialQuery = true;
    this->bWarnOnDataMissingAttribute = true;
    this->bHasSpatialToPointDeprecation = false;
}


