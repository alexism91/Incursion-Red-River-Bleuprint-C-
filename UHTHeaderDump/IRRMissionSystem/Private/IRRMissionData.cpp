#include "IRRMissionData.h"
#include "Net/UnrealNetwork.h"

UIRRMissionData::UIRRMissionData() {
    this->MissionState = EIRRMissionState::NotStarted;
    this->RaidCounter = 0;
    this->ActiveSequenceIndex = 0;
    this->bOpened = false;
    this->bShared = false;
    this->bCompletedOnce = false;
    this->bHasDispatchedSetupEvents = false;
    this->DispatchedSetupEventsState = EIRRMissionState::NotStarted;
}

void UIRRMissionData::SuspendMission() {
}

void UIRRMissionData::SetMissionState(EIRRMissionState NewState) {
}

void UIRRMissionData::ResetMission() {
}

void UIRRMissionData::OnSequenceStateChanged(EIRRSequenceState NewState, UIRRMissionSequence* Sequence) {
}

void UIRRMissionData::OnRep_MissionState() {
}

void UIRRMissionData::InitMission() {
}

AActor* UIRRMissionData::GetOperationActor() const {
    return NULL;
}

EIRRMissionState UIRRMissionData::GetMissionState() {
    return EIRRMissionState::NotStarted;
}

UIRRMissionSetup* UIRRMissionData::GetMissionSetup() {
    return NULL;
}

AActor* UIRRMissionData::GetMissionOwner() {
    return NULL;
}

FGameplayTagContainer UIRRMissionData::GetMissionMapTags() {
    return FGameplayTagContainer{};
}

void UIRRMissionData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionData, MissionSetup);
    DOREPLIFETIME(UIRRMissionData, MissionRewardItems);
    DOREPLIFETIME(UIRRMissionData, MissionState);
    DOREPLIFETIME(UIRRMissionData, Sequences);
    DOREPLIFETIME(UIRRMissionData, UID);
    DOREPLIFETIME(UIRRMissionData, RaidCounter);
    DOREPLIFETIME(UIRRMissionData, ActiveSequenceIndex);
    DOREPLIFETIME(UIRRMissionData, bCompletedOnce);
}


