#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterLipsMakeupType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterLipsMakeupType : uint8 {
    None,
    Natural,
    Hollywood,
    Cupid,
    Count,
};

