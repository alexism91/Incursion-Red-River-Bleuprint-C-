#pragma once
#include "CoreMinimal.h"
#include "EQuestObjectiveSignificancy.h"
#include "QuestObjectBase.h"
#include "QuestText.h"
#include "QuestObjective.generated.h"

class UQuestContext;
class UQuestObjectiveObserver;

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestObjective : public UQuestObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LogicalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestText ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestText LongDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestObjectiveSignificancy Significancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestObjectiveObserver* Observer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomObserver;
    
    UQuestObjective();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive(const UQuestContext* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTextArguments() const;
    
};

