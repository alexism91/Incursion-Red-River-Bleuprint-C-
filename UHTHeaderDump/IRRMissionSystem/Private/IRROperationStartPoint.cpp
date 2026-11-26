#include "IRROperationStartPoint.h"
#include "Net/UnrealNetwork.h"

AIRROperationStartPoint::AIRROperationStartPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->OperationActor = NULL;
    this->MissionSetup = NULL;
    this->MissionData = NULL;
    this->bActivated = false;
}

bool AIRROperationStartPoint::TryRerollOperation() {
    return false;
}

void AIRROperationStartPoint::PublishMissionData_Implementation() {
}

UIRRMissionData* AIRROperationStartPoint::PrepareMissionData() {
    return NULL;
}

bool AIRROperationStartPoint::IsOperationRunning() const {
    return false;
}

bool AIRROperationStartPoint::IsActivated() const {
    return false;
}

TArray<FVector> AIRROperationStartPoint::GetOperationProbePoints() const {
    return TArray<FVector>();
}

UIRRMissionData* AIRROperationStartPoint::GetOperationMissionData() const {
    return NULL;
}

bool AIRROperationStartPoint::ActivateOperation() {
    return false;
}

void AIRROperationStartPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIRROperationStartPoint, MissionUID);
    DOREPLIFETIME(AIRROperationStartPoint, bActivated);
}


