#pragma once
#include "CoreMinimal.h"
#include "EDataValidationUsecase.generated.h"

UENUM(BlueprintType)
enum class EDataValidationUsecase : uint8 {
    None,
    Manual,
    Commandlet,
    Save,
    PreSubmit,
    Script,
};

