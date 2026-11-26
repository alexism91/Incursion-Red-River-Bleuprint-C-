#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Rotator3dNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRotator3dNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FRotator3dNetSerializerConfig();
};

