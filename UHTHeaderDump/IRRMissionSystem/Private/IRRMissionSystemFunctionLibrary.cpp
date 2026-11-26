#include "IRRMissionSystemFunctionLibrary.h"

UIRRMissionSystemFunctionLibrary::UIRRMissionSystemFunctionLibrary() {
}

void UIRRMissionSystemFunctionLibrary::UpdateRaidDataDetail(const UObject* WorldContextObject, FIRRRaidData_Detail NewRaidData) {
}

void UIRRMissionSystemFunctionLibrary::UpdateRaidData(const UObject* WorldContextObject, FIRRRaidData NewRaidData) {
}

bool UIRRMissionSystemFunctionLibrary::TryFailMission(UIRRMissionData* MissionData) {
    return false;
}

void UIRRMissionSystemFunctionLibrary::StampMissionWorldBinding(AActor* SpawnedActor, const FIRRMissionWorldBinding& Binding, const AIRRMissionSpawnPosition* SpawnPosition) {
}

bool UIRRMissionSystemFunctionLibrary::ShouldShowMissionMarker(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent) {
    return false;
}

EIRRObjectiveWorldState UIRRMissionSystemFunctionLibrary::ResolveObjectiveWorldState(UIRRMissionComponent* PlayerMissionComp, const FIRRMissionWorldBinding& Binding) {
    return EIRRObjectiveWorldState::Hidden;
}

FIRRMissionMarkerPresentation UIRRMissionSystemFunctionLibrary::ResolveMissionMarkerPresentation(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent) {
    return FIRRMissionMarkerPresentation{};
}

UIRRMissionObjective* UIRRMissionSystemFunctionLibrary::ResolveMissionMarkerObjective(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent) {
    return NULL;
}

UIRRMissionData* UIRRMissionSystemFunctionLibrary::ResolveMissionMarkerMission(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent) {
    return NULL;
}

EIRRObjectiveWorldState UIRRMissionSystemFunctionLibrary::ResolveBestObjectiveWorldState(UIRRMissionComponent* PlayerMissionComp, UIRRObjectiveComponent* ObjectiveComponent) {
    return EIRRObjectiveWorldState::Hidden;
}

void UIRRMissionSystemFunctionLibrary::RemoveFromDayTime(FIRRDayTime& DayTime, FIRRDayTime ToRemoveDayTime) {
}

bool UIRRMissionSystemFunctionLibrary::PingClosestSequenceTarget(const UObject* WorldContextObject, UIRRMissionSequence* Sequence, APlayerController* PlayerController) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::PingClosestObjectiveTarget(const UObject* WorldContextObject, UIRRMissionObjective* Objective, APlayerController* PlayerController) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::MarkMissionWorldSpawnPositionCompleteForActor(AActor* InteractingActor, UIRRObjectiveComponent* ObjectiveComponent) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::MarkMissionWorldSpawnPositionComplete(UIRRMissionComponent* PlayerMissionComp, const FIRRMissionWorldBinding& Binding) {
    return false;
}

FIRRMissionWorldBinding UIRRMissionSystemFunctionLibrary::MakeMissionWorldBindingForSpawnPosition(const FIRRMissionWorldBinding& Binding, const AIRRMissionSpawnPosition* SpawnPosition) {
    return FIRRMissionWorldBinding{};
}

bool UIRRMissionSystemFunctionLibrary::IsProgressEqualToTarget(FIRRMissionVariable Progress, FIRRMissionVariable Target) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::IsDayTimeZero(FIRRDayTime DayTime, FIRRDayTime ToleranceTime) {
    return false;
}

void UIRRMissionSystemFunctionLibrary::InitializeDefaultObjectiveMarkerSetup(FIRRObjectiveMarkerSetup& Setup) {
}

FGameplayTagContainer UIRRMissionSystemFunctionLibrary::GetZoneTagsByPawn(APawn* Pawn) {
    return FGameplayTagContainer{};
}

TArray<AIRRLevelTrigger*> UIRRMissionSystemFunctionLibrary::GetZonesByPawn(APawn* Pawn) {
    return TArray<AIRRLevelTrigger*>();
}

bool UIRRMissionSystemFunctionLibrary::GetTotalXPBetween(const UObject* WorldContextObject, int32 FromLevel, float FromXP, int32 ToLevel, float ToXP, float& OutTotalXP) {
    return false;
}

FIRRDayTime UIRRMissionSystemFunctionLibrary::GetRandomDayTimeInRange(FIRRDayTime DayTimeMin, FIRRDayTime DayTimeMax) {
    return FIRRDayTime{};
}

FIRRRaidData_Detail UIRRMissionSystemFunctionLibrary::GetRaidDataDetailByTag(const UObject* WorldContextObject, FGameplayTag Identifier, bool& bFound) {
    return FIRRRaidData_Detail{};
}

FIRRRaidData UIRRMissionSystemFunctionLibrary::GetRaidData(const UObject* WorldContextObject, bool& bFound) {
    return FIRRRaidData{};
}

float UIRRMissionSystemFunctionLibrary::GetLoyaltyLevelByFaction(TArray<FIRRLoyaltyByFaction> LoyaltyData, const FGameplayTag Faction) {
    return 0.0f;
}

bool UIRRMissionSystemFunctionLibrary::GetLocalPlayerMaxXPByLevel(const UObject* WorldContextObject, int32 CurrentLevel, float& MaxXP) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::GetLocalPlayerLevel(const UObject* WorldContextObject, int32& Level, float& CurrentXP, float& MaxXP) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::GetIsPawnInZone(APawn* Pawn, FGameplayTag ZoneTag) {
    return false;
}

