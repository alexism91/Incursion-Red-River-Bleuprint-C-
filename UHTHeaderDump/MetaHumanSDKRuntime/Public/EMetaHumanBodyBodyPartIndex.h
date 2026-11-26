#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanBodyBodyPartIndex.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanBodyBodyPartIndex : uint8 {
    Body,
    Face,
    Torso,
    Legs,
    Feet,
    Count,
};

