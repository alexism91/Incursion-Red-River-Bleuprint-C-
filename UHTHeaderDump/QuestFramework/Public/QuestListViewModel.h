#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelViewViewModel -ObjectName=MVVMViewModelBase -FallbackName=MVVMViewModelBase
#include "QuestListViewModel.generated.h"

class UQuestContextViewModel;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestListViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestContextViewModel*> ContextViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestContextViewModel* DetailContextViewModel;
    
public:
    UQuestListViewModel();

    UFUNCTION(BlueprintCallable)
    void SetDetailQuestContextViewModel(UQuestContextViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestContextViewModel*> GetQuestContexts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestContextViewModel*> GetInProgressQuestContexts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestContextViewModel*> GetFailedQuestContexts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestContextViewModel* GetDetailQuestContextViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestContextViewModel*> GetCompletedQuestContexts() const;
    
};

