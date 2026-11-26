#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionPropertyOverridePolicy.h"
#include "LevelInstancePropertyOverridePolicy.generated.h"

UCLASS(Abstract, Blueprintable)
class ULevelInstancePropertyOverridePolicy : public UWorldPartitionPropertyOverridePolicy {
    GENERATED_BODY()
public:
    ULevelInstancePropertyOverridePolicy();

};

