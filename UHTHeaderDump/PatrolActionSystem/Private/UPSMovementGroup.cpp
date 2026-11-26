#include "UPSMovementGroup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

AUPSMovementGroup::AUPSMovementGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->GroupLeader = NULL;
    this->bRotateMovementPointsAroundLeader = true;
    this->Formation = NULL;
    this->MembersMovementReactionTime = 0.00f;
    this->MembersMovementReactionTimeRandomDiviation = 0.00f;
    this->GroupMovementLeaderAIC = NULL;
    this->BillboardComponent = (UBillboardComponent*)RootComponent;
    this->SpawnedFormation = NULL;
}

void AUPSMovementGroup::UpdateLocationInFormationForCharacter(ACharacter* Character) {
}

void AUPSMovementGroup::SetGroupLeader(ACharacter* NewLeader) {
}

void AUPSMovementGroup::RemoveGroupMember(ACharacter* MemberToRemove) {
}

void AUPSMovementGroup::OnLeaderStartMovementToLocation(FVector NewLocation) {
}

void AUPSMovementGroup::OnLeaderStartMovementToActor(AActor* NewActor) {
}

void AUPSMovementGroup::OnLeaderCompleteMovement(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

void AUPSMovementGroup::OnCharacterDestroyed(AActor* DestroyedActor) {
}



void AUPSMovementGroup::InitializeMovementGroup() {
}

void AUPSMovementGroup::InitializeGroupMembers() {
}

void AUPSMovementGroup::AddGroupMember(ACharacter* NewMember) {
}


