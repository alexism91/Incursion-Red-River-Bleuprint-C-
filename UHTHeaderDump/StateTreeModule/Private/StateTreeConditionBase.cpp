#include "StateTreeConditionBase.h"

FStateTreeConditionBase::FStateTreeConditionBase() {
    this->Operand = EStateTreeExpressionOperand::Copy;
    this->DeltaIndent = 0;
    this->EvaluationMode = EStateTreeConditionEvaluationMode::Evaluated;
}

