#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterEyelashesType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterEyelashesType : uint8 {
    None,
    Sparse,
    ShortFine,
    Thin,
    SlightCurl,
    LongCurl,
    ThickCurl,
    Count,
};

