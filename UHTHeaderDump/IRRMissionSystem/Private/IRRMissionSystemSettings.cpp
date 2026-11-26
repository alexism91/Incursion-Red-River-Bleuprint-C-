#include "IRRMissionSystemSettings.h"

UIRRMissionSystemSettings::UIRRMissionSystemSettings() {
    this->GSyncJson = TEXT("GoogleKey");
    this->MissionSaveGameName = TEXT("MissionSaveGame");
    this->HideoutSaveGameName = TEXT("SafeHouseSaveGame");
    this->WorldSaveGameName = TEXT("WorldSaveGame");
    this->MaxMissionPoolSize = 5;
    this->SuccessRateMissionCount = 8;
    this->SavedRowNames = 20;
    this->bUseStaticTime = false;
    this->TimeFactor = 6;
    this->MaxConcurrentOperations = 2;
    this->MinTimeBetweenActivations = 360.00f;
    this->GatePollInterval = 1.00f;
    this->RadioFadeInLeadTime = 0.25f;
    this->CutoffStopDelay = 0.15f;
    this->bCheckOffInterruptedBriefings = false;
    this->bAddObjectiveCompletionBriefing = true;
    this->ObjectiveCompletionBriefingLines.AddDefaulted(4);
    this->ObjectiveCompletionBriefingPickMode = EIRRBriefingPickMode::RandomNoRepeat;
    this->DebugMissions.AddDefaulted(56);
}


