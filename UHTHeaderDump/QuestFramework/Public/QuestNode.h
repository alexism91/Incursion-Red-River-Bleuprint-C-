#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QuestText.h"
#include "QuestNode.generated.h"

class UQuestContext;
class UQuestCustomData;
class UQuestEvent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestEvent*> EntryEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestCustomData* CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestText NodeText;
    
public:
    UQuestNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNodeText(UQuestContext* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNodeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetNodeGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestCustomData* GetCustomData() const;
    
};

