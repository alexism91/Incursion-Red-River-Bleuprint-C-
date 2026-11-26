#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphQuickRenderButtonMode.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphQuickRenderButtonMode : uint8 {
    NormalMovieRenderQueue,
    QuickRender,
};

