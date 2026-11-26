#include "QuestTrackerComponent.h"

UQuestTrackerComponent::UQuestTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddPlayerAsSourceOnInit = true;
    this->bTrackOnlySingle = true;
    this->bAutoTrackNewQuests = true;
    this->ViewModel = NULL;
    this->ListViewModel = NULL;
}

void UQuestTrackerComponent::TrackQuest(UQuestContext* QuestContext) {
}

void UQuestTrackerComponent::StopTrackQuest(UQuestContext* QuestContext) {
}

void UQuestTrackerComponent::RemoveSourceQuestComponent(UQuestComponent* QuestComponent) {
}

void UQuestTrackerComponent::RefreshViewModel(bool bTrackerViewModel, bool bQuestListViewModel) {
}

void UQuestTrackerComponent::HandleOnQuestStarted(UQuestContext* Context) {
}

void UQuestTrackerComponent::HandleOnQuestEnded(UQuestContext* Context) {
}

void UQuestTrackerComponent::HandleOnQuestContextSuspended(UQuestComponent* QuestComponent, UQuestContext* Context) {
}

void UQuestTrackerComponent::HandleOnQuestContextCreated(UQuestComponent* QuestComponent, UQuestContext* Context) {
}

UQuestTrackerViewModel* UQuestTrackerComponent::GetViewModel() const {
    return NULL;
}

void UQuestTrackerComponent::GetTrackedQuestContexts(TArray<UQuestContext*>& OutContexts) const {
}

UQuestListViewModel* UQuestTrackerComponent::GetListViewModel() const {
    return NULL;
}

void UQuestTrackerComponent::GetAllQuestContexts(TArray<UQuestContext*>& OutContexts) const {
}

void UQuestTrackerComponent::AddSourceQuestComponent(UQuestComponent* QuestComponent) {
}


