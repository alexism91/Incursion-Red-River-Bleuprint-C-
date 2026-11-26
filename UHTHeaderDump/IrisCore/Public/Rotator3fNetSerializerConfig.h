#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Rotator3fNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRotator3fNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FRotator3fNetSerializerConfig();
};

