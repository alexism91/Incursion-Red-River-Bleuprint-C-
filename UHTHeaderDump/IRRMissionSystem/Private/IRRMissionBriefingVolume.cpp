#include "IRRMissionBriefingVolume.h"
#include "IRRMissionBriefingTriggerComponent.h"

AIRRMissionBriefingVolume::AIRRMissionBriefingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BriefingTrigger = CreateDefaultSubobject<UIRRMissionBriefingTriggerComponent>(TEXT("BriefingTrigger"));
}

UIRRMissionBriefingTriggerComponent* AIRRMissionBriefingVolume::GetBriefingTrigger() const {
    return NULL;
}


