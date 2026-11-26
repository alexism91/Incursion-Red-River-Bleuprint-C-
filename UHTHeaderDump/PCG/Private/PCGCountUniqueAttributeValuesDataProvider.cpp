#include "PCGCountUniqueAttributeValuesDataProvider.h"

UPCGCountUniqueAttributeValuesDataProvider::UPCGCountUniqueAttributeValuesDataProvider() {
    this->Kernel = NULL;
    this->AttributeToCountId = -1;
    this->OutputValueAttributeId = -1;
    this->OutputCountAttributeId = -1;
    this->MaxAttributeValue = -1;
}


