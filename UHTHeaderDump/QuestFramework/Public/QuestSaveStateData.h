#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "QuestContextSaveState.h"
#include "QuestSaveStateData.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestSaveStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestContextSaveState> Data;
    
    FQuestSaveStateData();
};

