#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESALLeaderboardDisplayType.h"
#include "ESALLeaderboardSortMethod.h"
#include "ESALStatReadType.h"
#include "SAL_LeaderboardEntriesData.h"
#include "SAL_LeaderboardHandle.h"
#include "SAL_StatQuery.h"
#include "SAL_StatWrite.h"
#include "SAL_StoredStat.h"
#include "SAL_UGCHandle.h"
#include "SteamSALBlueprintLibrary.generated.h"

class APlayerController;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class STEAMSAL_API USteamSALBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamSALBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void StringToBytes_UTF8(const FString& String, TArray<uint8>& OutBytes);
    
    UFUNCTION(BlueprintCallable)
    static void ShowAchievementsOverlay(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void SetStoredStats(const TArray<FSAL_StatWrite>& StatsToSet, bool& bAllSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void SetStoredStat(const FString& StatAPIName, ESALStatReadType StatType, int32 IntegerValue, float FloatValue, float CountThisSession, float SessionLengthSeconds, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievement(const FString& AchievementAPIName, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveBytesToFile(const FString& AbsoluteFilePath, const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFileToBytes(const FString& AbsoluteFilePath, TArray<uint8>& OutBytes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ListAllAchievementAPINames(TArray<FString>& AchievementAPINames, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSteamAvailable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void IndicateAchievementProgress(FName AchievementAPIName, int32 CurrentProgress, int32 MaxProgress, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStoredStats(const TArray<FSAL_StatQuery>& StatsToGet, TArray<FSAL_StoredStat>& StatsOut, bool& bAllSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStoredStat(const FString& StatAPIName, ESALStatReadType StatType, int32& IntegerValue, float& FloatValue, bool& bSuccess);
    
    UFUNCTION(BlueprintPure)
    static void GetSteamServerRealTime(int64& UnixTimeSeconds, FDateTime& UtcDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSteamID64FromController(APlayerController* PlayerController, FString& SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPersonaNameFromSteamID(const FString& SteamID64, FString& PersonaName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNumberOfAchievements(int32& Count, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESALLeaderboardSortMethod GetLeaderboardSortMethod(const FSAL_LeaderboardHandle& LeaderboardHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLeaderboardName(const FSAL_LeaderboardHandle& LeaderboardHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLeaderboardEntryCount(const FSAL_LeaderboardHandle& LeaderboardHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESALLeaderboardDisplayType GetLeaderboardDisplayType(const FSAL_LeaderboardHandle& LeaderboardHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGlobalStatHistory(const FString& StatAPIName, ESALStatReadType StatType, int32 NumSamplesRequested, TArray<FString>& HistoryValues, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGlobalStat(const FString& StatAPIName, ESALStatReadType StatType, FString& ValueAsString, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGlobalAchievementPercent(const FString& AchievementAPIName, float& Percent, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDownloadedLeaderboardEntry(const FSAL_LeaderboardEntriesData& EntriesData, int32 Index, FString& SteamID, int32& GlobalRank, int32& Score, FString& PlayerName, TArray<int32>& Details, bool& bHasUGC, FSAL_UGCHandle& UGCHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAchievementStatus(const FString& AchievementAPIName, bool& bUnlocked, int32& UnlockUnixTime, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetAchievementIcon(const FString& AchievementAPIName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAchievementDisplayInfo(const FString& AchievementAPIName, FString& DisplayName, FString& Description, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAchievementAPIName(int32 AchievementIndex, FString& APIName, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FormatLeaderboardScore(int32 Score, ESALLeaderboardDisplayType DisplayType);
    
    UFUNCTION(BlueprintCallable)
    static void ClearUserStats(bool bAlsoResetAchievements, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAchievement(const FString& AchievementAPIName, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BytesToString_UTF8(const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable)
    static void AddToStoredStat(const FString& StatAPIName, ESALStatReadType StatType, float Delta, float& NewValue, bool& bSuccess);
    
};

