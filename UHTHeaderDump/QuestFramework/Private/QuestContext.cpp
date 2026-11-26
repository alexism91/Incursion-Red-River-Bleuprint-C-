#include "QuestContext.h"
#include "Net/UnrealNetwork.h"

UQuestContext::UQuestContext() {
    this->QuestStatePacked = 0;
    this->CurrentNodeIndexPacked = 9223372032559808512;
    this->QuestAsset = NULL;
    this->ContextMemory = NULL;
    this->ViewModel = NULL;
}

bool UQuestContext::TryActivateObjective(UQuestObjective* Objective) {
    return false;
}

void UQuestContext::Start() {
}

void UQuestContext::RefreshViewModel(bool bUpdateQuestData, bool bUpdateObjectiveList, bool bRefreshObjectiveViewModels) {
}

void UQuestContext::RefreshObjectiveViewModel(UQuestObjective* Objective) {
}

void UQuestContext::OnRep_QuestState() {
}

void UQuestContext::OnRep_QuestAsset() {
}

void UQuestContext::OnRep_ObjectiveResultReplicator() {
}

void UQuestContext::OnRep_MemoryReplicator() {
}

void UQuestContext::OnRep_CurrentNodeIndex() {
}

void UQuestContext::OnRep_ActiveObjectives(TArray<UQuestObjective*>& OldObjectives) {
}

bool UQuestContext::JumpToStageNode(const UQuestNode_Stage* StageNode) {
    return false;
}

bool UQuestContext::JumpToStageByName(FName StageName) {
    return false;
}

bool UQuestContext::IsObjectiveActive(UQuestObjective* Objective) const {
    return false;
}

bool UQuestContext::IsInitialized() const {
    return false;
}

bool UQuestContext::HasEnded() const {
    return false;
}

bool UQuestContext::HasAuthority() const {
    return false;
}

UQuestContextViewModel* UQuestContext::GetViewModel() const {
    return NULL;
}

EQuestResult UQuestContext::GetQuestState() const {
    return EQuestResult::NotStarted;
}

UQuestMemory* UQuestContext::GetQuestMemory() const {
    return NULL;
}

UQuest* UQuestContext::GetQuestAsset() const {
    return NULL;
}

UQuestComponent* UQuestContext::GetOwnerQuestComponent() const {
    return NULL;
}

AController* UQuestContext::GetOwnerController() const {
    return NULL;
}

AActor* UQuestContext::GetOwnerActor() const {
    return NULL;
}

UQuestObjectiveViewModel* UQuestContext::GetObjectiveViewModel(UQuestObjective* Objective) const {
    return NULL;
}

EQuestResult UQuestContext::GetObjectiveResult(UQuestObjective* Objective, bool bReEvaluate) const {
    return EQuestResult::NotStarted;
}

FGuid UQuestContext::GetGuid() const {
    return FGuid{};
}

void UQuestContext::GetCurrentObjectives(TArray<UQuestObjective*>& Objectives) const {
}

EQuestNetworkAuthority UQuestContext::GetAuthority() const {
    return EQuestNetworkAuthority::None;
}

void UQuestContext::GetActiveObjectives(TArray<UQuestObjective*>& Objectives) const {
}

int32 UQuestContext::GetActiveNodeIndex() const {
    return 0;
}

UQuestNode* UQuestContext::GetActiveNode() const {
    return NULL;
}

void UQuestContext::DeactivateObjective(UQuestObjective* Objective) {
}

void UQuestContext::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestContext, ContextGuid);
    DOREPLIFETIME(UQuestContext, QuestStatePacked);
    DOREPLIFETIME(UQuestContext, CurrentNodeIndexPacked);
    DOREPLIFETIME(UQuestContext, QuestAsset);
    DOREPLIFETIME(UQuestContext, ActiveObjectives);
    DOREPLIFETIME(UQuestContext, MemoryReplicator);
    DOREPLIFETIME(UQuestContext, ObjectiveResultReplicator);
}


