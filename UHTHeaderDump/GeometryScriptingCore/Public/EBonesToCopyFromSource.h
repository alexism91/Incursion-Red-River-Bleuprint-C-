#pragma once
#include "CoreMinimal.h"
#include "EBonesToCopyFromSource.generated.h"

UENUM(BlueprintType)
enum class EBonesToCopyFromSource : uint8 {
    AllBones,
    OnlyBoundAndParents,
    OnlyBoundAndRoot,
};

