#pragma once
#include "CoreMinimal.h"
#include "EChaosVDSceneQueryMode.generated.h"

UENUM()
enum class EChaosVDSceneQueryMode : int32 {
    Single,
    Multi,
    Test,
    Invalid,
};

