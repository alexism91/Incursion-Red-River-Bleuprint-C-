#include "SteamSALBlueprintLibrary.h"

USteamSALBlueprintLibrary::USteamSALBlueprintLibrary() {
}

void USteamSALBlueprintLibrary::StringToBytes_UTF8(const FString& String, TArray<uint8>& OutBytes) {
}

void USteamSALBlueprintLibrary::ShowAchievementsOverlay(bool& bSuccess) {
}

void USteamSALBlueprintLibrary::SetStoredStats(const TArray<FSAL_StatWrite>& StatsToSet, bool& bAllSucceeded) {
}

void USteamSALBlueprintLibrary::SetStoredStat(const FString& StatAPIName, ESALStatReadType StatType, int32 IntegerValue, float FloatValue, float CountThisSession, float SessionLengthSeconds, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::SetAchievement(const FString& AchievementAPIName, bool& bSuccess) {
}

bool USteamSALBlueprintLibrary::SaveBytesToFile(const FString& AbsoluteFilePath, const TArray<uint8>& Bytes) {
    return false;
}

bool USteamSALBlueprintLibrary::LoadFileToBytes(const FString& AbsoluteFilePath, TArray<uint8>& OutBytes) {
    return false;
}

void USteamSALBlueprintLibrary::ListAllAchievementAPINames(TArray<FString>& AchievementAPINames, bool& bSuccess) {
}

bool USteamSALBlueprintLibrary::IsSteamAvailable(const UObject* WorldContextObject) {
    return false;
}

void USteamSALBlueprintLibrary::IndicateAchievementProgress(FName AchievementAPIName, int32 CurrentProgress, int32 MaxProgress, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::GetStoredStats(const TArray<FSAL_StatQuery>& StatsToGet, TArray<FSAL_StoredStat>& StatsOut, bool& bAllSucceeded) {
}

void USteamSALBlueprintLibrary::GetStoredStat(const FString& StatAPIName, ESALStatReadType StatType, int32& IntegerValue, float& FloatValue, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::GetSteamServerRealTime(int64& UnixTimeSeconds, FDateTime& UtcDateTime) {
}

void USteamSALBlueprintLibrary::GetSteamID64FromController(APlayerController* PlayerController, FString& SteamID) {
}

void USteamSALBlueprintLibrary::GetPersonaNameFromSteamID(const FString& SteamID64, FString& PersonaName) {
}

void USteamSALBlueprintLibrary::GetNumberOfAchievements(int32& Count, bool& bSuccess) {
}

ESALLeaderboardSortMethod USteamSALBlueprintLibrary::GetLeaderboardSortMethod(const FSAL_LeaderboardHandle& LeaderboardHandle) {
    return ESALLeaderboardSortMethod::Ascending;
}

FString USteamSALBlueprintLibrary::GetLeaderboardName(const FSAL_LeaderboardHandle& LeaderboardHandle) {
    return TEXT("");
}

int32 USteamSALBlueprintLibrary::GetLeaderboardEntryCount(const FSAL_LeaderboardHandle& LeaderboardHandle) {
    return 0;
}

ESALLeaderboardDisplayType USteamSALBlueprintLibrary::GetLeaderboardDisplayType(const FSAL_LeaderboardHandle& LeaderboardHandle) {
    return ESALLeaderboardDisplayType::Numeric;
}

void USteamSALBlueprintLibrary::GetGlobalStatHistory(const FString& StatAPIName, ESALStatReadType StatType, int32 NumSamplesRequested, TArray<FString>& HistoryValues, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::GetGlobalStat(const FString& StatAPIName, ESALStatReadType StatType, FString& ValueAsString, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::GetGlobalAchievementPercent(const FString& AchievementAPIName, float& Percent, bool& bSuccess) {
}

bool USteamSALBlueprintLibrary::GetDownloadedLeaderboardEntry(const FSAL_LeaderboardEntriesData& EntriesData, int32 Index, FString& SteamID, int32& GlobalRank, int32& Score, FString& PlayerName, TArray<int32>& Details, bool& bHasUGC, FSAL_UGCHandle& UGCHandle) {
    return false;
}

void USteamSALBlueprintLibrary::GetAchievementStatus(const FString& AchievementAPIName, bool& bUnlocked, int32& UnlockUnixTime, bool& bSuccess) {
}

UTexture2D* USteamSALBlueprintLibrary::GetAchievementIcon(const FString& AchievementAPIName) {
    return NULL;
}

void USteamSALBlueprintLibrary::GetAchievementDisplayInfo(const FString& AchievementAPIName, FString& DisplayName, FString& Description, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::GetAchievementAPIName(int32 AchievementIndex, FString& APIName, bool& bSuccess) {
}

FString USteamSALBlueprintLibrary::FormatLeaderboardScore(int32 Score, ESALLeaderboardDisplayType DisplayType) {
    return TEXT("");
}

void USteamSALBlueprintLibrary::ClearUserStats(bool bAlsoResetAchievements, bool& bSuccess) {
}

void USteamSALBlueprintLibrary::ClearAchievement(const FString& AchievementAPIName, bool& bSuccess) {
}

FString USteamSALBlueprintLibrary::BytesToString_UTF8(const TArray<uint8>& Bytes) {
    return TEXT("");
}

void USteamSALBlueprintLibrary::AddToStoredStat(const FString& StatAPIName, ESALStatReadType StatType, float Delta, float& NewValue, bool& bSuccess) {
}


