#pragma once
#include "CoreMinimal.h"
#include "QuestService_BlueprintBase.h"
#include "QuestVariable.h"
#include "QuestService_SyncVariable.generated.h"

class UQuestContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_SyncVariable : public UQuestService_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVariable Variable;
    
public:
    UQuestService_SyncVariable();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetIntegerSyncValue(UQuestContext* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFloatSyncValue(UQuestContext* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetBoolSyncValue(UQuestContext* Context) const;
    
};

