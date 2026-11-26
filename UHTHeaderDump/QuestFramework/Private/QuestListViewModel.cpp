#include "QuestListViewModel.h"

UQuestListViewModel::UQuestListViewModel() {
    this->DetailContextViewModel = NULL;
}

void UQuestListViewModel::SetDetailQuestContextViewModel(UQuestContextViewModel* ViewModel) {
}

TArray<UQuestContextViewModel*> UQuestListViewModel::GetQuestContexts() const {
    return TArray<UQuestContextViewModel*>();
}

TArray<UQuestContextViewModel*> UQuestListViewModel::GetInProgressQuestContexts() const {
    return TArray<UQuestContextViewModel*>();
}

TArray<UQuestContextViewModel*> UQuestListViewModel::GetFailedQuestContexts() const {
    return TArray<UQuestContextViewModel*>();
}

UQuestContextViewModel* UQuestListViewModel::GetDetailQuestContextViewModel() const {
    return NULL;
}

TArray<UQuestContextViewModel*> UQuestListViewModel::GetCompletedQuestContexts() const {
    return TArray<UQuestContextViewModel*>();
}


