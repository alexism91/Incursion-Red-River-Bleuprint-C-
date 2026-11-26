#pragma once
#include "CoreMinimal.h"
#include "EGeometryCacheImport.generated.h"

UENUM(BlueprintType)
enum class EGeometryCacheImport : uint8 {
    Never,
    OnLoad,
    OnSave,
};

