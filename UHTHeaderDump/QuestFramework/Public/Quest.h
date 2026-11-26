#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DefaultQuestVariable.h"
#include "QuestVariableBounds.h"
#include "Quest.generated.h"

class UQuestCustomData;
class UQuestNode;
class UQuestNode_Root;
class UQuestNode_Stage;
class UQuestService;

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuest : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestCustomData* CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultQuestVariable> DefaultVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestVariableBounds> VariableBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestService*> Services;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid QuestGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestNode*> Nodes;
    
public:
    UQuest();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestNode_Root* GetRootNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestCustomData* GetCustomData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStageNodesNames(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestNode_Stage* FindStageNodeByName(const FName& Name) const;
    
};

