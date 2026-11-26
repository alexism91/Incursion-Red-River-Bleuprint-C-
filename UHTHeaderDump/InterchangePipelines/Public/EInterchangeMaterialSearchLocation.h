#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialSearchLocation.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMaterialSearchLocation : uint8 {
    Local,
    UnderParent,
    UnderRoot,
    AllAssets,
    DoNotSearch,
};

