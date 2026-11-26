#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilitySpecHandleAndPredictionKey.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecHandleAndPredictionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PredictionKeyAtCreation;
    
    GAMEPLAYABILITIES_API FGameplayAbilitySpecHandleAndPredictionKey();
};

