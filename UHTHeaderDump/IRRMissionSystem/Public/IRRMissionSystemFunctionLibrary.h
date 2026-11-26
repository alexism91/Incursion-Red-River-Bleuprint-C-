#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EIRRObjectiveWorldState.h"
#include "IRRDayTime.h"
#include "IRRLoyaltyByFaction.h"
#include "IRRMissionEventPayload.h"
#include "IRRMissionMarkerPresentation.h"
#include "IRRMissionVariable.h"
#include "IRRMissionWorldBinding.h"
#include "IRRObjectiveMarkerSetup.h"
#include "IRRRaidData.h"
#include "IRRRaidData_Detail.h"
#include "IRRMissionSystemFunctionLibrary.generated.h"

class AActor;
class AIRRLevelManager;
class AIRRLevelTrigger;
class AIRRMissionSpawnPosition;
class APawn;
class APlayerController;
class UIRRExtractionManager;
class UIRRHideoutUnitComponent;
class UIRRHideoutUnitManager;
class UIRRInboxComponent;
class UIRRJobBoardComponent;
class UIRRMarkerComponent;
class UIRRMinimapComponent;
class UIRRMinimapManager;
class UIRRMissionComponent;
class UIRRMissionData;
class UIRRMissionManager;
class UIRRMissionObjective;
class UIRRMissionSequence;
class UIRRMissionSystemSettings;
class UIRRObjectiveComponent;
class UIRRTargetData;
class UIRRWorldManager;
class UObject;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionSystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRMissionSystemFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateRaidDataDetail(const UObject* WorldContextObject, FIRRRaidData_Detail NewRaidData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateRaidData(const UObject* WorldContextObject, FIRRRaidData NewRaidData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryFailMission(UIRRMissionData* MissionData);
    
    UFUNCTION(BlueprintCallable)
    static void StampMissionWorldBinding(AActor* SpawnedActor, const FIRRMissionWorldBinding& Binding, const AIRRMissionSpawnPosition* SpawnPosition);
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldShowMissionMarker(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent);
    
    UFUNCTION(BlueprintCallable)
    static EIRRObjectiveWorldState ResolveObjectiveWorldState(UIRRMissionComponent* PlayerMissionComp, const FIRRMissionWorldBinding& Binding);
    
    UFUNCTION(BlueprintCallable)
    static FIRRMissionMarkerPresentation ResolveMissionMarkerPresentation(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent);
    
    UFUNCTION(BlueprintCallable)
    static UIRRMissionObjective* ResolveMissionMarkerObjective(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent);
    
    UFUNCTION(BlueprintCallable)
    static UIRRMissionData* ResolveMissionMarkerMission(const APlayerController* PlayerController, UIRRMarkerComponent* MarkerComponent);
    
    UFUNCTION(BlueprintCallable)
    static EIRRObjectiveWorldState ResolveBestObjectiveWorldState(UIRRMissionComponent* PlayerMissionComp, UIRRObjectiveComponent* ObjectiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFromDayTime(UPARAM(Ref) FIRRDayTime& DayTime, FIRRDayTime ToRemoveDayTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PingClosestSequenceTarget(const UObject* WorldContextObject, UIRRMissionSequence* Sequence, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PingClosestObjectiveTarget(const UObject* WorldContextObject, UIRRMissionObjective* Objective, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool MarkMissionWorldSpawnPositionCompleteForActor(AActor* InteractingActor, UIRRObjectiveComponent* ObjectiveComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool MarkMissionWorldSpawnPositionComplete(UIRRMissionComponent* PlayerMissionComp, const FIRRMissionWorldBinding& Binding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIRRMissionWorldBinding MakeMissionWorldBindingForSpawnPosition(const FIRRMissionWorldBinding& Binding, const AIRRMissionSpawnPosition* SpawnPosition);
    
    UFUNCTION(BlueprintCallable)
    static bool IsProgressEqualToTarget(FIRRMissionVariable Progress, FIRRMissionVariable Target);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDayTimeZero(FIRRDayTime DayTime, FIRRDayTime ToleranceTime);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeDefaultObjectiveMarkerSetup(FIRRObjectiveMarkerSetup& Setup);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetZoneTagsByPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AIRRLevelTrigger*> GetZonesByPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetTotalXPBetween(const UObject* WorldContextObject, int32 FromLevel, float FromXP, int32 ToLevel, float ToXP, float& OutTotalXP);
    
    UFUNCTION(BlueprintCallable)
    static FIRRDayTime GetRandomDayTimeInRange(FIRRDayTime DayTimeMin, FIRRDayTime DayTimeMax);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FIRRRaidData_Detail GetRaidDataDetailByTag(const UObject* WorldContextObject, FGameplayTag Identifier, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FIRRRaidData GetRaidData(const UObject* WorldContextObject, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static float GetLoyaltyLevelByFaction(TArray<FIRRLoyaltyByFaction> LoyaltyData, const FGameplayTag Faction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLocalPlayerMaxXPByLevel(const UObject* WorldContextObject, int32 CurrentLevel, float& MaxXP);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLocalPlayerLevel(const UObject* WorldContextObject, int32& Level, float& CurrentXP, float& MaxXP);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsPawnInZone(APawn* Pawn, FGameplayTag ZoneTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRWorldManager* GetIRRWorldManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UIRRMissionSystemSettings* GetIRRMissionSystemSettings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRMissionManager* GetIRRMissionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRMissionComponent* GetIRRMissionComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRMinimapManager* GetIRRMinimapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRMinimapComponent* GetIRRMinimapComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UIRRMarkerComponent* GetIRRMarkerComponent(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AIRRLevelManager* GetIRRLevelManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRJobBoardComponent* GetIRRJobBoardComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRInboxComponent* GetIRRInboxComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRHideoutUnitManager* GetIRRHideoutUnitManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UIRRHideoutUnitComponent* GetIRRHideoutUnitComponent(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRExtractionManager* GetIRRExtractionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHideoutUnitDisplayName(FGameplayTag HideoutUnitTag);
    
    UFUNCTION(BlueprintCallable)
    static FName GetFactionFullNameByTag(FGameplayTag FactionTag);
    
    UFUNCTION(BlueprintCallable)
    static FName GetFactionAbbreviationByTag(FGameplayTag FactionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDefaultObjectiveMarkerStateVisibility(EIRRObjectiveWorldState WorldState);
    
    UFUNCTION(BlueprintCallable)
    static UIRRMissionSequence* FindSequenceForObjective(UIRRMissionData* MissionData, const FGuid& ObjectiveId);
    
    UFUNCTION(BlueprintCallable)
    static UIRRMissionObjective* FindObjectiveByBinding(UIRRMissionData* MissionData, const FIRRMissionWorldBinding& Binding);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRMarkerComponent* FindClosestSequenceTargetMarker(const UObject* WorldContextObject, UIRRMissionSequence* Sequence, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRMarkerComponent* FindClosestObjectiveTargetMarker(const UObject* WorldContextObject, UIRRMissionObjective* Objective, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static FString DayTimeToString(FIRRDayTime DayTime, bool b24Hour, bool bIncludeHours, bool bIncludeMinutes, bool bIncludeSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanPingClosestSequenceTarget(const UObject* WorldContextObject, UIRRMissionSequence* Sequence, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanPingClosestObjectiveTarget(const UObject* WorldContextObject, UIRRMissionObjective* Objective, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool CanInteractWithMissionWorldActor(AActor* InteractingActor, UIRRObjectiveComponent* ObjectiveComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastWorldEvent(const UObject* WorldContextObject, FGameplayTag MessageTag, UIRRMissionData* MissionData, FIRRMissionEventPayload Payload);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastMissionEvent(const UObject* WorldContextObject, FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Receiver);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMissionPayload(UPARAM(Ref) FIRRMissionVariable& MissionVariable, FIRRMissionEventPayload Payload);
    
    UFUNCTION(BlueprintCallable)
    static void AddToDayTime(UPARAM(Ref) FIRRDayTime& DayTime, FIRRDayTime ToAddDayTime, bool bClampHours);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddLocalPlayerXP(const UObject* WorldContextObject, float XPAmount, bool bSaveAfter);
    
};

