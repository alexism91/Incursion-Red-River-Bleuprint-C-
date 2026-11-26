#include "IRRMissionComponent.h"
#include "Net/UnrealNetwork.h"

UIRRMissionComponent::UIRRMissionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMissionGraphOverview = NULL;
    this->DefaultSuccessRate = 0;
    this->MaxLevel = 30;
    this->BaseXP = 100.00f;
    this->XPScaleCurve = NULL;
    this->AchievementStoreDelay = 1.00f;
    this->bDebugMissionSaveGame = false;
    this->AuthorityMissionSaveGameName = TEXT("MissionSaveGame_Authority");
    this->ClientMissionSaveGameName = TEXT("MissionSaveGame_Client");
    this->MissionManager = NULL;
    this->AchievementTracker = NULL;
}

void UIRRMissionComponent::UntrackMission(FGuid MissionUID) {
}

void UIRRMissionComponent::TrackMission(FGuid MissionUID) {
}

void UIRRMissionComponent::SyncTrackedMissionProgress() {
}

void UIRRMissionComponent::SetTrackedMissionDataArray(TArray<UIRRMissionData*> NewTrackedMissionDataArray) {
}

void UIRRMissionComponent::SetProgressData(FIRRProgressData NewProgressData) {
}

void UIRRMissionComponent::SetMissionGraphs(TArray<UIRRGraphData*> NewMissionGraphs) {
}

void UIRRMissionComponent::SetMissionDataArray(TArray<UIRRMissionData*> NewMissionDataArray) {
}

void UIRRMissionComponent::SetBriefingPlayed(FName BriefingKey, bool bPlayed) {
}

void UIRRMissionComponent::RetrackMission(FGuid MissionUID) {
}

UIRRMissionData* UIRRMissionComponent::ResolveMissionDataByUID(FGuid UID) {
    return NULL;
}

void UIRRMissionComponent::ResetMissionData(bool bResetProgressionData) {
}

bool UIRRMissionComponent::RequestSaveProgress() {
    return false;
}

bool UIRRMissionComponent::RequestSaveMissionData() {
    return false;
}

void UIRRMissionComponent::RequestRemoveTrackedMissionByUID_Client_Implementation(FGuid MissionUID) {
}

void UIRRMissionComponent::RequestRemoveTrackedMissionByUID_Implementation(FGuid MissionUID) {
}

void UIRRMissionComponent::RequestRemoveMissionByUID_Client_Implementation(FGuid MissionUID) {
}

void UIRRMissionComponent::RequestRemoveMissionByUID_Implementation(FGuid MissionUID) {
}

bool UIRRMissionComponent::RequestLoadData(FIRRProgressData& LoadedProgressData, TArray<FIRRMissionSaveData>& LoadedMissionData, TArray<FIRRGraphSaveData>& LoadedMissionGraphs, bool& LoadedInit) {
    return false;
}

void UIRRMissionComponent::ReportAchievementEvent(FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload) {
}

void UIRRMissionComponent::RemoveTrackedMissionByUID(FGuid MissionUID) {
}

void UIRRMissionComponent::RemoveRewardContainerByUID(FGuid InMissionUID) {
}

void UIRRMissionComponent::RemoveMissionByUID(FGuid MissionUID) {
}

void UIRRMissionComponent::ReceiveReward(FGuid InMissionUID) {
}

FIRRMissionInfo UIRRMissionComponent::PickRandomMissionInfo(UIRRMissionSetup* MissionSetup) {
    return FIRRMissionInfo{};
}

void UIRRMissionComponent::PickNewAssignment(TArray<FIRRAssignmentSetup> Assignments, bool bOnlyUniqueMission) {
}

void UIRRMissionComponent::OnRep_TrackedMissionDataArray() {
}

void UIRRMissionComponent::OnMissionStateUpdated_Client_Implementation(EIRRMissionState NewState, const FIRRMissionSaveData& SaveData) {
}

void UIRRMissionComponent::OnMissionStateUpdated(EIRRMissionState NewState, UIRRMissionData* MissionData) {
}




bool UIRRMissionComponent::IsWaitingForEvents() {
    return false;
}

bool UIRRMissionComponent::IsTerminalMissionState(EIRRMissionState State) {
    return false;
}

bool UIRRMissionComponent::IsActivePreviouslyArchivedMission(UIRRMissionData* MissionData) {
    return false;
}

bool UIRRMissionComponent::IsActiveMissionState(EIRRMissionState State) {
    return false;
}

void UIRRMissionComponent::InternalReplicateTrackedMissionData_Implementation(const FIRRMissionSaveData& NewTrackedMissionData) {
}

