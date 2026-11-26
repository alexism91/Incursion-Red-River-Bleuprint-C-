#include "GeneralGameInstance.h"

UGeneralGameInstance::UGeneralGameInstance() {
    this->bIsReconnectingParty = false;
    this->bShouldAttemptReconnect = false;
    this->bExtendedPartyEnabled = false;
    this->bRestock = false;
    this->PoolSize = 2048;
    this->bBulletDebugTracesEnabled = false;
    this->bInfiniteAmmunition = false;
    this->bOnlyTPSounds = false;
    this->bLocalPlayerWeaponSounds = true;
    this->bAIEnabled = true;
    this->bLootEnabled = true;
    this->bStreamingVolumesEnabled = true;
    this->LoadingScreenFadeTime = 0.50f;
    this->bShowLoadingScreen = false;
}

void UGeneralGameInstance::UpdateRaidData(const FIRRRaidData& NewRaidData) {
}



void UGeneralGameInstance::UnregisterMainAudioDevice() {
}


void UGeneralGameInstance::ToggleTPSoundsOnly(bool bActivate) {
}

void UGeneralGameInstance::ToggleTechnicalInvulnerable(bool bActivate) {
}

void UGeneralGameInstance::TogglePerspective_Implementation(bool bFirstPerson) {
}

void UGeneralGameInstance::ToggleLocalPlayerWeaponSounds(bool bActivate) {
}

void UGeneralGameInstance::ToggleKeepInventory(bool bActivate) {
}

void UGeneralGameInstance::ToggleInvulnerable(bool bActivate) {
}

void UGeneralGameInstance::ToggleInvisible(bool bActivate) {
}

void UGeneralGameInstance::ToggleInfiniteAmmunition(bool bActivate) {
}

void UGeneralGameInstance::ToggleExtendedParty(bool bEnable) {
}

void UGeneralGameInstance::ToggleDebugOperations(bool bEnable) {
}

void UGeneralGameInstance::ToggleCinematicCamera() {
}

void UGeneralGameInstance::ToggleCheatMovementSpeed(bool bActivate) {
}

void UGeneralGameInstance::ToggleBulletDebugTraces(bool bActivate) {
}

void UGeneralGameInstance::ToggleAllAIHidden_Implementation(bool Hidden) {
}

void UGeneralGameInstance::ToggleAIOptimization(bool bActivate) {
}

void UGeneralGameInstance::TestConnectionLostOnExtract_3() {
}

void UGeneralGameInstance::TestConnectionLostOnExtract_2() {
}

void UGeneralGameInstance::TestConnectionLostOnExtract_1() {
}

void UGeneralGameInstance::StopLoadingScreen_Delayed() {
}

void UGeneralGameInstance::StopLoadingScreen() {
}

void UGeneralGameInstance::StartNewMission(const FString& MissionName) {
}

void UGeneralGameInstance::SpawnMenu() {
}

void UGeneralGameInstance::SpawnItem(FName Name, int32 Count) {
}

void UGeneralGameInstance::ShowAllAI_Implementation() {
}

void UGeneralGameInstance::SetWeatherType(int32 WeatherType, float TransitionTime) {
}

void UGeneralGameInstance::SetupLoadingScreen(const FString& LevelName) {
}

void UGeneralGameInstance::SetTimeOfDay(int32 Hour24_Format) {
}

void UGeneralGameInstance::SetSuccessRate(float NewSuccessRate) {
}

void UGeneralGameInstance::SetRestock(bool bInRestock) {
}

void UGeneralGameInstance::SetOverallFactionReputation(float NewReputation) {
}

void UGeneralGameInstance::SetLumenScalability(bool bLow) {
}

void UGeneralGameInstance::SetLevel(int32 Level, float XP) {
}

void UGeneralGameInstance::SetHideoutUnitLevel(FName UnitName, int32 Level) {
}

void UGeneralGameInstance::SetFactionReputation(float NewReputation, const FString& FactionName) {
}

void UGeneralGameInstance::SetDurability_Implementation(float NewDurabilityPercentage) {
}

void UGeneralGameInstance::SetAllAIMinMaxOptimizationLevel_Implementation(int32 Min, int32 Max) {
}

void UGeneralGameInstance::SetAIOptimizationLevel(int32 Level) {
}

void UGeneralGameInstance::ResetWorld() {
}

void UGeneralGameInstance::ResetVendor() {
}

void UGeneralGameInstance::ResetTrackedMissions() {
}

void UGeneralGameInstance::ResetSoundEngine() {
}

void UGeneralGameInstance::ResetSafehouse() {
}

void UGeneralGameInstance::ResetResources() {
}

void UGeneralGameInstance::ResetRaidData() {
}

void UGeneralGameInstance::ResetMissionSystem(bool bResetProgressData) {
}

void UGeneralGameInstance::ResetInventory() {
}

void UGeneralGameInstance::ResetAchievements() {
}

void UGeneralGameInstance::RegisterMainAudioDevice() {
}

void UGeneralGameInstance::RegenerateMissions() {
}

void UGeneralGameInstance::OnPatchCheckComplete(bool bAppliedWipes, bool bHasNotesToShow) {
}

void UGeneralGameInstance::OnLevelPreLoad(const FString& LevelName) {
}

void UGeneralGameInstance::OnLevelLoaded(UWorld* World) {
}

void UGeneralGameInstance::OnLevelLoad(const FString& LevelName) {
}

void UGeneralGameInstance::LogMenu() {
}


void UGeneralGameInstance::KillAllAI_Implementation() {
}








void UGeneralGameInstance::ItemList(FName Category, int32 Page) {
}

void UGeneralGameInstance::ItemCategories() {
}

bool UGeneralGameInstance::IsDebugOperationsEnabled() const {
    return false;
}

void UGeneralGameInstance::GiveItem(FName Name, int32 Count) {
}

bool UGeneralGameInstance::GetRestock() const {
    return false;
}

FIRRRaidData UGeneralGameInstance::GetRaidData() const {
    return FIRRRaidData{};
}

void UGeneralGameInstance::ForceExtraction() {
}

void UGeneralGameInstance::ForceCrashGame() {
}

void UGeneralGameInstance::FailTrackedMissions() {
}

void UGeneralGameInstance::EnableStreamingVolumes_Implementation(bool Enable) {
}

void UGeneralGameInstance::EnableLoot_Implementation(bool Enable) {
}

void UGeneralGameInstance::EnableGCLogging() {
}

void UGeneralGameInstance::EnableAI_Implementation(bool Enable) {
}

void UGeneralGameInstance::DisableGCLogging() {
}

void UGeneralGameInstance::DealDamageToPlayer_Implementation(float Amount, bool bWound) {
}

void UGeneralGameInstance::CompleteTrackedMissions() {
}

void UGeneralGameInstance::CommandMenu() {
}

void UGeneralGameInstance::ApplySettingCollections() {
}

void UGeneralGameInstance::ApplyGraphicSettings_Implementation(USettingsSaveGame* SettingsSave) {
}

void UGeneralGameInstance::AddResource(FName Name, int32 Amount) {
}

void UGeneralGameInstance::AddItem(FName Name, int32 Amount) {
}

void UGeneralGameInstance::AddConsole() {
}


