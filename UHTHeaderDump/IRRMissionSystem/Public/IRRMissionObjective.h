#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "IRRMissionEventInterface.h"
#include "IRRMissionVariable.h"
#include "IRRObjectiveMarkerSetup.h"
#include "OnProgressUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IRRMissionObjective.generated.h"

class UIRRMissionData;
class UIRRMissionEvent;
class UIRRMissionSequence;
class UIRRMissionService;
class UIRRObjectiveActionWidget;
class UIRRSpawnData;
class UIRRTargetData;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionObjective : public UIRRReplicatedObject, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid ObjectiveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIRRObjectiveActionWidget> ActionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MapTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRObjectiveMarkerSetup MarkerSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRSpawnData*> SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRMissionVariable TargetVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UIRRTargetData* TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionService*> Services;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> CompletionEvents;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoCompletionBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProgressVariable, meta=(AllowPrivateAccess=true))
    FIRRMissionVariable ProgressVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CompletedSpawnPositionUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UIRRMissionSequence* OwningMissionSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnProgressUpdated OnProgressUpdated;
    
    UIRRMissionObjective();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString TargetVariableToString();
    
    UFUNCTION(BlueprintCallable)
    void SuspendObjective();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProgress(FIRRMissionVariable NewProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProgressVariable();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool MarkSpawnPositionComplete(FGuid InSpawnPositionUID);
    
    UFUNCTION(BlueprintCallable)
    void InitObjective(UIRRMissionSequence* NewOwningMissionSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedSpawnPosition(FGuid InSpawnPositionUID) const;
    
    UFUNCTION(BlueprintCallable)
    FIRRMissionVariable GetProgress();
    
    UFUNCTION(BlueprintCallable)
    UIRRMissionData* GetOwningMissionData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetObjectiveDescription();
    

    // Fix for true pure virtual functions not being implemented
};

