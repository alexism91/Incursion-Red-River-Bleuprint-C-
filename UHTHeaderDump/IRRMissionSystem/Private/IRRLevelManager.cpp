#include "IRRLevelManager.h"

AIRRLevelManager::AIRRLevelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExteriorEnvironment = EIRRAcousticEnvironment::ExteriorField;
    this->OutdoorsAmbience = NULL;
    this->RaidBriefingAgent = NULL;
    this->RaidBriefingDelay = 3.00f;
    this->RaidBriefingAbilityClass = NULL;
    this->bOverrideRaidBriefingWait = false;
    this->bHideLevelZonesInEditor = false;
}

void AIRRLevelManager::UnRegisterZone(AIRRLevelTrigger* LevelZone) {
}

void AIRRLevelManager::StartRaidBriefing() {
}

void AIRRLevelManager::ShowLevelZonesInEditor() {
}

void AIRRLevelManager::SetupOperations() {
}

void AIRRLevelManager::SetLevelZonesHiddenInEditor(bool bNewHidden) {
}

void AIRRLevelManager::RemoveLootQueryTag(FGameplayTag Tag) {
}

void AIRRLevelManager::RemoveGlobalLootModifier(ULootContextModifier* Modifier) {
}

void AIRRLevelManager::RegisterZone(AIRRLevelTrigger* LevelZone) {
}

void AIRRLevelManager::OnPawnLeftZone_Implementation(AIRRLevelTrigger* LevelZone, APawn* Pawn) {
}

void AIRRLevelManager::OnPawnEnteredZone_Implementation(AIRRLevelTrigger* LevelZone, APawn* Pawn) {
}

bool AIRRLevelManager::LoadOperationsConfig(FName ConfigId, FIRROperationSetupConfig& OutConfig) const {
    return false;
}

void AIRRLevelManager::HideLevelZonesInEditor() {
}

TArray<AIRRLevelTrigger*> AIRRLevelManager::GetLevelZones() {
    return TArray<AIRRLevelTrigger*>();
}

TArray<ULootContextModifier*> AIRRLevelManager::GetApplicableLootModifiersForActor(AActor* Actor, const FGameplayTagContainer& ContainerTags) const {
    return TArray<ULootContextModifier*>();
}

AActor* AIRRLevelManager::ForceStartOperation(FName OperationId, const FString& StartPointName) {
    return NULL;
}

void AIRRLevelManager::ClearLootQueryTags() {
}

void AIRRLevelManager::ClearGlobalLootModifiers() {
}

void AIRRLevelManager::CancelRaidBriefing() {
}

void AIRRLevelManager::ApplyAcousticEnvironment() {
}

void AIRRLevelManager::AddLootQueryTag(FGameplayTag Tag) {
}

void AIRRLevelManager::AddGlobalLootModifier(ULootContextModifier* Modifier) {
}


