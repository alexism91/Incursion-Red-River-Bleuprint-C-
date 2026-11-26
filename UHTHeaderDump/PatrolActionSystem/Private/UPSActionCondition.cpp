#include "UPSActionCondition.h"

UUPSActionCondition::UUPSActionCondition() {
    this->bInverseCondition = false;
}

bool UUPSActionCondition::InternalCheckCondition_Implementation(ACharacter* Character) {
    return false;
}


