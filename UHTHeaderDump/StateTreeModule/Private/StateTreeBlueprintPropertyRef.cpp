#include "StateTreeBlueprintPropertyRef.h"

FStateTreeBlueprintPropertyRef::FStateTreeBlueprintPropertyRef() {
    this->RefType = EStateTreePropertyRefType::None;
    this->bIsRefToArray = false;
    this->bIsOptional = false;
    this->TypeObject = NULL;
}

