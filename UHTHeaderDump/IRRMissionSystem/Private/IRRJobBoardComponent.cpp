#include "IRRJobBoardComponent.h"

UIRRJobBoardComponent::UIRRJobBoardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissionComponent = NULL;
}

void UIRRJobBoardComponent::UpdateSearchParams(FIRRMissionSearchParams NewSearchParams) {
}

void UIRRJobBoardComponent::UpdateSearchList(FGameplayTag NewSearchListTag) {
}

TArray<UIRRMissionData*> UIRRJobBoardComponent::SortSearchResults(FIRRMissionSearchParams InSearchParams, TArray<UIRRMissionData*> InSearchResults) {
    return TArray<UIRRMissionData*>();
}

void UIRRJobBoardComponent::RefreshMissions() {
}

void UIRRJobBoardComponent::RefreshMissionGraphs() {
}

void UIRRJobBoardComponent::OnProgressDataUpdated(FIRRProgressData OutData) {
}

void UIRRJobBoardComponent::OnMissionGraphsUpdated(const TArray<UIRRGraphData*>& OutData) {
}

void UIRRJobBoardComponent::OnMissionDataUpdated(const TArray<UIRRMissionData*>& OutData) {
}

void UIRRJobBoardComponent::FindMissionSearchResults(FIRRMissionSearchParams InSearchParams, const FMissionSearchResult& OutSearchResults) {
}

TArray<UIRRMissionData*> UIRRJobBoardComponent::FilterSearchResults(FIRRMissionSearchParams InSearchParams, TArray<UIRRMissionData*> InSearchResults) {
    return TArray<UIRRMissionData*>();
}


