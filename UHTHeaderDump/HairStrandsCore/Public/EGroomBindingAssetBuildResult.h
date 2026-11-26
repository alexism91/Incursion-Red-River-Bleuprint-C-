#pragma once
#include "CoreMinimal.h"
#include "EGroomBindingAssetBuildResult.generated.h"

UENUM(BlueprintType)
enum class EGroomBindingAssetBuildResult : uint8 {
    Succeeded,
    Failed,
};

