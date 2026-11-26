#include "IRRMissionSetup.h"

UIRRMissionSetup::UIRRMissionSetup() {
    this->MissionImage = NULL;
    this->bStoryMission = false;
    this->bPersist = true;
    this->MaxRaids = -1;
    this->XPReward = 0.00f;
    this->bReset = false;
    this->OnCompletedEvents.AddDefaulted(2);
}

bool UIRRMissionSetup::IsStoryMission() {
    return false;
}


