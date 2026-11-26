#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelViewViewModel -ObjectName=MVVMViewModelBase -FallbackName=MVVMViewModelBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "EQuestResult.h"
#include "QuestContextViewModel.generated.h"

class UQuestContext;
class UQuestObjectiveViewModel;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestContextViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JournalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestResult QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTracked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestObjectiveViewModel*> ObjectiveViewModels;
    
public:
    UQuestContextViewModel();

    UFUNCTION(BlueprintCallable)
    void TrackQuest(bool bTrack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetTrackedVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestObjectiveViewModel*> GetActiveObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomUpdateBP(UQuestContext* Context);
    
};