UIRRWorldManager* UIRRMissionSystemFunctionLibrary::GetIRRWorldManager(const UObject* WorldContextObject) {
    return NULL;
}

UIRRMissionSystemSettings* UIRRMissionSystemFunctionLibrary::GetIRRMissionSystemSettings() {
    return NULL;
}

UIRRMissionManager* UIRRMissionSystemFunctionLibrary::GetIRRMissionManager(const UObject* WorldContextObject) {
    return NULL;
}

UIRRMissionComponent* UIRRMissionSystemFunctionLibrary::GetIRRMissionComponent(const UObject* WorldContextObject) {
    return NULL;
}

UIRRMinimapManager* UIRRMissionSystemFunctionLibrary::GetIRRMinimapManager(const UObject* WorldContextObject) {
    return NULL;
}

UIRRMinimapComponent* UIRRMissionSystemFunctionLibrary::GetIRRMinimapComponent(const UObject* WorldContextObject) {
    return NULL;
}

UIRRMarkerComponent* UIRRMissionSystemFunctionLibrary::GetIRRMarkerComponent(AActor* Owner) {
    return NULL;
}

AIRRLevelManager* UIRRMissionSystemFunctionLibrary::GetIRRLevelManager(const UObject* WorldContextObject) {
    return NULL;
}

UIRRJobBoardComponent* UIRRMissionSystemFunctionLibrary::GetIRRJobBoardComponent(const UObject* WorldContextObject) {
    return NULL;
}

UIRRInboxComponent* UIRRMissionSystemFunctionLibrary::GetIRRInboxComponent(const UObject* WorldContextObject) {
    return NULL;
}

UIRRHideoutUnitManager* UIRRMissionSystemFunctionLibrary::GetIRRHideoutUnitManager(const UObject* WorldContextObject) {
    return NULL;
}

UIRRHideoutUnitComponent* UIRRMissionSystemFunctionLibrary::GetIRRHideoutUnitComponent(AActor* Owner) {
    return NULL;
}

UIRRExtractionManager* UIRRMissionSystemFunctionLibrary::GetIRRExtractionManager(const UObject* WorldContextObject) {
    return NULL;
}

FText UIRRMissionSystemFunctionLibrary::GetHideoutUnitDisplayName(FGameplayTag HideoutUnitTag) {
    return FText::GetEmpty();
}

FName UIRRMissionSystemFunctionLibrary::GetFactionFullNameByTag(FGameplayTag FactionTag) {
    return NAME_None;
}

FName UIRRMissionSystemFunctionLibrary::GetFactionAbbreviationByTag(FGameplayTag FactionTag) {
    return NAME_None;
}

bool UIRRMissionSystemFunctionLibrary::GetDefaultObjectiveMarkerStateVisibility(EIRRObjectiveWorldState WorldState) {
    return false;
}

UIRRMissionSequence* UIRRMissionSystemFunctionLibrary::FindSequenceForObjective(UIRRMissionData* MissionData, const FGuid& ObjectiveId) {
    return NULL;
}

UIRRMissionObjective* UIRRMissionSystemFunctionLibrary::FindObjectiveByBinding(UIRRMissionData* MissionData, const FIRRMissionWorldBinding& Binding) {
    return NULL;
}

UIRRMarkerComponent* UIRRMissionSystemFunctionLibrary::FindClosestSequenceTargetMarker(const UObject* WorldContextObject, UIRRMissionSequence* Sequence, APlayerController* PlayerController) {
    return NULL;
}

UIRRMarkerComponent* UIRRMissionSystemFunctionLibrary::FindClosestObjectiveTargetMarker(const UObject* WorldContextObject, UIRRMissionObjective* Objective, APlayerController* PlayerController) {
    return NULL;
}

FString UIRRMissionSystemFunctionLibrary::DayTimeToString(FIRRDayTime DayTime, bool b24Hour, bool bIncludeHours, bool bIncludeMinutes, bool bIncludeSeconds) {
    return TEXT("");
}

bool UIRRMissionSystemFunctionLibrary::CanPingClosestSequenceTarget(const UObject* WorldContextObject, UIRRMissionSequence* Sequence, APlayerController* PlayerController) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::CanPingClosestObjectiveTarget(const UObject* WorldContextObject, UIRRMissionObjective* Objective, APlayerController* PlayerController) {
    return false;
}

bool UIRRMissionSystemFunctionLibrary::CanInteractWithMissionWorldActor(AActor* InteractingActor, UIRRObjectiveComponent* ObjectiveComponent) {
    return false;
}

void UIRRMissionSystemFunctionLibrary::BroadcastWorldEvent(const UObject* WorldContextObject, FGameplayTag MessageTag, UIRRMissionData* MissionData, FIRRMissionEventPayload Payload) {
}

void UIRRMissionSystemFunctionLibrary::BroadcastMissionEvent(const UObject* WorldContextObject, FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Receiver) {
}

void UIRRMissionSystemFunctionLibrary::ApplyMissionPayload(FIRRMissionVariable& MissionVariable, FIRRMissionEventPayload Payload) {
}

void UIRRMissionSystemFunctionLibrary::AddToDayTime(FIRRDayTime& DayTime, FIRRDayTime ToAddDayTime, bool bClampHours) {
}

bool UIRRMissionSystemFunctionLibrary::AddLocalPlayerXP(const UObject* WorldContextObject, float XPAmount, bool bSaveAfter) {
    return false;
}


