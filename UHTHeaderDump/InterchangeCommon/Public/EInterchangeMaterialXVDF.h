#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialXVDF.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMaterialXVDF : uint8 {
    Absorption,
    Anisotropic,
    MaxVDFCount,
};

