#include "IRRMovementGroup.h"

AIRRMovementGroup::AIRRMovementGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseElementMovement = true;
    this->bDrawFormationDebug = false;
    this->RouteLeader = NULL;
}

void AIRRMovementGroup::SetRouteLeader(AActor* NewRouteLeader) {
}

bool AIRRMovementGroup::HasRouteLeader() const {
    return false;
}

int32 AIRRMovementGroup::GetAssignedSlot(const ACharacter* Member) const {
    return 0;
}

AIRRMovementGroup* AIRRMovementGroup::FindGroupFor(const ACharacter* Character) {
    return NULL;
}

void AIRRMovementGroup::ClearMemberSlot(ACharacter* Member) {
}

void AIRRMovementGroup::AssignMemberSlot(ACharacter* Member, int32 SlotIndex) {
}


