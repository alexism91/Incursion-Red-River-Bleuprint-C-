#include "IRRAllegianceRegistry.h"

UIRRAllegianceRegistry::UIRRAllegianceRegistry() {
    this->PlayerAllegianceId = TEXT("FANG");
}

bool UIRRAllegianceRegistry::UnregisterAllegiance(FName AllegianceId) {
    return false;
}

void UIRRAllegianceRegistry::SetPlayerAllegianceId(FName InPlayerAllegianceId) {
}

void UIRRAllegianceRegistry::ScanAllegianceFolders() {
}

void UIRRAllegianceRegistry::RegisterAllegianceSearchPath(const FString& Directory) {
}

bool UIRRAllegianceRegistry::RegisterAllegiance(const FIRRAllegianceDefinition& Definition) {
    return false;
}

bool UIRRAllegianceRegistry::IsAllegianceRegistered(FName AllegianceId) const {
    return false;
}

bool UIRRAllegianceRegistry::ImportAllegianceFromFile(const FString& FilePath) {
    return false;
}

FName UIRRAllegianceRegistry::GetPlayerAllegianceId() const {
    return NAME_None;
}

FGenericTeamId UIRRAllegianceRegistry::GetOrAssignTeamId(FName AllegianceId) {
    return FGenericTeamId{};
}

FGameplayTag UIRRAllegianceRegistry::GetMissionFaction(FName AllegianceId) const {
    return FGameplayTag{};
}

EIRRAllegianceAttitude UIRRAllegianceRegistry::GetAttitude(FName A, FName B) const {
    return EIRRAllegianceAttitude::Friendly;
}

bool UIRRAllegianceRegistry::GetAllegianceVoice(FName AllegianceId, FIRRAllegianceVoice& OutVoice) const {
    return false;
}

bool UIRRAllegianceRegistry::GetAllegianceStyle(FName AllegianceId, FIRRAllegianceStyle& OutStyle) const {
    return false;
}

FName UIRRAllegianceRegistry::GetAllegianceForTeamId(FGenericTeamId TeamId) const {
    return NAME_None;
}

FName UIRRAllegianceRegistry::GetAllegianceForMissionFaction(FGameplayTag MissionFaction) const {
    return NAME_None;
}

FString UIRRAllegianceRegistry::GetAllegianceFolder(FName AllegianceId, bool bLocal) {
    return TEXT("");
}

bool UIRRAllegianceRegistry::GetAllegianceDefinition(FName AllegianceId, FIRRAllegianceDefinition& OutDefinition) const {
    return false;
}

bool UIRRAllegianceRegistry::GetAllegianceAppearance(FName AllegianceId, FIRRAllegianceAppearance& OutAppearance) const {
    return false;
}

TArray<FName> UIRRAllegianceRegistry::GetAllAllegianceIds() const {
    return TArray<FName>();
}

bool UIRRAllegianceRegistry::ExportAllegianceToFile(FName AllegianceId, bool bLocal) const {
    return false;
}


