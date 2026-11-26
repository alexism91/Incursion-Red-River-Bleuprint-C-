#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "GameplayEffectContextNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FGameplayEffectContextNetSerializerConfig();
};

