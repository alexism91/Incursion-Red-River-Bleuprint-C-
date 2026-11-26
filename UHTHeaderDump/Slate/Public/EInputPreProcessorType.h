#pragma once
#include "CoreMinimal.h"
#include "EInputPreProcessorType.generated.h"

UENUM(BlueprintType)
enum class EInputPreProcessorType : uint8 {
    Overlay,
    PreEngine,
    Engine,
    PreEditor,
    Editor,
    PreGame,
    Game,
    Count,
};

