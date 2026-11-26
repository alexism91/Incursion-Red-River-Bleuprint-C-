#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=ContainerItem -FallbackName=ContainerItem
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItem -FallbackName=DefaultItem
#include "EIRRMissionState.h"
#include "IRRAchievementProgress.h"
#include "IRRAssignmentSetup.h"
#include "IRRGraphSaveData.h"
#include "IRRInboxItem.h"
#include "IRRLoyaltyByFaction.h"
#include "IRRMissionEventInterface.h"
#include "IRRMissionEventPayload.h"
#include "IRRMissionInfo.h"
#include "IRRMissionSaveData.h"
#include "IRRProgressData.h"
#include "OnLevelUpdatedDelegate.h"
#include "OnMissionCompletedDelegate.h"
#include "OnMissionDataArrayUpdatedDelegate.h"
#include "OnMissionEventReceivedDelegate.h"
#include "OnMissionFailedDelegate.h"
#include "OnMissionGraphsUpdatedDelegate.h"
#include "OnMissionStartedDelegate.h"
#include "OnProgressDataUpdatedDelegate.h"
#include "OnTrackedMissionDataArrayUpdatedDelegate.h"
#include "IRRMissionComponent.generated.h"

class AActor;
class UCurveFloat;
class UIRRAgentSetup;
class UIRRDefaultInboxItemSetup;
class UIRRFactionSetup;
class UIRRGraphData;
class UIRRItemsPreset;
class UIRRMissionData;
class UIRRMissionGraph;
class UIRRMissionManager;
class UIRRMissionSetup;
class UIRRSteamAchievement;
class UIRRSteamAchievementTracker;
class UIRRTargetData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRMissionComponent : public UIRRObjectReplicationComponent, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UIRRFactionSetup*> FactionSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRDefaultInboxItemSetup*> DefaultInboxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoyaltyByFaction> DefaultFactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRMissionGraph* DefaultMissionGraphOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> DefaultHideoutUnitLevels_LEGACY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSuccessRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* XPScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> XPEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UIRRSteamAchievement*> AchievementEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LevelUpAchievementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AchievementStoreDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMissionSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UIRRMissionSetup*> DebugMissionSetupMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthorityMissionSaveGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientMissionSaveGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionManager* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRProgressData ProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> MissionDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrackedMissionDataArray, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> TrackedMissionDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRGraphData*> MissionGraphs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelUpdated OnLevelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProgressDataUpdated OnProgressDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionDataArrayUpdated OnMissionDataArrayUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrackedMissionDataArrayUpdated OnTrackedMissionDataArrayUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionGraphsUpdated OnMissionGraphsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStarted OnMissionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionCompleted OnMissionCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionFailed OnMissionFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionEventReceived OnMissionEventReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> OldTrackedMissionDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionData*> StaleTrackedMissionDataArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRMissionSaveData> UnresolvedMissionSaveData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FIRRMissionSaveData> PendingMissionStateUpdates;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRSteamAchievementTracker* AchievementTracker;
    
