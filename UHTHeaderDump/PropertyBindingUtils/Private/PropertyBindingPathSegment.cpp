#include "PropertyBindingPathSegment.h"

FPropertyBindingPathSegment::FPropertyBindingPathSegment() {
    this->ArrayIndex = 0;
    this->InstanceStruct = NULL;
    this->InstancedStructAccessType = EPropertyBindingPropertyAccessType::Offset;
}

