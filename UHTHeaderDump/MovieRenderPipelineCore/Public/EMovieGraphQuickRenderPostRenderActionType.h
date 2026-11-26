#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphQuickRenderPostRenderActionType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphQuickRenderPostRenderActionType : uint8 {
    DoNothing,
    PlayRenderOutput,
    OpenOutputDirectory,
};

