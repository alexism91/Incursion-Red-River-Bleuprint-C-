#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "QuestComponentContextDelegateDelegate.h"
#include "QuestSaveStateData.h"
#include "QuestComponent.generated.h"

class UQuest;
class UQuestContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class QUESTFRAMEWORK_API UQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentContextDelegate OnQuestContextCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestComponentContextDelegate OnQuestContextSuspend;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveQuestContexts, meta=(AllowPrivateAccess=true))
    TArray<UQuestContext*> ActiveQuestContexts;
    
public:
    UQuestComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SuspendQuest(UQuestContext* QuestContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SuspendAllQuests();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SaveQuestStates(FQuestSaveStateData& SaveData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveQuestContexts(const TArray<UQuestContext*>& OldActiveContexts);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool LoadQuestStates(const FQuestSaveStateData& SaveData, bool bForceRestore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveQuestContext(UQuest* Quest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllActiveQuestContexts(TArray<UQuestContext*>& OutContexts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestContext* FindFirstActiveQuestContext(UQuest* Quest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindAllActiveQuestContexts(UQuest* Quest, TArray<UQuestContext*>& OutContexts) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UQuestContext* CreateQuestContext(UQuest* Quest, bool bStart);
    
};

