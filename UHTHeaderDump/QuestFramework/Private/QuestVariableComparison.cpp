#include "QuestVariableComparison.h"

FQuestVariableComparison::FQuestVariableComparison() {
    this->Operator = EQuestComparisonOperator::Equal;
    this->ComparisonType = EQuestVariableComparisonType::Constant;
    this->OtherInteger = 0;
    this->OtherFloat = 0.00f;
    this->bOtherBool = false;
}

