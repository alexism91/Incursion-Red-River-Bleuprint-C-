#pragma once
#include "CoreMinimal.h"
#include "EReferencerTypeHandling.generated.h"

UENUM(BlueprintType)
enum class EReferencerTypeHandling : uint8 {
    Ignore,
    MatchReferencedType,
    ClearReferencerType,
    ShowPrompt,
};

