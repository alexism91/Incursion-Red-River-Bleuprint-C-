#include "PropertyBindingPropertyIndirection.h"

FPropertyBindingPropertyIndirection::FPropertyBindingPropertyIndirection() {
    this->Offset = 0;
    this->Type = EPropertyBindingPropertyAccessType::Offset;
    this->InstanceStruct = NULL;
}

