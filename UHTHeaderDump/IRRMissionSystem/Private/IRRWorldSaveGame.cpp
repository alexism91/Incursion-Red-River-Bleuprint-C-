#include "IRRWorldSaveGame.h"

UIRRWorldSaveGame::UIRRWorldSaveGame() {
    this->bSecondTimeZone = false;
    this->bLendLoadout = false;
}

void UIRRWorldSaveGame::SetUseSecondTimeZone(bool NewBool) {
}

void UIRRWorldSaveGame::SetUseLendLoadout(bool NewBool) {
}

void UIRRWorldSaveGame::SetTravelToMap(FGameplayTag NewTravelToMap) {
}

void UIRRWorldSaveGame::SetMapDataArray(TArray<FIRRMapState> NewArray) {
}

void UIRRWorldSaveGame::SetDayTime(FIRRDayTime NewTime) {
}

void UIRRWorldSaveGame::SetArrivalTime(FIRRDayTime NewArrivalTime) {
}

bool UIRRWorldSaveGame::GetUseSecondTimeZone() const {
    return false;
}

bool UIRRWorldSaveGame::GetUseLendLoadout() const {
    return false;
}

FGameplayTag UIRRWorldSaveGame::GetTravelToMap() const {
    return FGameplayTag{};
}

TArray<FIRRMapState> UIRRWorldSaveGame::GetMapStateArray() const {
    return TArray<FIRRMapState>();
}

FIRRDayTime UIRRWorldSaveGame::GetDayTime() const {
    return FIRRDayTime{};
}

FIRRDayTime UIRRWorldSaveGame::GetArrivalTime() const {
    return FIRRDayTime{};
}


