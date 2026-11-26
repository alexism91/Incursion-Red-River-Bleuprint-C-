#pragma once
#include "CoreMinimal.h"
#include "ENiagaraAssetLibraryAssetTypes.generated.h"

UENUM(BlueprintType)
enum class ENiagaraAssetLibraryAssetTypes : uint8 {
    Emitters = 1,
    Systems,
    Scripts = 4,
};

