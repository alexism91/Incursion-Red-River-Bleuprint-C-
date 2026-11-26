#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItem -FallbackName=DefaultItem
#include "EIRRMissionState.h"
#include "EIRRSequenceState.h"
#include "IRRMissionEventInterface.h"
#include "MissionStateUpdatedDelegate.h"
#include "IRRMissionData.generated.h"

class AActor;
class UIRRMissionSequence;
class UIRRMissionSetup;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionData : public UIRRReplicatedObject, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRMissionSetup> MissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FDefaultItem> MissionRewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionState, meta=(AllowPrivateAccess=true))
    EIRRMissionState MissionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionSequence*> Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RaidCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ActiveSequenceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCompletedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OperationActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMissionStateUpdated OnMissionStateUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDispatchedSetupEvents;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EIRRMissionState DispatchedSetupEventsState;
    
public:
    UIRRMissionData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SuspendMission();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMissionState(EIRRMissionState NewState);
    
    UFUNCTION(BlueprintCallable)
    void ResetMission();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceStateChanged(EIRRSequenceState NewState, UIRRMissionSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionState();
    
    UFUNCTION(BlueprintCallable)
    void InitMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOperationActor() const;
    
    UFUNCTION(BlueprintCallable)
    EIRRMissionState GetMissionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionSetup* GetMissionSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMissionOwner();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetMissionMapTags();
    

    // Fix for true pure virtual functions not being implemented
};

