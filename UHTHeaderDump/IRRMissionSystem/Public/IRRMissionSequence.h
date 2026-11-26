#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "EIRRSequenceState.h"
#include "IRRMissionEventInterface.h"
#include "IRRMissionVariable.h"
#include "OnSequenceStateUpdatedDelegate.h"
#include "IRRMissionSequence.generated.h"

class UIRRMissionData;
class UIRRMissionEvent;
class UIRRMissionObjective;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionSequence : public UIRRReplicatedObject, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid SequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRespectOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionObjective*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> EntryEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> ExitEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceState, meta=(AllowPrivateAccess=true))
    EIRRSequenceState SequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UIRRMissionData* OwningMissionData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnSequenceStateUpdated OnSequenceStateUpdated;
    
    UIRRMissionSequence();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SuspendSequence();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSequenceState(EIRRSequenceState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceState();
    
    UFUNCTION(BlueprintCallable)
    void OnProgressChanged(FIRRMissionVariable NewProgress);
    
    UFUNCTION(BlueprintCallable)
    void InitSequence(UIRRMissionData* NewOwningMissionData);
    
    UFUNCTION(BlueprintCallable)
    EIRRSequenceState GetSequenceState();
    
    UFUNCTION(BlueprintCallable)
    UIRRMissionData* GetOwningMissionData();
    

    // Fix for true pure virtual functions not being implemented
};

