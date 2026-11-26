#pragma once
#include "CoreMinimal.h"
#include "EFilmbackOverrideSource.generated.h"

UENUM(BlueprintType)
enum class EFilmbackOverrideSource : uint8 {
    LensFile,
    CroppedFilmbackSetting,
    DoNotOverride,
};

