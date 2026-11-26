#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "MinimalReplicationTagCountMapNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FMinimalReplicationTagCountMapNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FMinimalReplicationTagCountMapNetSerializerConfig();
};

