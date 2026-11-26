#include "IRRRadioCondition.h"

UIRRRadioCondition::UIRRRadioCondition() {
    this->Value = 0.00f;
}

bool UIRRRadioCondition::K2_IsConditionMet_Implementation(AActor* Instigator) {
    return false;
}

bool UIRRRadioCondition::IsConditionMet(AActor* Instigator) {
    return false;
}


