#pragma once
#include "CoreMinimal.h"
#include "ELandscapeHLODMeshSourceLODPolicy.generated.h"

UENUM(BlueprintType)
enum class ELandscapeHLODMeshSourceLODPolicy : uint8 {
    AutomaticLOD,
    SpecificLOD,
    LowestDetailLOD,
};

