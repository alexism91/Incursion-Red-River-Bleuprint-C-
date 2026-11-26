#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "QuestContextSaveStateData.h"
#include "QuestContextSaveState.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestContextSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid QuestGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestContextSaveStateData> ContextStates;
    
    FQuestContextSaveState();
};

