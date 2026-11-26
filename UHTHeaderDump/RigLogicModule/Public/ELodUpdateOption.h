#pragma once
#include "CoreMinimal.h"
#include "ELodUpdateOption.generated.h"

UENUM(BlueprintType)
enum class ELodUpdateOption : uint8 {
    LOD0Only,
    LOD1AndHigher,
    All,
};

