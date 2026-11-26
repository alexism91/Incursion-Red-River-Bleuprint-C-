#include "IRRWorldManager.h"
#include "Net/UnrealNetwork.h"

UIRRWorldManager::UIRRWorldManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallbackMapSetup = NULL;
    this->WorldSaveGame = NULL;
    this->bSecondTimeZone = false;
}

void UIRRWorldManager::UpdateMapState(FIRRMapState& MapState, FIRRDayTime DeltaTime) {
}

void UIRRWorldManager::UpdateDayTime() {
}

void UIRRWorldManager::ToggleUseSecondTimeZone(bool bUseSecondTimeZone) {
}

void UIRRWorldManager::ToggleUseLendLoadout(bool bUseLendLoadout) {
}

void UIRRWorldManager::SetTravelToMap(FGameplayTag MapTag) {
}

void UIRRWorldManager::SetArrivalTime(FGameplayTag MapTag) {
}

void UIRRWorldManager::SaveWorld() {
}

void UIRRWorldManager::ResetWorldManager() {
}

void UIRRWorldManager::OnRep_StartDayTime() {
}


bool UIRRWorldManager::IsNight(FIRRDayTime DayTime) {
    return false;
}

bool UIRRWorldManager::IsDay(FIRRDayTime DayTime) {
    return false;
}

bool UIRRWorldManager::IsCurrentlyNight() const {
    return false;
}

bool UIRRWorldManager::IsCurrentlyDay() const {
    return false;
}

void UIRRWorldManager::InitWorldManager() {
}

void UIRRWorldManager::InitMapData(UIRRMapSetup* MapData) {
}

UIRRMapSetup* UIRRWorldManager::GetMapSetupByTag(FGameplayTag MapTag) const {
    return NULL;
}

UIRRMapSetup* UIRRWorldManager::GetMapSetupByCurrentLevel() const {
    return NULL;
}

FIRRDayTime UIRRWorldManager::GetDayTimeByTag(FGameplayTag MapTag, bool bUseSecondTimeZone) const {
    return FIRRDayTime{};
}

FIRRDayTime UIRRWorldManager::GetDayTimeByCurrentLevel(bool bUseSecondTimeZone) const {
    return FIRRDayTime{};
}

FIRRDayTime UIRRWorldManager::GetArrivalDayTime() {
    return FIRRDayTime{};
}

UIRRWeatherSettings* UIRRWorldManager::GetActiveWeatherSettingsByTag(FGameplayTag MapTag) {
    return NULL;
}

UIRRWeatherSettings* UIRRWorldManager::GetActiveWeatherSettingsByCurrentLevel() const {
    return NULL;
}

void UIRRWorldManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRWorldManager, StartDayTime);
    DOREPLIFETIME(UIRRWorldManager, bSecondTimeZone);
    DOREPLIFETIME(UIRRWorldManager, TravelToMap);
    DOREPLIFETIME(UIRRWorldManager, ArrivalDayTime);
}


