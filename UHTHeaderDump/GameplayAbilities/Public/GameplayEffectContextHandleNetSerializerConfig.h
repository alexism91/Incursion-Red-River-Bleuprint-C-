#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=PolymorphicStructNetSerializerConfig -FallbackName=PolymorphicStructNetSerializerConfig
#include "GameplayEffectContextHandleNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FGameplayEffectContextHandleNetSerializerConfig();
};