void UIRRMissionComponent::InternalRegisterMissionComponent_Implementation() {
}

TArray<FDefaultItem> UIRRMissionComponent::InternalBuildRewardItems(UIRRMissionData* MissionData) {
    return TArray<FDefaultItem>();
}

void UIRRMissionComponent::InitTrackedMission(UIRRMissionData* NewMissionData) {
}

void UIRRMissionComponent::InitSharedMission(UIRRMissionData* NewMissionData) {
}

bool UIRRMissionComponent::HasPlayedBriefing(FName BriefingKey) {
    return false;
}

bool UIRRMissionComponent::HasCompletedMissionSetup(UIRRMissionSetup* InMissionSetup) const {
    return false;
}

UIRRMissionData* UIRRMissionComponent::GetTrackedMissionDataByUID(FGuid UID) {
    return NULL;
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetTrackedMissionDataArray() {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetTerminatedMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

FIRRProgressData UIRRMissionComponent::GetProgressData() {
    return FIRRProgressData{};
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetNotStartedMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRGraphData*> UIRRMissionComponent::GetMissionGraphs() {
    return TArray<UIRRGraphData*>();
}

UIRRMissionData* UIRRMissionComponent::GetMissionDataByUID(FGuid UID) {
    return NULL;
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetMissionDataArrayByState(EIRRMissionState State) const {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetMissionDataArray() {
    return TArray<UIRRMissionData*>();
}

int32 UIRRMissionComponent::GetMissionCount(bool bIncludeStoryMissions) {
    return 0;
}

bool UIRRMissionComponent::GetMaxXPByLevel(int32 CurrentLevel, float& MaxXP) {
    return false;
}

UIRRItemsPreset* UIRRMissionComponent::GetLoadoutPreset(TArray<FIRRLoyaltyByFaction> LoyaltyData) {
    return NULL;
}

bool UIRRMissionComponent::GetLevel(int32& Level, float& CurrentXP, float& MaxXP) {
    return false;
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetInProgressMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

FIRRInboxItem UIRRMissionComponent::GetInboxItemByUID(FGuid UID) {
    return FIRRInboxItem{};
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetFailedMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetCompletedMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetArchivedMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::GetActiveMissionDataArray() const {
    return TArray<UIRRMissionData*>();
}

UIRRMissionData* UIRRMissionComponent::GenerateMissionDataFromSetup(UIRRMissionSetup* MissionSetup) {
    return NULL;
}

TArray<UIRRMissionData*> UIRRMissionComponent::FilterMissionDataArrayByMissionStates(TArray<UIRRMissionData*> InMissionDataArray, const TArray<EIRRMissionState>& FilterStates) {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::FilterMissionDataArrayByMissionState(TArray<UIRRMissionData*> InMissionDataArray, EIRRMissionState FilterState) {
    return TArray<UIRRMissionData*>();
}

TArray<UIRRMissionData*> UIRRMissionComponent::FilterMissionDataArrayByFactionAndTypeAndMap(TArray<UIRRMissionData*> InMissionDataArray, FGameplayTag Faction, FGameplayTag MissionType, FGameplayTag Map) {
    return TArray<UIRRMissionData*>();
}

bool UIRRMissionComponent::CanTrackMission(UIRRMissionData* MissionData) {
    return false;
}

bool UIRRMissionComponent::CanRetrackMission(UIRRMissionData* MissionData) {
    return false;
}

bool UIRRMissionComponent::CanReceiveReward(FGuid InMissionUID, FString& FailureMessage) {
    return false;
}

bool UIRRMissionComponent::AreAchievementStatsReady() const {
    return false;
}

void UIRRMissionComponent::ApplyAchievementProgress_Client_Implementation(const TArray<FIRRAchievementProgress>& Progress) {
}

bool UIRRMissionComponent::AddXP(float XPAmount, bool bSaveAfter) {
    return false;
}

bool UIRRMissionComponent::AddQuestItemsInboxMessage(const TArray<FContainerItem>& QuestItems, const FString& Title, TSoftObjectPtr<UIRRAgentSetup> Author, const FText& Text) {
    return false;
}

void UIRRMissionComponent::AddNewMissionGraph(UIRRMissionGraph* NewMissionGraph, bool bStart) {
}

void UIRRMissionComponent::AddNewMission(UIRRMissionData* MissionData) {
}

void UIRRMissionComponent::AddFactionLoyalty(const TArray<FIRRLoyaltyByFaction>& LoyaltyProgress, bool bSaveAfter) {
}

void UIRRMissionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionComponent, TrackedMissionDataArray);
}


