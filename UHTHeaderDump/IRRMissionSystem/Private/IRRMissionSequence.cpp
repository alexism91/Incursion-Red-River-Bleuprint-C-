#include "IRRMissionSequence.h"
#include "Net/UnrealNetwork.h"

UIRRMissionSequence::UIRRMissionSequence() {
    this->bRespectOrder = true;
    this->SequenceState = EIRRSequenceState::Dormant;
    this->OwningMissionData = NULL;
}

void UIRRMissionSequence::SuspendSequence() {
}

void UIRRMissionSequence::SetSequenceState(EIRRSequenceState NewState) {
}

void UIRRMissionSequence::OnRep_SequenceState() {
}

void UIRRMissionSequence::OnProgressChanged(FIRRMissionVariable NewProgress) {
}

void UIRRMissionSequence::InitSequence(UIRRMissionData* NewOwningMissionData) {
}

EIRRSequenceState UIRRMissionSequence::GetSequenceState() {
    return EIRRSequenceState::Dormant;
}

UIRRMissionData* UIRRMissionSequence::GetOwningMissionData() {
    return NULL;
}

void UIRRMissionSequence::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMissionSequence, SequenceId);
    DOREPLIFETIME(UIRRMissionSequence, bRespectOrder);
    DOREPLIFETIME(UIRRMissionSequence, Headline);
    DOREPLIFETIME(UIRRMissionSequence, Objectives);
    DOREPLIFETIME(UIRRMissionSequence, EntryEvents);
    DOREPLIFETIME(UIRRMissionSequence, ExitEvents);
    DOREPLIFETIME(UIRRMissionSequence, SequenceState);
    DOREPLIFETIME(UIRRMissionSequence, OwningMissionData);
}


