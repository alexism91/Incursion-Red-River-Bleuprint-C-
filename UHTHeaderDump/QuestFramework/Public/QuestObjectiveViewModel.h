#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelViewViewModel -ObjectName=MVVMViewModelBase -FallbackName=MVVMViewModelBase
#include "EQuestResult.h"
#include "QuestObjectiveViewModel.generated.h"

class UQuestContext;
class UQuestObjective;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestObjectiveViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestResult ObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOptional;
    
    UQuestObjectiveViewModel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomUpdateBP(UQuestContext* Context, UQuestObjective* Objective);
    
};

