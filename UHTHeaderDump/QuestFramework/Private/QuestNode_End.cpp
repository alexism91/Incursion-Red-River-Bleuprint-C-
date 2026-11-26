#include "QuestNode_End.h"

UQuestNode_End::UQuestNode_End() {
    this->bCompleted = true;
}

EQuestResult UQuestNode_End::GetEndResultType() const {
    return EQuestResult::NotStarted;
}


