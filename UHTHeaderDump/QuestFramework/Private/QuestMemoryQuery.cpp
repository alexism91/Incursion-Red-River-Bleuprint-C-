#include "QuestMemoryQuery.h"

FQuestMemoryQuery::FQuestMemoryQuery() {
    this->Operator = EQuestLogicalOperator::And;
    this->bInvertResult = false;
}

