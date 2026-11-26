#pragma once
#include "CoreMinimal.h"
#include "GameplayCueTranslatorNodeIndex.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueTranslatorNodeIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    GAMEPLAYABILITIES_API FGameplayCueTranslatorNodeIndex();
};

