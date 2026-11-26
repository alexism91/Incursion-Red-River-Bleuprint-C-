#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "QuestContextTrackDelegateDelegate.h"
#include "QuestTrackerComponent.generated.h"

class UQuestComponent;
class UQuestContext;
class UQuestListViewModel;
class UQuestTrackerViewModel;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class QUESTFRAMEWORK_API UQuestTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddPlayerAsSourceOnInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackOnlySingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTrackNewQuests;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextTrackDelegate OnBeginTrackQuest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestContextTrackDelegate OnStopTrackQuest;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestTrackerViewModel* ViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestListViewModel* ListViewModel;
    
public:
    UQuestTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void TrackQuest(UQuestContext* QuestContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopTrackQuest(UQuestContext* QuestContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveSourceQuestComponent(UQuestComponent* QuestComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RefreshViewModel(bool bTrackerViewModel, bool bQuestListViewModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestStarted(UQuestContext* Context);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestEnded(UQuestContext* Context);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestContextSuspended(UQuestComponent* QuestComponent, UQuestContext* Context);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestContextCreated(UQuestComponent* QuestComponent, UQuestContext* Context);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UQuestTrackerViewModel* GetViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    void GetTrackedQuestContexts(TArray<UQuestContext*>& OutContexts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UQuestListViewModel* GetListViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    void GetAllQuestContexts(TArray<UQuestContext*>& OutContexts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddSourceQuestComponent(UQuestComponent* QuestComponent);
    
};

