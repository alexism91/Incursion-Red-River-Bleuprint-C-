#pragma once
#include "CoreMinimal.h"
#include "QuestMemoryBlock.h"
#include "QuestMemoryQuery.h"
#include "QuestObjectBase.h"
#include "QuestMemory.generated.h"

UCLASS(Blueprintable)
class QUESTFRAMEWORK_API UQuestMemory : public UQuestObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestMemoryBlock MemoryBlock;
    
public:
    UQuestMemory();

    UFUNCTION(BlueprintCallable)
    void SetInteger(FName Variable, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(FName Variable, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBool(FName Variable, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RunQuery(const FQuestMemoryQuery& Query) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInteger(FName Variable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat(FName Variable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBool(FName Variable) const;
    
};

