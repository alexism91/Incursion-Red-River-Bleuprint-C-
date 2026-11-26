#pragma once
#include "CoreMinimal.h"
#include "EQueryEngineType.generated.h"

UENUM(BlueprintType)
namespace EQueryEngineType {
    enum Type {
        QE_BVH,
        QE_SHG,
    };
}