public:
    UIRRMissionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UntrackMission(FGuid MissionUID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TrackMission(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable)
    void SyncTrackedMissionProgress();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTrackedMissionDataArray(TArray<UIRRMissionData*> NewTrackedMissionDataArray);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressData(FIRRProgressData NewProgressData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMissionGraphs(TArray<UIRRGraphData*> NewMissionGraphs);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionDataArray(TArray<UIRRMissionData*> NewMissionDataArray);
    
    UFUNCTION(BlueprintCallable)
    void SetBriefingPlayed(FName BriefingKey, bool bPlayed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RetrackMission(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionData* ResolveMissionDataByUID(FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionData(bool bResetProgressionData);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSaveProgress();
    
    UFUNCTION(BlueprintCallable)
    bool RequestSaveMissionData();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestRemoveTrackedMissionByUID_Client(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRemoveTrackedMissionByUID(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestRemoveMissionByUID_Client(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRemoveMissionByUID(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadData(FIRRProgressData& LoadedProgressData, TArray<FIRRMissionSaveData>& LoadedMissionData, TArray<FIRRGraphSaveData>& LoadedMissionGraphs, bool& LoadedInit);
    
    UFUNCTION(BlueprintCallable)
    void ReportAchievementEvent(FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrackedMissionByUID(FGuid MissionUID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRewardContainerByUID(FGuid InMissionUID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMissionByUID(FGuid MissionUID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReceiveReward(FGuid InMissionUID);
    
    UFUNCTION(BlueprintCallable)
    static FIRRMissionInfo PickRandomMissionInfo(UIRRMissionSetup* MissionSetup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickNewAssignment(TArray<FIRRAssignmentSetup> Assignments, bool bOnlyUniqueMission);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackedMissionDataArray();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnMissionStateUpdated_Client(EIRRMissionState NewState, const FIRRMissionSaveData& SaveData);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionStateUpdated(EIRRMissionState NewState, UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ReceiveMessageFromMissionEvent(FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Receiver);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnMissionFailed(UIRRMissionData* FailedMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnMissionCompleted(UIRRMissionData* CompletedMissionData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsWaitingForEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTerminalMissionState(EIRRMissionState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActivePreviouslyArchivedMission(UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveMissionState(EIRRMissionState State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void InternalReplicateTrackedMissionData(const FIRRMissionSaveData& NewTrackedMissionData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void InternalRegisterMissionComponent();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDefaultItem> InternalBuildRewardItems(UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitTrackedMission(UIRRMissionData* NewMissionData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitSharedMission(UIRRMissionData* NewMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayedBriefing(FName BriefingKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedMissionSetup(UIRRMissionSetup* InMissionSetup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionData* GetTrackedMissionDataByUID(FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    TArray<UIRRMissionData*> GetTrackedMissionDataArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetTerminatedMissionDataArray() const;
    
    UFUNCTION(BlueprintCallable)
    FIRRProgressData GetProgressData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetNotStartedMissionDataArray() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UIRRGraphData*> GetMissionGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionData* GetMissionDataByUID(FGuid UID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetMissionDataArrayByState(EIRRMissionState State) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UIRRMissionData*> GetMissionDataArray();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMissionCount(bool bIncludeStoryMissions);
    
    UFUNCTION(BlueprintCallable)
    bool GetMaxXPByLevel(int32 CurrentLevel, float& MaxXP);
    
    UFUNCTION(BlueprintCallable)
    UIRRItemsPreset* GetLoadoutPreset(TArray<FIRRLoyaltyByFaction> LoyaltyData);
    
    UFUNCTION(BlueprintCallable)
    bool GetLevel(int32& Level, float& CurrentXP, float& MaxXP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetInProgressMissionDataArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRInboxItem GetInboxItemByUID(FGuid UID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetFailedMissionDataArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetCompletedMissionDataArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetArchivedMissionDataArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIRRMissionData*> GetActiveMissionDataArray() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UIRRMissionData* GenerateMissionDataFromSetup(UIRRMissionSetup* MissionSetup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UIRRMissionData*> FilterMissionDataArrayByMissionStates(TArray<UIRRMissionData*> InMissionDataArray, const TArray<EIRRMissionState>& FilterStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UIRRMissionData*> FilterMissionDataArrayByMissionState(TArray<UIRRMissionData*> InMissionDataArray, EIRRMissionState FilterState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UIRRMissionData*> FilterMissionDataArrayByFactionAndTypeAndMap(TArray<UIRRMissionData*> InMissionDataArray, FGameplayTag Faction, FGameplayTag MissionType, FGameplayTag Map);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CanTrackMission(UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CanRetrackMission(UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool CanReceiveReward(FGuid InMissionUID, FString& FailureMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAchievementStatsReady() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ApplyAchievementProgress_Client(const TArray<FIRRAchievementProgress>& Progress);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddXP(float XPAmount, bool bSaveAfter);
    
    UFUNCTION(BlueprintCallable)
    bool AddQuestItemsInboxMessage(const TArray<FContainerItem>& QuestItems, const FString& Title, TSoftObjectPtr<UIRRAgentSetup> Author, const FText& Text);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddNewMissionGraph(UIRRMissionGraph* NewMissionGraph, bool bStart);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddNewMission(UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintCallable)
    void AddFactionLoyalty(const TArray<FIRRLoyaltyByFaction>& LoyaltyProgress, bool bSaveAfter);
    

    // Fix for true pure virtual functions not being implemented
};

