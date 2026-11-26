#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelViewViewModel -ObjectName=MVVMViewModelBase -FallbackName=MVVMViewModelBase
#include "QuestTrackerViewModel.generated.h"

class UQuestContextViewModel;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestTrackerViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestContextViewModel*> ContextViewModels;
    
public:
    UQuestTrackerViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestContextViewModel*> GetTrackedQuestContexts() const;
    
};

