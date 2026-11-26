#include "QuestObjective.h"

UQuestObjective::UQuestObjective() {
    this->Significancy = EQuestObjectiveSignificancy::Regular;
    this->Observer = NULL;
    this->bAutoActivate = true;
    this->bUseCustomObserver = false;
}

bool UQuestObjective::IsActive(const UQuestContext* Context) const {
    return false;
}

bool UQuestObjective::HasTextArguments() const {
    return false;
}


