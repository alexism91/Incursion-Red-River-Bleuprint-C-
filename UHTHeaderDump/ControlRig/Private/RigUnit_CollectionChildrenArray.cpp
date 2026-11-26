#include "RigUnit_CollectionChildrenArray.h"

FRigUnit_CollectionChildrenArray::FRigUnit_CollectionChildrenArray() {
    this->bIncludeParent = false;
    this->bRecursive = false;
    this->bDefaultChildren = false;
    this->TypeToSearch = ERigElementType::None;
}

