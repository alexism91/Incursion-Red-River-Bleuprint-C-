#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineMP4EncodeLevel.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineMP4EncodeLevel : uint8 {
    Auto,
    Level1 = 10,
    Level1_b,
    Level1_1 = Level1_b,
    Level1_2,
    Level1_3,
    Level2 = 20,
    Level2_1,
    Level2_2,
    Level3 = 30,
    Level3_1,
    Level3_2,
    Level4 = 40,
    Level4_1,
    Level4_2,
    Level5 = 50,
    Level5_1,
    Level5_2,
};

