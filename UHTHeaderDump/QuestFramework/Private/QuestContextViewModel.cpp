#include "QuestContextViewModel.h"

UQuestContextViewModel::UQuestContextViewModel() {
    this->QuestState = EQuestResult::NotStarted;
    this->IsTracked = false;
}

void UQuestContextViewModel::TrackQuest(bool bTrack) {
}

ESlateVisibility UQuestContextViewModel::GetTrackedVisibility() const {
    return ESlateVisibility::Visible;
}

TArray<UQuestObjectiveViewModel*> UQuestContextViewModel::GetActiveObjectives() const {
    return TArray<UQuestObjectiveViewModel*>();
}



