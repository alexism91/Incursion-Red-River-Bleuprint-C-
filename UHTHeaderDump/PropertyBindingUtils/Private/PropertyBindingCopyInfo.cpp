#include "PropertyBindingCopyInfo.h"

FPropertyBindingCopyInfo::FPropertyBindingCopyInfo() {
    this->SourceStructType = NULL;
    this->CopySize = 0;
    this->Type = EPropertyCopyType::None;
}

