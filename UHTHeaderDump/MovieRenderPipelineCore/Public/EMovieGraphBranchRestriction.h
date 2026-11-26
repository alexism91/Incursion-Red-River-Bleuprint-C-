#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphBranchRestriction.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphBranchRestriction : uint8 {
    Any,
    Globals,
    RenderLayer,
};

