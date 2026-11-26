#pragma once
#include "CoreMinimal.h"
#include "EGameplayModEvaluationChannel.h"
#include "GameplayModEvaluationChannelSettings.generated.h"

USTRUCT(BlueprintType)
struct FGameplayModEvaluationChannelSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayModEvaluationChannel Channel;
    
public:
    GAMEPLAYABILITIES_API FGameplayModEvaluationChannelSettings();
};

