#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonLoadingScreen -ObjectName=LoadingProcessInterface -FallbackName=LoadingProcessInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRCachedHideoutUpgradeRequirements -FallbackName=IRRCachedHideoutUpgradeRequirements
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRRRaidData -FallbackName=IRRRaidData
#include "ContainerItem.h"
#include "OnLoadingScreenStartDelegate.h"
#include "OnLoadingScreenStopDelegate.h"
#include "GeneralGameInstance.generated.h"

class UIRRSettingCollection;
class USettingsSaveGame;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class TEST_C_API UGeneralGameInstance : public UGameInstance, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReconnectingParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttemptReconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendedPartyEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRaidData RaidData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContainerItem> CollectedQuestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRCachedHideoutUpgradeRequirements> CachedHideoutRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRSettingCollection*> SettingCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBulletDebugTracesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteAmmunition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTPSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerWeaponSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLootEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreamingVolumesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingScreenFadeTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenStart OnLoadingScreenStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenStop OnLoadingScreenStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadingScreenReasoning;
    
    UGeneralGameInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateRaidData(const FIRRRaidData& NewRaidData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void UpdateOverallGraphics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void UpdateEnhancedGraphics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnregisterMainAudioDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void ToggleWatermark(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTPSoundsOnly(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTechnicalInvulnerable(bool bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void TogglePerspective(bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLocalPlayerWeaponSounds(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleKeepInventory(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInvulnerable(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInvisible(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInfiniteAmmunition(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleExtendedParty(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugOperations(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCinematicCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCheatMovementSpeed(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBulletDebugTraces(bool bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void ToggleAllAIHidden(bool Hidden);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIOptimization(bool bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestConnectionLostOnExtract_3();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestConnectionLostOnExtract_2();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestConnectionLostOnExtract_1();
    
    UFUNCTION(BlueprintCallable)
    void StopLoadingScreen_Delayed();
    
    UFUNCTION(BlueprintCallable)
    void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartNewMission(const FString& MissionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnItem(FName Name, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void ShowAllAI();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetWeatherType(int32 WeatherType, float TransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupLoadingScreen(const FString& LevelName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetTimeOfDay(int32 Hour24_Format);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSuccessRate(float NewSuccessRate);
    
    UFUNCTION(BlueprintCallable)
    void SetRestock(bool bInRestock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOverallFactionReputation(float NewReputation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLumenScalability(bool bLow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLevel(int32 Level, float XP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHideoutUnitLevel(FName UnitName, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFactionReputation(float NewReputation, const FString& FactionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void SetDurability(float NewDurabilityPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void SetAllAIMinMaxOptimizationLevel(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAIOptimizationLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetWorld();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetVendor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTrackedMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSoundEngine();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSafehouse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetResources();
    
    UFUNCTION(BlueprintCallable)
    void ResetRaidData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetMissionSystem(bool bResetProgressData);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegisterMainAudioDevice();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegenerateMissions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPatchCheckComplete(bool bAppliedWipes, bool bHasNotesToShow);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLevelPreLoad(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoad(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void LoadSaveGame(UPARAM(Ref) FString& SaveGameName, bool bResetWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void KillAllAI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_StopLoadingScreen_Delayed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetupLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLevelPreLoad(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLevelLoaded(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLevelLoad(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ItemList(FName Category, int32 Page);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ItemCategories();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugOperationsEnabled() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveItem(FName Name, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRestock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRRaidData GetRaidData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceExtraction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCrashGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FailTrackedMissions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void EnableStreamingVolumes(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void EnableLoot(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableGCLogging();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void EnableAI(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableGCLogging();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void DealDamageToPlayer(float Amount, bool bWound);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteTrackedMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CommandMenu();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettingCollections();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyGraphicSettings(USettingsSaveGame* SettingsSave);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddResource(FName Name, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddItem(FName Name, int32 Amount);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddConsole();
    

    // Fix for true pure virtual functions not being implemented
};

