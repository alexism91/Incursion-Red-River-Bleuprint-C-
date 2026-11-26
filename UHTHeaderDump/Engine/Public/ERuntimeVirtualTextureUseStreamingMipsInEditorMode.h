#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureUseStreamingMipsInEditorMode.generated.h"

UENUM(BlueprintType)
enum class ERuntimeVirtualTextureUseStreamingMipsInEditorMode : uint8 {
    Never,
    PIEOnly,
    Always,
};

