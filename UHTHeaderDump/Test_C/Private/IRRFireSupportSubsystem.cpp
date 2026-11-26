#include "IRRFireSupportSubsystem.h"

UIRRFireSupportSubsystem::UIRRFireSupportSubsystem() {
    this->VoiceSet = NULL;
}

void UIRRFireSupportSubsystem::SetDesignationLoadout(APawn* Operator, const FIRRDesignationConfig& InConfig, const FIRRFireSupportSalvo& InSalvo, UIRRHandlerVoiceSet* InVoiceSet) {
}

void UIRRFireSupportSubsystem::ReportLaseEnded() {
}

void UIRRFireSupportSubsystem::ReportLase(AActor* LasedActor, FVector ImpactPoint, bool bAiming) {
}

bool UIRRFireSupportSubsystem::IsReacquisitionPending() const {
    return false;
}

bool UIRRFireSupportSubsystem::IsDangerClose() const {
    return false;
}

bool UIRRFireSupportSubsystem::IsAwaitingMark() const {
    return false;
}

float UIRRFireSupportSubsystem::GetStandoffDistance() const {
    return 0.0f;
}

float UIRRFireSupportSubsystem::GetStageTimeRemaining() const {
    return 0.0f;
}

EIRRDesignationStage UIRRFireSupportSubsystem::GetStage() const {
    return EIRRDesignationStage::Idle;
}

float UIRRFireSupportSubsystem::GetMarkProgress() const {
    return 0.0f;
}

AActor* UIRRFireSupportSubsystem::GetDesignatedSubject() const {
    return NULL;
}

void UIRRFireSupportSubsystem::AbandonDesignation(EIRRDesignationAbortReason reason) {
}


