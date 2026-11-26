#include "IRRMissionObjective.h"
#include "Net/UnrealNetwork.h"

UIRRMissionObjective::UIRRMissionObjective() {
    this->bOptional = false;
    this->bShared = false;
    this->ActionWidgetClass = NULL;
    this->TargetData = NULL;
    this->bNoCompletionBriefing = false;
    this->bCompleted = false;
    this->OwningMissionSequence = NULL;
}

FString UIRRMissionObjective::TargetVariableToString_Implementation() {
    return TEXT("");
}

void UIRRMissionObjective::SuspendObjective() {
}

void UIRRMissionObjective::SetProgress(FIRRMissionVariable NewProgress) {
}

void UIRRMissionObjective::OnRep_ProgressVariable() {
}

bool UIRRMissionObjective::MarkSpawnPositionComplete(FGuid InSpawnPositionUID) {
    return false;
}

void UIRRMissionObjective::InitObjective(UIRRMissionSequence* NewOwningMissionSequence) {
}

bool UIRRMissionObjective::HasCompletedSpawnPosition(FGuid InSpawnPositionUID) const {
    return false;
}

FIRRMissionVariable UIRRMissionObjective::GetProgress() {
    return FIRRMissionVariable{};
}

UIRRMissionData* UIRRMissionObjective::GetOwningMissionData() {
    return NULL;
}

FText UIRRMissionObjective::GetObjectiveDescription_Implementation() {
    return FText::GetEmpty();
}

void UIRRMissionObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionObjective, ObjectiveId);
    DOREPLIFETIME(UIRRMissionObjective, bOptional);
    DOREPLIFETIME(UIRRMissionObjective, bShared);
    DOREPLIFETIME(UIRRMissionObjective, Description);
    DOREPLIFETIME(UIRRMissionObjective, TargetVariable);
    DOREPLIFETIME(UIRRMissionObjective, TargetData);
    DOREPLIFETIME(UIRRMissionObjective, CompletionEvents);
    DOREPLIFETIME(UIRRMissionObjective, ProgressVariable);
    DOREPLIFETIME(UIRRMissionObjective, CompletedSpawnPositionUIDs);
    DOREPLIFETIME(UIRRMissionObjective, OwningMissionSequence);
}


