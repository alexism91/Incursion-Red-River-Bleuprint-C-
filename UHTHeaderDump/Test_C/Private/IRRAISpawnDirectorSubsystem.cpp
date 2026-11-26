#include "IRRAISpawnDirectorSubsystem.h"

UIRRAISpawnDirectorSubsystem::UIRRAISpawnDirectorSubsystem() {
}

void UIRRAISpawnDirectorSubsystem::StopReinforcements(int32 RequestID) {
}

int32 UIRRAISpawnDirectorSubsystem::RequestReinforcementsWithSettings(FVector Origin, AActor* Initiator, const FIRRSpawnReinforcementSettings& Settings, AUPSMovementGroup* JoinGroup) {
    return 0;
}

int32 UIRRAISpawnDirectorSubsystem::RequestReinforcements(FVector Origin, AActor* Initiator, FName AllegianceId) {
    return 0;
}

void UIRRAISpawnDirectorSubsystem::PauseReinforcements(int32 RequestID) {
}

void UIRRAISpawnDirectorSubsystem::InitSpawns(FName ConfigId) {
}

int32 UIRRAISpawnDirectorSubsystem::GetRemainingReinforcements(int32 RequestID) const {
    return 0;
}

TArray<AIRRAIBaseCharacter*> UIRRAISpawnDirectorSubsystem::GetReinforcementBots(int32 RequestID, bool bAliveOnly) const {
    return TArray<AIRRAIBaseCharacter*>();
}

FIRRSpawnReinforcementSettings UIRRAISpawnDirectorSubsystem::GetDefaultReinforcementSettings() {
    return FIRRSpawnReinforcementSettings{};
}

float UIRRAISpawnDirectorSubsystem::GetCoopMultiplier() {
    return 0.0f;
}

bool UIRRAISpawnDirectorSubsystem::ContinueReinforcements(int32 RequestID) {
    return false;
}

int32 UIRRAISpawnDirectorSubsystem::CalcCoopSpawnCount(int32 BaseCount, bool bUseCoopMultiplier) {
    return 0;
}


