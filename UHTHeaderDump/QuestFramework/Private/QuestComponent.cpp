#include "QuestComponent.h"
#include "Net/UnrealNetwork.h"

UQuestComponent::UQuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateUsingRegisteredSubObjectList = false;
}

void UQuestComponent::SuspendQuest(UQuestContext* QuestContext) {
}

void UQuestComponent::SuspendAllQuests() {
}

bool UQuestComponent::SaveQuestStates(FQuestSaveStateData& SaveData) {
    return false;
}

void UQuestComponent::OnRep_ActiveQuestContexts(const TArray<UQuestContext*>& OldActiveContexts) {
}

bool UQuestComponent::LoadQuestStates(const FQuestSaveStateData& SaveData, bool bForceRestore) {
    return false;
}

bool UQuestComponent::HasActiveQuestContext(UQuest* Quest) const {
    return false;
}

void UQuestComponent::GetAllActiveQuestContexts(TArray<UQuestContext*>& OutContexts) const {
}

UQuestContext* UQuestComponent::FindFirstActiveQuestContext(UQuest* Quest) const {
    return NULL;
}

void UQuestComponent::FindAllActiveQuestContexts(UQuest* Quest, TArray<UQuestContext*>& OutContexts) const {
}

UQuestContext* UQuestComponent::CreateQuestContext(UQuest* Quest, bool bStart) {
    return NULL;
}

void UQuestComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestComponent, ActiveQuestContexts);
}


