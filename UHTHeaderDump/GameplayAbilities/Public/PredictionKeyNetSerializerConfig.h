#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "PredictionKeyNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPredictionKeyNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYABILITIES_API FPredictionKeyNetSerializerConfig();
};

