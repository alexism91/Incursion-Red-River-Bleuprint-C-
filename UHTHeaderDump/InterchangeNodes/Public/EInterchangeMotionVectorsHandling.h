#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMotionVectorsHandling.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMotionVectorsHandling : uint8 {
    NoMotionVectors,
    ImportVelocitiesAsMotionVectors,
    CalculateMotionVectorsDuringImport,
};

