#include "IRRAIGroupController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNComponent -FallbackName=HTNComponent

AIRRAIGroupController::AIRRAIGroupController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HTNComponent = CreateDefaultSubobject<UHTNComponent>(TEXT("HTN Component"));
    this->BehaviorComponent = NULL;
}

bool AIRRAIGroupController::RemoveMember(UIRRAIGroupComponent* InMember) {
    return false;
}

bool AIRRAIGroupController::IsActorInGroup(const AActor* InActor) const {
    return false;
}

UIRRAIBehaviorComponent* AIRRAIGroupController::GetBehaviorComponent() const {
    return NULL;
}

bool AIRRAIGroupController::CanMemberSpeak(FGameplayTag BarkTag, UIRRAIGroupComponent* GroupComp) {
    return false;
}

void AIRRAIGroupController::AddMember(UIRRAIGroupComponent* InMember) {
}


