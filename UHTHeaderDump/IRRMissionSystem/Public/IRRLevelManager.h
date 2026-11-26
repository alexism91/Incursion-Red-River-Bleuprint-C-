#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkOutdoorsRoomParameters -FallbackName=AkOutdoorsRoomParameters
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=EIRRAcousticEnvironment -FallbackName=EIRRAcousticEnvironment
#include "IRRBriefingVariants.h"
#include "IRRBriefingWaitSettings.h"
#include "IRRMissionEventInterface.h"
#include "IRROperationSetupConfig.h"
#include "IRROperationSpawnData.h"
#include "OnOperationSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IRRLevelManager.generated.h"

class AIRRLevelTrigger;
class APawn;
class UAkAudioEvent;
class UIRRAgentSetup;
class ULootContextModifier;
class USimpleGameplayAbility_PlayMissionBriefing;

UCLASS(Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRRLevelManager : public AActor, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRLevelTrigger*> LevelZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULootContextModifier*> StartupGlobalLootModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRROperationSpawnData> OperationSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OperationsConfigId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveOperationActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOperationSpawned OnOperationSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAcousticEnvironment ExteriorEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkOutdoorsRoomParameters OutdoorsRoomParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OutdoorsAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBriefingVariants RaidBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* RaidBriefingAgent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaidBriefingDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> RaidBriefingAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRaidBriefingWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBriefingWaitSettings RaidBriefingWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideLevelZonesInEditor;
    
    AIRRLevelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnRegisterZone(AIRRLevelTrigger* LevelZone);
    
    UFUNCTION(BlueprintCallable)
    void StartRaidBriefing();
    
    UFUNCTION(BlueprintCallable)
    void ShowLevelZonesInEditor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupOperations();
    
    UFUNCTION(BlueprintCallable)
    void SetLevelZonesHiddenInEditor(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLootQueryTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalLootModifier(ULootContextModifier* Modifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterZone(AIRRLevelTrigger* LevelZone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnLeftZone(AIRRLevelTrigger* LevelZone, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnEnteredZone(AIRRLevelTrigger* LevelZone, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LoadOperationsConfig(FName ConfigId, FIRROperationSetupConfig& OutConfig) const;
    
    UFUNCTION(BlueprintCallable)
    void HideLevelZonesInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIRRLevelTrigger*> GetLevelZones();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULootContextModifier*> GetApplicableLootModifiersForActor(AActor* Actor, const FGameplayTagContainer& ContainerTags) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* ForceStartOperation(FName OperationId, const FString& StartPointName);
    
    UFUNCTION(BlueprintCallable)
    void ClearLootQueryTags();
    
    UFUNCTION(BlueprintCallable)
    void ClearGlobalLootModifiers();
    
    UFUNCTION(BlueprintCallable)
    void CancelRaidBriefing();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAcousticEnvironment();
    
    UFUNCTION(BlueprintCallable)
    void AddLootQueryTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalLootModifier(ULootContextModifier* Modifier);
    

    // Fix for true pure virtual functions not being implemented
};

