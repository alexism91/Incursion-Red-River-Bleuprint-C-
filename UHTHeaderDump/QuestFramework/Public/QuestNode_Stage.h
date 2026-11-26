#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestStageObjectives.h"
#include "QuestText.h"
#include "QuestNode_Stage.generated.h"

class UQuestObjective;
class UQuestService;

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestNode_Stage : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LogicalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestText StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestText StageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStageObjectives Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestService*> Services;
    
public:
    UQuestNode_Stage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllObjectiveNames(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestObjective* FindObjectiveByName(const FName& Name) const;
    
};

