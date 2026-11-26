#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "MinimalGameplayCueReplicationProxyNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FMinimalGameplayCueReplicationProxyNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FMinimalGameplayCueReplicationProxyNetSerializerConfig();
};

