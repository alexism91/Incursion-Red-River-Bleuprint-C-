#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionPropertyOverride.h"
#include "LevelInstancePropertyOverrideAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULevelInstancePropertyOverrideAsset : public UWorldPartitionPropertyOverride {
    GENERATED_BODY()
public:
    ULevelInstancePropertyOverrideAsset();

};

