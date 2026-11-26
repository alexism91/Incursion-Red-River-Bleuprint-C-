#include "QuestVariableBounds.h"

FQuestVariableBounds::FQuestVariableBounds() {
    this->ClampOperation = EQuestValueClamp::NotClamped;
    this->MinInteger = 0;
    this->MaxInteger = 0;
    this->MinFloat = 0.00f;
    this->MaxFloat = 0.00f;
}

