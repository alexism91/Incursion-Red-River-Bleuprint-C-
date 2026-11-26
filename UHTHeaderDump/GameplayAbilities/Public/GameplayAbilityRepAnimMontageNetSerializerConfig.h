#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "GameplayAbilityRepAnimMontageNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FGameplayAbilityRepAnimMontageNetSerializerConfig();
};

