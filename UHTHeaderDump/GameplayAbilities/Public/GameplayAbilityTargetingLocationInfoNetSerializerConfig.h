#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "GameplayAbilityTargetingLocationInfoNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FGameplayAbilityTargetingLocationInfoNetSerializerConfig();
};

