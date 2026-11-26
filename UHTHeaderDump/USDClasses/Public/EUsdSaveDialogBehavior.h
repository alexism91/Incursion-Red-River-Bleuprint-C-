#pragma once
#include "CoreMinimal.h"
#include "EUsdSaveDialogBehavior.generated.h"

UENUM(BlueprintType)
enum class EUsdSaveDialogBehavior : uint8 {
    NeverSave,
    AlwaysSave,
    ShowPrompt,
};

