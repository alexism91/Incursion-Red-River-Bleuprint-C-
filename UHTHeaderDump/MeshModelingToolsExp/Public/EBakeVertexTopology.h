#pragma once
#include "CoreMinimal.h"
#include "EBakeVertexTopology.generated.h"

UENUM()
enum class EBakeVertexTopology : int32 {
    CreateNew,
    UseExisting,
};

