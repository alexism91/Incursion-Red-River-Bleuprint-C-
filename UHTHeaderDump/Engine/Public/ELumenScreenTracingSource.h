#pragma once
#include "CoreMinimal.h"
#include "ELumenScreenTracingSource.generated.h"

UENUM(BlueprintType)
enum class ELumenScreenTracingSource : uint8 {
    SceneColor,
    AntialiasedSceneColorWithTranslucency,
};

