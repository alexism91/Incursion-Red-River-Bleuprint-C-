#pragma once
#include "CoreMinimal.h"
#include "ELevelInstanceType.generated.h"

UENUM(BlueprintType)
enum class ELevelInstanceType : uint8 {
    None,
    LevelInstance,
    LevelInstanceEdit,
    LevelInstancePropertyOverride,
};

