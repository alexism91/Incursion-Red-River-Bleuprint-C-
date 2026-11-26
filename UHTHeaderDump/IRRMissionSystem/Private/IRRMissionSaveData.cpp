#include "IRRMissionSaveData.h"

FIRRMissionSaveData::FIRRMissionSaveData() {
    this->bOpened = false;
    this->bCompletedOnce = false;
    this->MissionState = EIRRMissionState::NotStarted;
    this->ActiveSequenceIndex = 0;
    this->RaidCounter = 0;
}

