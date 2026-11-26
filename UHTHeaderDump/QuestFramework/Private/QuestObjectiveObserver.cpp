#include "QuestObjectiveObserver.h"

UQuestObjectiveObserver::UQuestObjectiveObserver() {
}

EQuestResult UQuestObjectiveObserver::Evaluate_Implementation(UQuestContext* Context) const {
    return EQuestResult::NotStarted;
}


