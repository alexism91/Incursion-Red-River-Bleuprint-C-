#include "QuestTextArg.h"

FQuestTextArg::FQuestTextArg() {
    this->Type = EQuestTextArgType::QuestVariable;
    this->bUseNumberFormatter = false;
    this->CustomTextArgument = NULL;
}

