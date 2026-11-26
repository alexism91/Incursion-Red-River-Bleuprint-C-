#pragma once
#include "CoreMinimal.h"
#include "QuestContextMessageListener.generated.h"

class UObject;
class UQuestContext;

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestContextMessageListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestContext* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Listener;
    
    FQuestContextMessageListener();
};

