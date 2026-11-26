#include "QuestTextArgument.h"

UQuestTextArgument::UQuestTextArgument() {
}

FText UQuestTextArgument::GetText_Implementation(UQuestContext* Context) const {
    return FText::GetEmpty();
}


