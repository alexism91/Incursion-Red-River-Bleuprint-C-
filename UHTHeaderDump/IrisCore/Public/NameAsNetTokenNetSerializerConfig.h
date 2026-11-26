#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "NameAsNetTokenNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FNameAsNetTokenNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FNameAsNetTokenNetSerializerConfig();
};

