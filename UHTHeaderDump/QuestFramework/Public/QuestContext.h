#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EQuestNetworkAuthority.h"
#include "EQuestResult.h"
#include "QuestContextNodeDelegateDelegate.h"
#include "QuestContextNotifyDelegateDelegate.h"
#include "QuestContextObjectiveDelegateDelegate.h"
#include "QuestContextObjectiveResultDelegateDelegate.h"
#include "QuestContextStageDelegateDelegate.h"
#include "QuestMemoryBlockReplicator.h"
#include "QuestObjectBase.h"
#include "QuestObjectiveResultReplicator.h"
#include "QuestContext.generated.h"

class AActor;
class AController;
class UQuest;
class UQuestComponent;
class UQuestContextViewModel;
class UQuestMemory;
class UQuestNode;
class UQuestNode_Stage;
class UQuestObjective;
class UQuestObjectiveViewModel;
class UQuestService;

UCLASS(Blueprintable, Config=Game)
class QUESTFRAMEWORK_API UQuestContext : public UQuestObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextNotifyDelegate OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextNotifyDelegate OnQuestEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextNodeDelegate OnActiveNodeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextStageDelegate OnStageBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextStageDelegate OnStageEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextObjectiveDelegate OnObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextObjectiveDelegate OnObjectiveDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextObjectiveResultDelegate OnObjectiveResultChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ContextGuid;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_QuestState, meta=(AllowPrivateAccess=true))
    uint64 QuestStatePacked;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentNodeIndex, meta=(AllowPrivateAccess=true))
    uint64 CurrentNodeIndexPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_QuestAsset, meta=(AllowPrivateAccess=true))
    UQuest* QuestAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestMemory* ContextMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveObjectives, meta=(AllowPrivateAccess=true))
    TArray<UQuestObjective*> ActiveObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestService*> ActiveStageServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestService*> ActiveContextServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UQuestObjective*, EQuestResult> LastObjectiveResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestContextViewModel* ViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UQuestObjective*, UQuestObjectiveViewModel*> ObjectiveViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MemoryReplicator, meta=(AllowPrivateAccess=true))
    FQuestMemoryBlockReplicator MemoryReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectiveResultReplicator, meta=(AllowPrivateAccess=true))
    FQuestObjectiveResultReplicator ObjectiveResultReplicator;
    
public:
    UQuestContext();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryActivateObjective(UQuestObjective* Objective);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void RefreshViewModel(bool bUpdateQuestData, bool bUpdateObjectiveList, bool bRefreshObjectiveViewModels);
    
    UFUNCTION(BlueprintCallable)
    void RefreshObjectiveViewModel(UQuestObjective* Objective);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestAsset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveResultReplicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MemoryReplicator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentNodeIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveObjectives(TArray<UQuestObjective*>& OldObjectives);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool JumpToStageNode(const UQuestNode_Stage* StageNode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool JumpToStageByName(FName StageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveActive(UQuestObjective* Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestContextViewModel* GetViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestResult GetQuestState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestMemory* GetQuestMemory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuest* GetQuestAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestComponent* GetOwnerQuestComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetOwnerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwnerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestObjectiveViewModel* GetObjectiveViewModel(UQuestObjective* Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestResult GetObjectiveResult(UQuestObjective* Objective, bool bReEvaluate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentObjectives(TArray<UQuestObjective*>& Objectives) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestNetworkAuthority GetAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActiveObjectives(TArray<UQuestObjective*>& Objectives) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveNodeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestNode* GetActiveNode() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateObjective(UQuestObjective* Objective);
    
};

